//
//  CPP-Notes
//
//  Created by Akshay Raj Gollahalli on 23/05/16.
//  Copyright © 2016 Akshay Raj Gollahalli. All rights reserved.
//

#include <cstdio>
#include <iostream>
using namespace std;

class Rational {
    int _n = 0;
    int _d = 1;
public:
    Rational ( int numerator = 0, int denominator = 1 ) : _n(numerator), _d(denominator) {};
    Rational ( const Rational & rhs ) : _n(rhs._n), _d(rhs._d) {};	// copy constructor
    ~Rational ();
    inline int numerator() const { return _n; };
    inline int denominator() const { return _d; };
    
    // Operator overload
    Rational & operator = ( const Rational & );
    // Rational operator + ( const Rational & ) const;
    Rational operator - ( const Rational & ) const;
    Rational operator * ( const Rational & ) const;
    Rational operator / ( const Rational & ) const;
    operator std::string () const; // +=
};

Rational & Rational::operator = ( const Rational & rhs ) {
    if( this != &rhs ) {
        _n = rhs.numerator();
        _d = rhs.denominator();
    }
    return *this;
}

// Non member function
Rational operator + ( const Rational & lhs, const Rational & rhs ) {
    return Rational((lhs.numerator() * rhs.denominator()) + (lhs.denominator() * rhs.numerator()), lhs.denominator() * rhs.denominator());
}

// operator overload as a member function
Rational Rational::operator - ( const Rational & rhs ) const {
    return Rational((_n * rhs._d) - (_d * rhs._n), _d * rhs._d);
}

Rational Rational::operator * ( const Rational & rhs ) const {
    return Rational(_n * rhs._n, _d * rhs._d);
}

Rational Rational::operator / ( const Rational & rhs ) const {
    return Rational(_n * rhs._d, _d * rhs._n);
}

// +=
Rational::operator std::string () const{
    const static int maxstring = 64;
    char s[maxstring];
    snprintf(s, maxstring, "%d/%d", _n, _d);
    return std::string(s);
}

Rational::~Rational() {
    _n = 0; _d = 1;
}

// useful for std::cout
std::ostream & operator << (std::ostream & o, const Rational & r) {
    return o << r.numerator() << '/' << r.denominator();
}

int main( int argc, char ** argv ) {
    
    Rational a = 7;		// 7/1
    cout << "a is: " << a << endl;
    Rational b(5, 3);	// 5/3
    cout << "b is: " << b << endl;
    Rational c = b;		// copy constructor
    cout << "c is: " << c << endl;
    Rational d;			// default constructor
    cout << "d is: " << d << endl;
    d = c;				// assignment operator
    cout << "d is: " << d << endl;
    Rational & e = d;	// reference
    d = e;				// assignment to self!
    cout << "e is: " << e << endl;

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;
    
    cout << 14 << " + " << b << " = " << 14 + b << endl;
    
    // Concatenate a string
    string s = "this is a string of: ";
    s += b;
    printf("%s\n",s.c_str());
//    cout << s << endl; // insted of printf this can be used.
    return 0;
}
