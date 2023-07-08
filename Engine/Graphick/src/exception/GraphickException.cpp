/*File "GraphickException.cpp" create by debial, (Пт 07 июл 2023 17:09:00)*/
#include "GraphickException.h"
const char* GraphickException::what()const noexcept{
   return "GraphickException";
}
InitException::InitException(const char *str_) :str(str_){}
const char* InitException::what()const noexcept{
   GraphickException::what();
   printf("+Init Error: %s",str);
   return "InitException";
}
