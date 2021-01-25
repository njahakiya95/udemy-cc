#include <cstring>
#include <iostream>
#include "Mystring.h"

//No-args constructor
Mystring::Mystring()
    : str{nullptr} {
        str = new char[1]; 
        *str = '\0'; 
    }

//Overloaded constructor
Mystring::Mystring(const char *s)
    : str {nullptr} {
        if(s == nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[std::strlen(s) + 1];
            std::strcpy(str, s);
        }
    }
    
//Copy constructor
Mystring::Mystring(const Mystring &source)
    : str{nullptr} {
        str = new char[std::strlen(source.str) + 1];
        str::strcpy(str, source.str); 
    }