#include "vector2d.h"

#include <iostream>

#include "vector.h"

//! This is the class immutable vector in 2d space, contain basic vector algebra
namespace immutable
{

  //! this is default class constructor implementation, which create object of
  //! type vector (0,0)
  template <class Gtype>
  vector2d<Gtype>::vector2d() : vector<Gtype>()
  {
  }
  //! this is the class constructor take x,y of generic type and create object
  //! of type vector (x,y)
  template <class Gtype>
  vector2d<Gtype>::vector2d(Gtype x, Gtype y) : vector<Gtype>(x, y)
  {
  }
  //! this is the implementation of class copy constructor vector(v.x,v.y)
  template <class Gtype>
  vector2d<Gtype>::vector2d(const vector2d<Gtype>& v) : vector<Gtype>(v.x, v.y)
  {
  }
  //! this is class vector2d destructor implementation
  template <class Gtype>
  vector2d<Gtype>::~vector2d()
  {
  }
  //! this is the operator+ overload, which take object by reference added to
  //! call object (this) and return new vector2d
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator+(vector2d<Gtype>& v)
  {
    return vector2d<Gtype>(this->x + v.x, this->y + v.y);
  }
  //! this is the operator- overload, which take object by reference and
  //! subtract it from (this) and return new vector2d
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator-(vector2d<Gtype>& v)
  {
    return vector2d<Gtype>(this->x - v.x, this->y - v.y);
  }
  //! this is the operator* overload, which take var with Gtype and return
  //! object of type vector2d
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator*(Gtype& scalier)
  {
    return vector2d<Gtype>(this->x * scalier, this->y * scalier);
  }
  //! this is the operator/ overload, which take var of type Gtype and return a
  //! vector2d object
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator/(Gtype& scalier)
  {
    return vector2d<Gtype>(this->x / scalier, this->y / scalier);
  }
  //! this is the operator+= overload, which take object of type vector2d added
  //! to (this) and return new vector2d
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator+=(vector2d<Gtype>& v)
  {
    this->x += v.x;
    this->y += v.y;
    return (*this);
  }
  //! this is the operator-= overload, which take object of type vector2d
  //! subtract it from (this) and return new vector2d
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator-=(vector2d<Gtype>& v)
  {
    this->x -= v.x;
    this->y -= v.y;
    return (*this);
  }
  //! this is the operator*= overload, which take var of type Gtype and return
  //! an object of vector2d
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator*=(Gtype& scalier)
  {
    this->x *= scalier;
    this->y *= scalier;
    return (*this);
  }
  //! this is the operator/= overload, which take var of type Gtype and return
  //! object of type vector2d
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator/=(Gtype& scalier)
  {
    this->x /= scalier;
    this->y /= scalier;
    return (*this);
  }
  //! this is the operator() overload, which will make the object created like a
  //! function and update the caller object (this)
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::operator()(Gtype x_new, Gtype y_new)
  {
    this->x = x_new;
    this->y = y_new;
    return (*this);
  }
  //! this is the implementation of vector math methods
  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::add(const vector2d<Gtype>& v)
  {
    return vector2d<Gtype>(this->x + v.x, this->y + v.y);
  }

  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::sub(const vector2d<Gtype>& v)
  {
    return vector2d<Gtype>(this->x - v.x, this->y - v.y);
  }

  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::multi(const Gtype& scaler)
  {
    return vector2d<Gtype>(this->x * scaler, this->y * scaler);
  }

  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::divide(const Gtype& scaler)
  {
    return vector2d<Gtype>(this->x / scaler, this->y / scaler);
  }

  template <class Gtype>
  vector2d<Gtype> vector2d<Gtype>::divide(const vector2d<Gtype>& v)
  {
    return vector2d<Gtype>(this->x / v.x, this->y / v.y);
  }

  template <class Gtype>
  Gtype vector2d<Gtype>::dot(const vector2d<Gtype>& v)
  {
    return (this->x * v.x + this->y * v.y);
  }
}  // namespace immutable
   //! this is the template class instantiation for various primitive data
template class immutable::vector2d<double>;
template class immutable::vector2d<float>;
template class immutable::vector2d<int>;
