#include "Library.hpp"
#include <algorithm>

// Konstruktor bezparametrowy
Library::Library() : books(nullptr), size(0) {
    std::cout << "Library()" << std::endl;
}

// Konstruktor z rozmiarem (tworzy pusta biblioteke o danym rozmiarze)
Library::Library(std::size_t size)
    : size(size), books(new Book[size]) {
    std::cout << "Library(" << size << ")" << std::endl;
}

// Konstruktor z lista inicjalizacyjna
Library::Library(std::initializer_list<Book> list)
    : size(list.size()), books(new Book[list.size()]) {
    std::cout << "Library(initializer_list)" << std::endl;
    std::size_t i = 0;
    for (const Book& b : list) {
        books[i] = b;
        i++;
    }
}

// Konstruktor kopiujacy
Library::Library(const Library& other)
    : size(other.size), books(new Book[other.size]) {
    std::cout << "Library(const Library&)" << std::endl;
    for (std::size_t i = 0; i < size; i++) {
        books[i] = other.books[i];
    }
}

// Konstruktor przenoszacy
Library::Library(Library&& other)
    : books(other.books), size(other.size) {
    std::cout << "Library(Library&&)" << std::endl;
    other.books = nullptr;
    other.size = 0;
}

// Kopiujacy operator przypisania (copy-swap)
Library& Library::operator=(const Library& right) {
    std::cout << "operator=(const Library&)" << std::endl;
    Library tmp(right);
    std::swap(books, tmp.books);
    std::swap(size, tmp.size);
    return *this;
}

// Przenoszacy operator przypisania
Library& Library::operator=(Library&& right) {
    std::cout << "operator=(Library&&)" << std::endl;
    std::swap(books, right.books);
    std::swap(size, right.size);
    return *this;
}

// Operator dostepu (nie-const)
Book& Library::operator[](std::size_t index) {
    return books[index];
}

// Operator dostepu (const)
const Book& Library::operator[](std::size_t index) const {
    return books[index];
}

// Getter rozmiaru
std::size_t Library::GetSize() const {
    return size;
}

// Destruktor
Library::~Library() {
    std::cout << "~Library()" << std::endl;
    if (books != nullptr) {
        delete[] books;
    }
}

// Operator wypisania na strumien
std::ostream& operator<<(std::ostream& ostr, const Library& lib) {
    ostr << "Library{";
    for (std::size_t i = 0; i < lib.size; i++) {
        if (i > 0)
            ostr << ", ";
        ostr << lib.books[i];
    }
    ostr << "}";
    return ostr;
}
