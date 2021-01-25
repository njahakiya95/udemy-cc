#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring 
{
private:
    char *str; 
public:
    Mystring();                         //No-args constructor 
    Mystring(const char *s)             //Overloaded constructor
    Mystring(const Mystring &source)    //Copy constructor
    ~Mystring(); 
    
    void display() const; 
    int get_length() const;             //getters 
    const char *get_char(0 const); 

   
}; 

#endif 