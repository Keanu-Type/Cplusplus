#ifndef _ILLEGAL_BALANCE EXCEPTION_H_
#define _ILLEGAL_BALANCE EXCEPTION_H_


    class IllegalBalanceException: public std::exception{
        public:
            IllegalBalanceException()noexcept=default;
            ~IllegalBalanceException()=default;//destructor

            virtual const char *what() const noexcept{
                return "illegal balance exception";
            }
    };

#endif 