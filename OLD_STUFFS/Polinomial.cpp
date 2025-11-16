#include <iostream>

using namespace std;

class Term {
public:
    int coeff;
    int exp;

    Term(int coefficient = 0, int exponent = 0) : coeff(coefficient), exp(exponent) {}
};

class Polynomial {
private:
    int capacity;
    int size;
    Term *terms;

public:
    Polynomial(int initialCapacity = 10) : capacity(initialCapacity), size(0) {
        terms = new Term[initialCapacity];
    }

    ~Polynomial() {
        delete[] terms;
    }

    void create() {
        cout << "Number of terms?";
        cin >> size;

        if (size > capacity) {
            // Reallocate memory if needed
            delete[] terms;
            capacity = size * 2; // You can adjust the resizing strategy
            terms = new Term[capacity];
        }

        cout << "Enter terms" << endl;
        for (int i = 0; i < size; i++)
            cin >> terms[i].coeff >> terms[i].exp;
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << terms[i].coeff << "x^" << terms[i].exp << "+";
        cout << endl;
    }

    Polynomial add(const Polynomial &other) const {
        Polynomial sum(size + other.size);

        int i = 0, j = 0, k = 0;

        while (i < size && j < other.size) {
            if (terms[i].exp > other.terms[j].exp)
                sum.terms[k++] = terms[i++];
            else if (terms[i].exp < other.terms[j].exp)
                sum.terms[k++] = other.terms[j++];
            else {
                int coeffSum = terms[i].coeff + other.terms[j].coeff;
                if (coeffSum != 0)
                    sum.terms[k++] = Term(coeffSum, terms[i].exp);
                i++;
                j++;
            }
        }

        while (i < size) sum.terms[k++] = terms[i++];
        while (j < other.size) sum.terms[k++] = other.terms[j++];

        sum.size = k;
        return sum;
    }
};

int main() {
    Polynomial p1, p2, p3;

    cout << "Enter polynomial 1:" << endl;
    p1.create();

    cout << "Enter polynomial 2:" << endl;
    p2.create();

    p3 = p1.add(p2);

    cout << endl;
    cout << "Polynomial 1: ";
    p1.display();
    cout << "Polynomial 2: ";
    p2.display();
    cout << "Sum: ";
    p3.display();

    return 0;
}
