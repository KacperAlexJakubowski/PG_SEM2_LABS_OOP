#pragma once
#include <string>
#include <iostream>

class Book {
    std::string author, title;

public:
    // Konstruktor bezparametrowy
    Book();

    // Konstruktor z const l-referencjami
    Book(const std::string& author, const std::string& title);

    // Konstruktor z r-referencjami
    Book(std::string&& author, std::string&& title);

    // Konstruktor kopiujacy
    Book(const Book& other);

    // Konstruktor przenoszacy
    Book(Book&& other);

    // Kopiujacy operator przypisania (copy-swap)
    Book& operator=(const Book& right);

    // Przenoszacy operator przypisania
    Book& operator=(Book&& right);

    // Destruktor
    ~Book();

    // Gettery
    const std::string& GetAuthor() const;
    const std::string& GetTitle() const;

    // Setery z const l-referencja
    void SetAuthor(const std::string& a);
    void SetTitle(const std::string& t);

    // Setery z r-referencja
    void SetAuthor(std::string&& a);
    void SetTitle(std::string&& t);

    // Operator wypisania na strumien
    friend std::ostream& operator<<(std::ostream& ostr, const Book& b);
};
