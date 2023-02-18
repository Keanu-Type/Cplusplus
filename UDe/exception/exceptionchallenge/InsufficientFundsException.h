#ifndef _INSUFFICIENT_FUNDS_EXCEPTION_H_
#define _INSUFFICIENT_FUNDS_EXCEPTION_H_


    class InsufficientFundsException: public std::exception{
        public:
            InsufficientFundsException()noexcept=default;
            ~InsufficientFundsException()=default;//destructor

            virtual const char *what() const noexcept{
                return "Insufficient Error";
            }
    };

#endif 