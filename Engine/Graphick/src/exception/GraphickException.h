/*File "GraphickException.h" create by debial, (Пт 07 июл 2023 17:09:00)*/
#ifndef DEBIAL_GRAPHICKEXCEPTION_H_SENTURY
#define DEBIAL_GRAPHICKEXCEPTION_H_SENTURY
#include "../../../General/error/Exception.h"
class GraphickException : public Exception{
   public:
   virtual const char* what()const noexcept override;
};
class InitException : public GraphickException{
   const char *str;
   public:
   InitException(const char *str);
   virtual const char* what()const noexcept override;
};
class OpenException : public GraphickException{
   const char *str;
   public:
   OpenException(const char *str);
   virtual const char* what()const noexcept override;
};

#endif
