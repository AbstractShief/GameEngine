/*File "PhysickException.h" create by debial, (Сб 17 июн 2023 12:04:23)*/
#ifndef DEBIAL_EXCEPTION_H_SENTURY
#define DEBIAL_EXCEPTION_H_SENTURY
//времено тут класс Exception
#include <iostream>
class Exception : public std::exception{
   public:
   virtual const char* what()const noexcept override  = 0;
};
#endif
