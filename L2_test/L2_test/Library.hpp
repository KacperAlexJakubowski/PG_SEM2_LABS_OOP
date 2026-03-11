#pragma once
#include "Book.hpp"
#include <initializer_list>
#include <iostream>

class Library {
    Book* books;
    std::size_t size;

public:
    // Konstruktor bezparametrowy
    Library();

    // Konstruktor z rozmiarem (tworzy pusta biblioteke o danym rozmiarze)
    Library(std::size_t size);

    // Konstruktor z lista inicjalizacyjna
    Library(std::initializer_list<Book> list);

    // Konstruktor kopiujacy
    Library(const Library& other);

    // Konstruktor przenoszacy
    Library(Library&& other);

    // Kopiujacy operator przypisania (copy-swap)
    Library& operator=(const Library& right);

    // Przenoszacy operator przypisania
    Library& operator=(Library&& right);

    // Operator dostepu (nie-const)
    Book& operator[](std::size_t index);

    // Operator dostepu (const)
    const Book& operator[](std::size_t index) const;

    // Getter rozmiaru
    std::size_t GetSize() const;

    // Destruktor
    ~Library();

    // Operator wypisania na strumien
    friend std::ostream& operator<<(std::ostream& ostr, const Library& lib);
};
