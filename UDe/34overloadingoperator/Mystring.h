#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring{
    private:
        char *str;
    public:
        Mystring();             //no args constructor
        Mystring(const char *s); //overloaded constructor
        Mystring(const Mystring &source); //copy constructor
        Mystring(Mystring &&source); //move constructor
        ~Mystring(); //destructor

        Mystring &operator = (const Mystring &rhs); //Copy assignment. this is NOT construcotr
        Mystring &operator = (Mystring &&rhs); //Copy assignment. this is NOT construcotr

        //LOWERCASE THEM, then return it
        //operator minus
        Mystring operator-() const; //unary operator
        Mystring operator+(const Mystring &rhs) const; //concatenate
        bool operator==(const Mystring &rhs) const;    //
        void display() const;
        //int get_length() const;     //GETTERS
        const char *get_str() const;

};
#endif