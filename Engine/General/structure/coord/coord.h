/*File "coord.cpp" create by debial, (Пн 24 июл 2023 12:56:12)*/
#ifndef DEBIAL_COORD_H_SENTURY
#define DEBIAL_COORD_H_SENTURY
#include <math.h>
template<class TYPE,class VectorType>
class Vector2{
   public:
   TYPE x,y;
   Vector2(TYPE x_,TYPE y_) : x(x_),y(y_){}
   //+ -
   VectorType operator +(TYPE obj)const{return VectorType(x+obj,y+obj);}
   VectorType operator -(TYPE obj)const{return VectorType(x-obj,y-obj);}
   VectorType operator +(VectorType vector)const{return VectorType(x+vector.x,y+vector.y);}
   VectorType operator -(VectorType vector)const{return VectorType(x-vector.x,y-vector.y);}

   void operator +=(TYPE obj){x+=obj;y+=obj;}
   void operator -=(TYPE obj){x-=obj;y-=obj;}
   void operator +=(VectorType vector){x+=vector.x;y+=vector.y;}
   void operator -=(VectorType vector){x-=vector.x;y-=vector.y;}
   //* /
   VectorType operator *(TYPE obj)const{return VectorType(x*obj,y*obj);}
   VectorType operator /(TYPE obj)const{return VectorType(x/obj,y/obj);}
   VectorType operator *(VectorType vector)const{return VectorType(x*vector.x,y*vector.y);}
   VectorType operator /(VectorType vector)const{return VectorType(x/vector.x,y/vector.y);}

   VectorType operator *=(TYPE obj){x*=obj;y*=obj;}
   VectorType operator /=(TYPE obj){x/=obj;y/=obj;}
   VectorType operator *=(VectorType vector){x*=vector.x;y*=vector.y;}
   VectorType operator /=(VectorType vector){x/=vector.x;y/=vector.y;}

   bool operator==(VectorType vector) const{
      return (x==vector.x && y==vector.y ? 1 : 0);
   }
   VectorType operator=(VectorType vector){
      x=vector.x;
      y=vector.y;
      return this;
   }
   //vector operation
   double Module()const{
      return sqrt(x*x+y*y);
   }
   double Dot(VectorType vector)const{
      return x*vector.x+y*vector.y;
   }
   double AngleWith(VectorType vector)const{
      return Dot(vector)/(Module()*vector.Module());
   }
   //base operation
   virtual char *ToString()const=0;
};
class Vector2I : public Vector2<int,Vector2I>{
   public:
   Vector2I(int x,int y);
   char *ToString()const override;
};
class Vector2L : public Vector2<long,Vector2L>{
   public:
   Vector2L(long x,long y);
   char *ToString()const override;
};
class Vector2F : public Vector2<float,Vector2F>{
   public:
   Vector2F(float x,float y);
   char *ToString()const override;
};
class Vector2D : public Vector2<double,Vector2D>{
   public:
   Vector2D(double x,double y);
   char *ToString()const override;
};

#endif
