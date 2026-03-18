//package pl.edu.pg.eti.ksg.po.lab1;
import java.util.Scanner;

public class Javalab1 {
    public static void main(String[] args) {
        Scanner inputScanner = new Scanner(System.in);

        System.out.println("Jak masz na imię?");
        String imie = inputScanner.nextLine();
        System.out.println("Witaj " + imie + "!");

        A a = new A(5);
        System.out.println("Pobieranie liczby:");
        System.out.println(a.getLiczba());
        System.out.println("Drukowanie całego obiektu:");
        System.out.println(a);

        a.setLiczba(6);
        System.out.println("Drukowanie całego obiektu po ustawieniu liczby:");
        System.out.println(a);

        A a1 = new A(6);
        System.out.println("Porównywanie referencji: a == a");
        System.out.println(a == a);
        System.out.println("Porównywanie referencji: a == a1");
        System.out.println(a == a1);
        System.out.println("Metoda equals: a.equals(a)");
        System.out.println(a.equals(a));
        System.out.println("Metoda equals: a.equals(a1)");
        System.out.println(a.equals(a1));
        System.out.println("Metoda hashCode: a.hashCode()");
        System.out.println(a.hashCode());
        System.out.println("Metoda hashCode: a1.hashCode()");
        System.out.println(a1.hashCode());

        B b = new B(2.5);
        System.out.println("Pobieranie liczby:");
        System.out.println(b.getLiczba());
        System.out.println("Drukowanie całego obiektu:");
        System.out.println(b);

        b.setLiczba(3.14);
        System.out.println("Drukowanie całego obiektu po ustawieniu liczby:");
        System.out.println(b);

        B b1 = new B(3.14);
        System.out.println("Porównywanie referencji: b == b");
        System.out.println(b == b);
        System.out.println("Porównywanie referencji: b == b1");
        System.out.println(b == b1);
        System.out.println("Metoda equals: b.equals(b)");
        System.out.println(b.equals(b));
        System.out.println("Metoda equals: b.equals(b1)");
        System.out.println(b.equals(b1));
        System.out.println("Metoda hashCode: b.hashCode()");
        System.out.println(b.hashCode());
        System.out.println("Metoda hashCode: b1.hashCode()");
        System.out.println(b1.hashCode());
    }
}