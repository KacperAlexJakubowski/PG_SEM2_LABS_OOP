#include "Book.hpp"
#include <utility>

// Konstruktor bezparametrowy
Book::Book() : author(""), title("") {
    std::cout << "Book()" << std::endl;
}

// Konstruktor z const l-referencjami
Book::Book(const std::string& author, const std::string& title)
    : author(author), title(title) {
    std::cout << "Book(const string&, const string&)" << std::endl;
}

// Konstruktor z r-referencjami
Book::Book(std::string&& author, std::string&& title)
    : author(std::move(author)), title(std::move(title)) {
    std::cout << "Book(string&&, string&&)" << std::endl;
}

// Konstruktor kopiujacy
Book::Book(const Book& other)
    : author(other.author), title(other.title) {
    std::cout << "Book(const Book&)" << std::endl;
}

// Konstruktor przenoszacy
Book::Book(Book&& other)
    : author(std::move(other.author)), title(std::move(other.title)) {
    std::cout << "Book(Book&&)" << std::endl;
}

// Kopiujacy operator przypisania (copy-swap)
Book& Book::operator=(const Book& right) {
    std::cout << "operator=(const Book&)" << std::endl;
    Book tmp(right);
    std::swap(author, tmp.author);
    std::swap(title, tmp.title);
    return *this;
}

// Przenoszacy operator przypisania
Book& Book::operator=(Book&& right) {
    std::cout << "operator=(Book&&)" << std::endl;
    author = std::move(right.author);
    title = std::move(right.title);
    return *this;
}

// Destruktor
Book::~Book() {
    std::cout << "~Book()" << std::endl;
}

// Gettery
const std::string& Book::GetAuthor() const { return author; }
const std::string& Book::GetTitle() const { return title; }

// Setery z const l-referencja
void Book::SetAuthor(const std::string& a) { author = a; }
void Book::SetTitle(const std::string& t) { title = t; }

// Setery z r-referencja
void Book::SetAuthor(std::string&& a) { author = std::move(a); }
void Book::SetTitle(std::string&& t) { title = std::move(t); }

// Operator wypisania na strumien
std::ostream& operator<<(std::ostream& ostr, const Book& b) {
    ostr << "Book{\"" << b.author << "\", \"" << b.title << "\"}";
    return ostr;
}
