#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
    private:
        char *str;
    public:
        Mystring();             //no args constructor
        Mystring(const char *s); //overloaded constructor
        Mystring(const Mystring &source); //copy constructor
        ~Mystring(); //destructor

        Mystring &operator = (const Mystring &rhs); //Copy assignment. this is NOT construcotr

        void display() const;
        int get_length() const;     //GETTERS
        const char *get_str() const;

};
#endif