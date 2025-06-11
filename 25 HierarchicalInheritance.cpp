#include<iostream>
using namespace std;

    // Hybrid Inheritance - In hierarchical inheritance, multiple classes are derived from a single base class. This forms a tree-like structure.

class Book{ // Base class members
    public:
        void bookFunction(){
            cout << "Book Function" << endl;
        }
};

class Author{ // Base class members
    public:
        void authorFunction(){
            cout << "Author Function" << endl;
        }
};

class Publisher{ // Base class members
    public:
        void publisherFunction(){
            cout << "Publisher Function" << endl;
        }
};

class BookDetails : public Book , public Author , public Publisher{  // Derived1 class members
    public:
        void bookDetailsFunction(){
            cout << "Book Details Function" << endl;
        }
};

class price : public BookDetails{  // Derived2 class members
    public:
        void priceFunction(){
            cout << "Price Function" << endl;
        }
};

int main(){
    price p;
    p.bookFunction();
    p.authorFunction();
    p.publisherFunction();
    p.bookDetailsFunction();
    p.priceFunction();
    return 0;
}