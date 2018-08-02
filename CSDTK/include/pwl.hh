/* This is the header file of the Parma Watchdog Library.
   Copyright (C) 2001-2009 Roberto Bagnara <bagnara@cs.unipr.it>

This file is part of the Parma Watchdog Library (PWL).

The PWL is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The PWL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software Foundation,
Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02111-1307, USA.

For the most up-to-date information see the Parma Polyhedra Library
site: http://www.cs.unipr.it/ppl/ . */

#ifndef PWL_pwl_hh
#define PWL_pwl_hh 1

#ifdef NDEBUG
# define PWL_SAVE_NDEBUG 1
# undef NDEBUG
#endif

// Automatically generated from PPL source file ../pwl-config.h line 1
/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define to 1 if you have the declaration of `getenv', and to 0 if you don't.
   */
#define PWL_HAVE_DECL_GETENV 0

/* Define to 1 if you have the <dlfcn.h> header file. */
#define PWL_HAVE_DLFCN_H 1

/* Define to 1 if you have the <fenv.h> header file. */
#define PWL_HAVE_FENV_H 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define PWL_HAVE_INTTYPES_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define PWL_HAVE_MEMORY_H 1

/* Define to 1 if you have the `setitimer' function. */
#define HAVE_SETITIMER 1

/* Define to 1 if the system has the type `siginfo_t'. */
#define HAVE_SIGINFO_T 1

/* Define to 1 if you have the <stdint.h> header file. */
#define PWL_HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define PWL_HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define PWL_HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define PWL_HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define PWL_HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define PWL_HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define PWL_HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define PWL_HAVE_UNISTD_H 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* Assertions are disabled when this is defined */
#define NDEBUG 1

/* Define to the address where bug reports for this package should be sent. */
#define PWL_PACKAGE_BUGREPORT "bagnara@cs.unipr.it"

/* Define to the full name of this package. */
#define PWL_PACKAGE_NAME "the Parma Watchdog Library"

/* Define to the full name and version of this package. */
#define PWL_PACKAGE_STRING "the Parma Watchdog Library 0.7"

/* Define to the one symbol short name of this package. */
#define PWL_PACKAGE_TARNAME "pwl"

/* Define to the version of this package. */
#define PWL_PACKAGE_VERSION "0.7"

/* Define to 1 if you have the ANSI C header files. */
#define PWL_STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define PWL_TIME_WITH_SYS_TIME 1

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */


#ifdef PWL_NDEBUG
# define NDEBUG 1
#endif

// Automatically generated from PPL source file ../../../Watchdog/src/Doubly_Linked_Object.types.hh line 1

#ifndef PWL_Doubly_Linked_Object_types_hh
#define PWL_Doubly_Linked_Object_types_hh 1

namespace Parma_Watchdog_Library {

class Doubly_Linked_Object;

} // namespace Parma_Watchdog_Library

#endif // !defined(PWL_Doubly_Linked_Object_types_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/EList.types.hh line 1

#ifndef PWL_EList_types_hh
#define PWL_EList_types_hh 1

namespace Parma_Watchdog_Library {

template <typename T>
class EList;

} // namespace Parma_Watchdog_Library

#endif // !defined(PWL_EList_types_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/EList_Iterator.types.hh line 1

#ifndef PWL_EList_Iterator_types_hh
#define PWL_EList_Iterator_types_hh 1

namespace Parma_Watchdog_Library {

template <typename T>
class EList_Iterator;

} // namespace Parma_Watchdog_Library

#endif // !defined(PWL_EList_Iterator_types_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Handler.types.hh line 1

#ifndef PWL_Handler_types_hh
#define PWL_Handler_types_hh 1

namespace Parma_Watchdog_Library {

class Handler;

template <typename Flag_Base, typename Flag>
class Handler_Flag;

class Handler_Function;

} // namespace Parma_Watchdog_Library

#endif // !defined(PWL_Handler_types_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Pending_Element.types.hh line 1

#ifndef PWL_Pending_Element_types_hh
#define PWL_Pending_Element_types_hh 1

namespace Parma_Watchdog_Library {

class Pending_Element;

} // namespace Parma_Watchdog_Library

#endif // !defined(PWL_Pending_Element_types_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Pending_List.types.hh line 1

#ifndef PWL_Pending_List_types_hh
#define PWL_Pending_List_types_hh 1

namespace Parma_Watchdog_Library {

class Pending_List;

} // namespace Parma_Watchdog_Library

#endif // !defined(PWL_Pending_List_types_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Time.types.hh line 1

#ifndef PWL_Time_types_hh
#define PWL_Time_types_hh 1

namespace Parma_Watchdog_Library {

class Time;

} // namespace Parma_Watchdog_Library

#endif // !defined(PWL_Time_types_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Watchdog.types.hh line 1

#ifndef PWL_Watchdog_types_hh
#define PWL_Watchdog_types_hh 1

namespace Parma_Watchdog_Library {
  class Watchdog;
  class Flag;
  class Init;
}

#endif // !defined(PWL_Watchdog_types_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Handler.defs.hh line 1
/* Handler and derived classes' declaration.
*/

#ifndef PWL_Handler_defs_hh
#define PWL_Handler_defs_hh 1

// Automatically generated from PPL source file ../../../Watchdog/src/Handler.defs.hh line 27

//! Abstract base class for handlers of the watchdog events.
class Parma_Watchdog_Library::Handler {
public:
  //! Does the job.
  virtual void act() const = 0;

  //! Virtual destructor.
  virtual ~Handler();
};

//! A kind of Handler that installs a flag onto a flag-holder.
/*!
  The template class Handler_Flag<Flag_Base, Flag> is an handler whose
  job is to install a flag onto an <EM>holder</EM> for the flag.
  The flag is of type \p Flag and the holder is a (volatile) pointer
  to \p Flag_Base.  Installing the flag onto the holder means making
  the holder point to the flag, so that it must be possible to assign
  a value of type <CODE>Flag*</CODE> to an entity of type
  <CODE>Flag_Base*</CODE>.
  The class \p Flag must provide the method

  \code
    int priority() const
  \endcode
  returning an integer priority associated to the flag.

  The handler will install its flag onto the holder only if the holder
  is empty, namely, it is the null pointer, or if the holder holds a
  flag of strictly lower priority.
 */
template <typename Flag_Base, typename Flag>
class Parma_Watchdog_Library::Handler_Flag : virtual public Handler {
public:
  //! Constructor with a given function.
  Handler_Flag(const Flag_Base* volatile& holder, Flag& flag);

  //! Does its job: installs the flag onto the holder, if a flag with
  //! an higher priority has not already been installed.
  void act() const;

private:
  // declare holder as reference to volatile pointer to const Flag_Base
  const Flag_Base* volatile& h;
  Flag& f;
};

//! A kind of Handler calling a given function.
class Parma_Watchdog_Library::Handler_Function : virtual public Handler {
public:
  //! Constructor with a given function.
  Handler_Function(void (*function)());

  //! Does its job: calls the embedded function.
  void act() const;

private:
  //! Pointer to the embedded function.
  void (*f)();
};

// Automatically generated from PPL source file ../../../Watchdog/src/Handler.inlines.hh line 1
/* Handler and derived classes' implementation: inline functions.
*/

#ifndef PWL_Handler_inlines_hh
#define PWL_Handler_inlines_hh 1

namespace Parma_Watchdog_Library {

inline
Handler::~Handler() {
}

template <typename Flag_Base, typename Flag>
Handler_Flag<Flag_Base, Flag>::Handler_Flag(const Flag_Base* volatile& holder,
					    Flag& flag)
  : h(holder), f(flag) {
}

template <typename Flag_Base, typename Flag>
void
Handler_Flag<Flag_Base, Flag>::act() const {
  if (h == 0 || static_cast<const Flag&>(*h).priority() < f.priority())
    h = &f;
}

inline
Handler_Function::Handler_Function(void (*function)())
  : f(function) {
}

inline void
Handler_Function::act() const {
  (*f)();
}

} // namespace Parma_Watchdog_Library

#endif // !defined(PWL_Handler_inlines_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Handler.defs.hh line 89

#endif // !defined(PWL_Handler_defs_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Time.defs.hh line 1
/* Time class declaration.
*/

#ifndef PWL_Time_defs_hh
#define PWL_Time_defs_hh 1

// Automatically generated from PPL source file ../../../Watchdog/src/Time.defs.hh line 27

namespace Parma_Watchdog_Library {

//! Returns <CODE>true</CODE> if and only if \p x and \p y are equal.
bool operator==(const Time& x, const Time& y);

//! Returns <CODE>true</CODE> if and only if \p x and \p y are different.
bool operator!=(const Time& x, const Time& y);

//! Returns <CODE>true</CODE> if and only if \p x is shorter than \p y.
bool operator<(const Time& x, const Time& y);

/*! \brief
  Returns <CODE>true</CODE> if and only if \p x is shorter than
  or equal to \p y.
*/
bool operator<=(const Time& x, const Time& y);

//! Returns <CODE>true</CODE> if and only if \p x is longer than \p y.
bool operator>(const Time& x, const Time& y);

/*! \brief
  Returns <CODE>true</CODE> if and only if \p x is longer than
  or equal to \p y.
*/
bool operator>=(const Time& x, const Time& y);

//! Returns the sum of \p x and \p y.
Time operator+(const Time& x, const Time& y);

/*! \brief
  Returns the difference of \p x and \p y or the null interval,
  if \p x is shorter than \p y.
*/
Time operator-(const Time& x, const Time& y);

} // namespace Parma_Watchdog_Library

//! A class for representing and manipulating positive time intervals.
class Parma_Watchdog_Library::Time {
public:
  //! Zero seconds.
  Time();

  //! Constructor taking a number of hundredths of a second.
  explicit Time(unsigned long hundredths_of_a_second);

  //! Constructor with seconds and microseconds.
  Time(unsigned long s, unsigned long m);

  /*! \brief
    Returns the number of whole seconds contained in the represented
    time interval.
  */
  unsigned long seconds() const;

  /*! \brief
    Returns the number of microseconds that, when added to the number
    of seconds returned by seconds(), give the represent time interval.
  */
  unsigned long microseconds() const;

  //! Adds \p y to \p *this.
  Time& operator+=(const Time& y);

  /*! \brief
    Subtracts \p y from \p *this; if \p *this is shorter than \p y,
    \p *this is set to the null interval.
  */
  Time& operator-=(const Time& y);

  //! Checks if all the invariants are satisfied.
  bool OK() const;

private:
  //! Number of seconds.
  unsigned long secs;

  //! Number of microseconds.
  unsigned long microsecs;
};

// Automatically generated from PPL source file ../../../Watchdog/src/Time.inlines.hh line 1
/* Time class implementation: inline functions.
*/

#ifndef PWL_Time_inlines_hh
#define PWL_Time_inlines_hh 1

#include <cassert>

namespace Parma_Watchdog_Library {

inline
Time::Time()
  : secs(0), microsecs(0) {
  assert(OK());
}

inline
Time::Time(unsigned long hundredths_of_a_second)
  : secs(hundredths_of_a_second / 100),
    microsecs((hundredths_of_a_second % 100) * 10000) {
  assert(OK());
}

inline
Time::Time(unsigned long s, unsigned long m)
  : secs(s),
    microsecs(m) {
  if (microsecs >= 1000000) {
    secs += microsecs / 1000000;
    microsecs %= 1000000;
  }
  assert(OK());
}

inline unsigned long
Time::seconds() const {
  return secs;
}

inline unsigned long
Time::microseconds() const {
  return microsecs;
}

inline Time&
Time::operator+=(const Time& y) {
  unsigned long r_secs = secs + y.secs;
  unsigned long r_microsecs = microsecs + y.microsecs;
  if (r_microsecs >= 1000000) {
    ++r_secs;
    r_microsecs %= 1000000;
  }
  secs = r_secs;
  microsecs = r_microsecs;
  assert(OK());
  return *this;
}

inline Time&
Time::operator-=(const Time& y) {
  long r_secs = secs - y.secs;
  long r_microsecs = microsecs - y.microsecs;
  if (r_microsecs < 0) {
    --r_secs;
    r_microsecs += 1000000;
  }
  if (r_secs < 0)
    r_secs = r_microsecs = 0;
  secs = r_secs;
  microsecs = r_microsecs;
  assert(OK());
  return *this;
}

inline Time
operator+(const Time& x, const Time& y) {
  Time z = x;
  z += y;
  return z;
}

inline Time
operator-(const Time& x, const Time& y) {
  Time z = x;
  z -= y;
  return z;
}

inline bool
operator==(const Time& x, const Time& y) {
  assert(x.OK() && y.OK());
  return x.seconds() == y.seconds() && y.microseconds() == y.microseconds();
}

inline bool
operator!=(const Time& x, const Time& y) {
  assert(x.OK() && y.OK());
  return !(x == y);
}

inline bool
operator<(const Time& x, const Time& y) {
  assert(x.OK() && y.OK());
  return x.seconds() < y.seconds()
    || (x.seconds() == y.seconds() && x.microseconds() < y.microseconds());
}

inline bool
operator<=(const Time& x, const Time& y) {
  return x < y || x == y;
}

inline bool
operator>(const Time& x, const Time& y) {
  return y < x;
}

inline bool
operator>=(const Time& x, const Time& y) {
  return y <= x;
}

} // namespace Parma_Watchdog_Library

#endif // !defined(PWL_Time_inlines_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Time.defs.hh line 110

#endif // !defined(PWL_Time_defs_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Doubly_Linked_Object.defs.hh line 1
/* Doubly_Linked_Object class declaration.
*/

#ifndef PWL_Doubly_Linked_Object_defs_hh
#define PWL_Doubly_Linked_Object_defs_hh 1

// Automatically generated from PPL source file ../../../Watchdog/src/Doubly_Linked_Object.defs.hh line 29

//! A (base) class for doubly linked objects.
class Parma_Watchdog_Library::Doubly_Linked_Object {
public:
  //! Default constructor.
  Doubly_Linked_Object();

  //! Creates a chain element with forward link \p f and backward link \p b.
  Doubly_Linked_Object(Doubly_Linked_Object* f, Doubly_Linked_Object* b);

  //! Inserts \p y before \p *this.
  void insert_before(Doubly_Linked_Object& y);

  //! Inserts \p y after \p *this.
  void insert_after(Doubly_Linked_Object& y);

  //! Erases \p *this from the chain and returns a pointer to the next element.
  Doubly_Linked_Object* erase();

  //! Erases \p *this from the chain.
  ~Doubly_Linked_Object();

private:
  //! Forward link.
  Doubly_Linked_Object* next;

  //! Backward link.
  Doubly_Linked_Object* prev;

  template <typename T> friend class EList;
  template <typename T> friend class EList_Iterator;
};

// Automatically generated from PPL source file ../../../Watchdog/src/Doubly_Linked_Object.inlines.hh line 1
/* Doubly_Linked_Object class implementation: inline functions.
*/

#ifndef PWL_Doubly_Linked_Object_inlines_hh
#define PWL_Doubly_Linked_Object_inlines_hh 1

namespace Parma_Watchdog_Library {

inline
Doubly_Linked_Object::Doubly_Linked_Object() {
}

inline
Doubly_Linked_Object::Doubly_Linked_Object(Doubly_Linked_Object* f,
					   Doubly_Linked_Object* b)
  : next(f),
    prev(b) {
}

inline void
Doubly_Linked_Object::insert_before(Doubly_Linked_Object& y) {
  y.next = this;
  y.prev = prev;
  prev->next = &y;
  prev = &y;
}

inline void
Doubly_Linked_Object::insert_after(Doubly_Linked_Object& y) {
  y.next = next;
  y.prev = this;
  next->prev = &y;
  next = &y;
}

inline Doubly_Linked_Object*
Doubly_Linked_Object::erase() {
  next->prev = prev;
  prev->next = next;
  return next;
}

inline
Doubly_Linked_Object::~Doubly_Linked_Object() {
  erase();
}

} // namespace Parma_Watchdog_Library

#endif // !defined(PWL_Doubly_Linked_Object_inlines_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Doubly_Linked_Object.defs.hh line 63

#endif // !defined(PWL_Doubly_Linked_Object_defs_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/EList_Iterator.defs.hh line 1
/* EList_Iterator class declaration.
*/

#ifndef PWL_EList_Iterator_defs_hh
#define PWL_EList_Iterator_defs_hh 1

// Automatically generated from PPL source file ../../../Watchdog/src/EList_Iterator.defs.hh line 28

namespace Parma_Watchdog_Library {

//! Returns <CODE>true</CODE> if and only if \p x and \p y are equal.
template <typename T>
bool operator==(const EList_Iterator<T>& x, const EList_Iterator<T>& y);

//! Returns <CODE>true</CODE> if and only if \p x and \p y are different.
template <typename T>
bool operator!=(const EList_Iterator<T>& x, const EList_Iterator<T>& y);

} // namespace Parma_Watchdog_Library

//! A class providing iterators for embedded lists.
template <typename T>
class Parma_Watchdog_Library::EList_Iterator {
public:
  //! Constructs an iterator pointing to nothing.
  EList_Iterator();

  //! Constructs an iterator pointing to \p p.
  explicit EList_Iterator(Doubly_Linked_Object* p);

  //! Changes \p *this so that it points to \p p.
  EList_Iterator& operator=(Doubly_Linked_Object* p);

  //! Indirect member selector.
  T* operator->();

  //! Dereference operator.
  T& operator*();

  //! Preincrement operator.
  EList_Iterator& operator++();

  //! Postincrement operator.
  EList_Iterator operator++(int);

  //! Predecrement operator.
  EList_Iterator& operator--();

  //! Postdecrement operator.
  EList_Iterator operator--(int);

private:
  //! Embedded pointer.
  Doubly_Linked_Object* ptr;

  friend bool operator==<T>(const EList_Iterator& x, const EList_Iterator& y);

  friend bool operator!=<T>(const EList_Iterator& x, const EList_Iterator& y);
};

// Automatically generated from PPL source file ../../../Watchdog/src/EList_Iterator.inlines.hh line 1
/* EList_Iterator class implementation: inline functions.
*/

#ifndef PWL_EList_Iterator_inlines_hh
#define PWL_EList_Iterator_inlines_hh 1

// Automatically generated from PPL source file ../../../Watchdog/src/EList_Iterator.inlines.hh line 27

namespace Parma_Watchdog_Library {

template <typename T>
inline
EList_Iterator<T>::EList_Iterator() {
}

template <typename T>
inline
EList_Iterator<T>::EList_Iterator(Doubly_Linked_Object* p)
  : ptr(p) {
}

template <typename T>
inline EList_Iterator<T>&
EList_Iterator<T>::operator=(Doubly_Linked_Object* p) {
  ptr = p;
  return *this;
}

template <typename T>
inline T*
EList_Iterator<T>::operator->() {
  return static_cast<T*>(ptr);
}

template <typename T>
inline T&
EList_Iterator<T>::operator*() {
  return *operator->();
}

template <typename T>
inline EList_Iterator<T>&
EList_Iterator<T>::operator++() {
  ptr = ptr->next;
  return *this;
}

template <typename T>
inline EList_Iterator<T>
EList_Iterator<T>::operator++(int) {
  EList_Iterator tmp = *this;
  ++*this;
  return tmp;
}

template <typename T>
inline EList_Iterator<T>&
EList_Iterator<T>::operator--() {
  ptr = ptr->prev;
  return *this;
}

template <typename T>
inline EList_Iterator<T>
EList_Iterator<T>::operator--(int) {
  EList_Iterator tmp = *this;
  --*this;
  return tmp;
}

template <typename T>
inline bool
operator==(const EList_Iterator<T>& x, const EList_Iterator<T>& y) {
  return x.ptr == y.ptr;
}

template <typename T>
inline bool
operator!=(const EList_Iterator<T>& x, const EList_Iterator<T>& y) {
  return x.ptr != y.ptr;
}

} // namespace Parma_Watchdog_Library

#endif // !defined(PWL_EList_Iterator_inlines_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/EList_Iterator.defs.hh line 82

#endif // !defined(PWL_EList_Iterator_defs_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/EList.defs.hh line 1
/* EList class declaration.
*/

#ifndef PWL_EList_defs_hh
#define PWL_EList_defs_hh 1

// Automatically generated from PPL source file ../../../Watchdog/src/EList.defs.hh line 28

/*! \brief
  A simple kind of embedded list (i.e., a doubly linked objects
  where the links are embedded in the objects themselves).
*/
template <typename T>
class Parma_Watchdog_Library::EList : private Doubly_Linked_Object {
public:
  //! A const iterator to traverse the list.
  typedef EList_Iterator<const T> Const_Iterator;

  //! A non-const iterator to traverse the list.
  typedef EList_Iterator<T> Iterator;

  //! Constructs an empty list.
  EList();

  //! Destructs the list and all the elements in it.
  ~EList();

  //! Pushes \p obj to the front of the list.
  void push_front(T& obj);

  //! Pushes \p obj to the back of the list.
  void push_back(T& obj);

  /*! \brief
    Inserts \p obj just before \p position and returns an iterator
    that points to the inserted object.
  */
  Iterator insert(Iterator position, T& obj);

  /*! \brief
    Removes the element pointed to by \p position, returning
    an iterator pointing to the next element, if any, or end(), otherwise.
  */
  Iterator erase(Iterator position);

  //! Returns <CODE>true</CODE> if and only if the list is empty.
  bool empty() const;

  //! Returns an iterator pointing to the beginning of the list.
  Iterator begin();

  //! Returns an iterator pointing one past the last element in the list.
  Iterator end();

  //! Returns a const iterator pointing to the beginning of the list.
  Const_Iterator begin() const;

  //! Returns a const iterator pointing one past the last element in the list.
  Const_Iterator end() const;

  //! Checks if all the invariants are satisfied.
  bool OK() const;
};

// Automatically generated from PPL source file ../../../Watchdog/src/EList.inlines.hh line 1
/* EList class implementation: inline functions.
*/

#ifndef PWL_EList_inlines_hh
#define PWL_EList_inlines_hh 1

namespace Parma_Watchdog_Library {

template <typename T>
inline
EList<T>::EList()
  : Doubly_Linked_Object(this, this) {
}

template <typename T>
inline void
EList<T>::push_front(T& obj) {
  next->insert_before(obj);
}

template <typename T>
inline void
EList<T>::push_back(T& obj) {
  prev->insert_after(obj);
}

template <typename T>
inline typename EList<T>::Iterator
EList<T>::insert(Iterator position, T& obj) {
  position->insert_before(obj);
  return Iterator(&obj);
}

template <typename T>
inline typename EList<T>::Iterator
EList<T>::begin() {
  return Iterator(next);
}

template <typename T>
inline typename EList<T>::Iterator
EList<T>::end() {
  return Iterator(this);
}

template <typename T>
inline typename EList<T>::Const_Iterator
EList<T>::begin() const {
  return Const_Iterator(next);
}

template <typename T>
inline typename EList<T>::Const_Iterator
EList<T>::end() const {
  return Const_Iterator(const_cast<EList<T>*>(this));
}

template <typename T>
inline bool
EList<T>::empty() const {
  return begin() == end();
}

template <typename T>
inline typename EList<T>::Iterator
EList<T>::erase(Iterator position) {
  assert(!empty());
  return Iterator(position->erase());
}

template <typename T>
inline
EList<T>::~EList() {
  // Erase and deallocate all the elements.
  for (Iterator i = begin(), lend = end(), next; i != lend; i = next) {
    next = erase(i);
    delete &*i;
  }
}

template <typename T>
inline bool
EList<T>::OK() const {
  for (Const_Iterator i = begin(), lend = end(); i != lend; ++i)
    if (!i->OK())
      return false;

  return true;
}

} // namespace Parma_Watchdog_Library

#endif // !defined(PWL_EList_inlines_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/EList.defs.hh line 86

#endif // !defined(PWL_EList_defs_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Pending_Element.defs.hh line 1
/* Pending_Element class declaration.
*/

#ifndef PWL_Pending_Element_defs_hh
#define PWL_Pending_Element_defs_hh 1

// Automatically generated from PPL source file ../../../Watchdog/src/Pending_Element.defs.hh line 30

//! A class for pending watchdog events with embedded links.
/*!
  Each pending watchdog event is characterized by a deadline (a positive
  time interval), an associated handler that will be invoked upon event
  expiration, and a Boolean flag that indicates whether the event has already
  expired or not.
*/
class Parma_Watchdog_Library::Pending_Element : public Doubly_Linked_Object {
public:
  //! Constructs an element with the given attributes.
  Pending_Element(const Time& deadline,
		  const Handler& handler,
		  bool& expired_flag);

  //! Modifies \p *this so that it has the given attributes.
  void assign(const Time& deadline,
	      const Handler& handler,
	      bool& expired_flag);

  //! Returns the deadline of the event.
  const Time& deadline() const;

  //! Returns the handler associated to the event.
  const Handler& handler() const;

  //! Returns a reference to the "event-expired" flag.
  bool& expired_flag() const;

  //! Checks if all the invariants are satisfied.
  bool OK() const;

private:
  //! The deadline of the event.
  Time d;

  //! A pointer to the handler associated to the event.
  const Handler* p_h;

  //! A pointer to a flag saying whether the event has already expired or not.
  bool* p_f;
};

// Automatically generated from PPL source file ../../../Watchdog/src/Pending_Element.inlines.hh line 1
/* Pending_Element class implementation: inline functions.
*/

#ifndef PWL_Pending_Element_inlines_hh
#define PWL_Pending_Element_inlines_hh 1

namespace Parma_Watchdog_Library {

inline
Pending_Element::Pending_Element(const Time& deadline,
				 const Handler& handler,
				 bool& expired_flag)
  : d(deadline), p_h(&handler), p_f(&expired_flag) {
  assert(OK());
}

inline void
Pending_Element::assign(const Time& deadline,
			const Handler& handler,
			bool& expired_flag) {
  d = deadline;
  p_h = &handler;
  p_f = &expired_flag;
  assert(OK());
}

inline const Time&
Pending_Element::deadline() const {
  return d;
}

inline const Handler&
Pending_Element::handler() const {
  return *p_h;
}

inline bool&
Pending_Element::expired_flag() const {
  return *p_f;
}

} // namespace Parma_Watchdog_Library

#endif // !defined(PWL_Pending_Element_inlines_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Pending_Element.defs.hh line 74

#endif // !defined(PWL_Pending_Element_defs_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Pending_List.defs.hh line 1
/* Pending_List class declaration.
*/

#ifndef PWL_Pending_List_defs_hh
#define PWL_Pending_List_defs_hh 1

// Automatically generated from PPL source file ../../../Watchdog/src/Pending_List.defs.hh line 31

//! An ordered list for recording pending watchdog events.
class Parma_Watchdog_Library::Pending_List {
public:
  //! A non-const iterator to traverse the list.
  typedef EList<Pending_Element>::Iterator Iterator;

  //! Constructs an empty list.
  Pending_List();

  //! Destructor.
  ~Pending_List();

  //! Inserts a new Pending_Element object with the given attributes.
  Iterator insert(const Time& deadline,
		  const Handler& handler,
		  bool& expired_flag);

  /*! \brief
    Removes the element pointed to by \p position, returning
    an iterator pointing to the next element, if any, or end(), otherwise.
  */
  Iterator erase(Iterator position);

  //! Returns <CODE>true</CODE> if and only if the list is empty.
  bool empty() const;

  //! Returns an iterator pointing to the beginning of the list.
  Iterator begin();

  //! Returns an iterator pointing one past the last element in the list.
  Iterator end();

  //! Checks if all the invariants are satisfied.
  bool OK() const;

private:
  EList<Pending_Element> active_list;
  EList<Pending_Element> free_list;
};

// Automatically generated from PPL source file ../../../Watchdog/src/Pending_List.inlines.hh line 1
/* Pending_List class implementation: inline functions.
*/

#ifndef PWL_Pending_List_inlines_hh
#define PWL_Pending_List_inlines_hh 1

namespace Parma_Watchdog_Library {

inline
Pending_List::Pending_List()
  : active_list(),
    free_list() {
  assert(OK());
}

inline
Pending_List::~Pending_List() {
}

inline Pending_List::Iterator
Pending_List::begin() {
  return active_list.begin();
}

inline Pending_List::Iterator
Pending_List::end() {
  return active_list.end();
}

inline bool
Pending_List::empty() const {
  return active_list.empty();
}

inline Pending_List::Iterator
Pending_List::erase(Iterator position) {
  assert(!empty());
  Iterator next = active_list.erase(position);
  free_list.push_back(*position);
  assert(OK());
  return next;
}

} // namespace Parma_Watchdog_Library

#endif // !defined(PWL_Pending_List_inlines_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Pending_List.defs.hh line 73

#endif // !defined(PWL_Pending_List_defs_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Watchdog.defs.hh line 1
/* Watchdog and associated classes' declaration and inline functions.
*/

#ifndef PWL_Watchdog_defs_hh
#define PWL_Watchdog_defs_hh 1

// Automatically generated from PPL source file ../../../Watchdog/src/Watchdog.defs.hh line 30
#include <cassert>

#ifdef PWL_HAVE_SYS_TIME_H
# include <sys/time.h>
#endif

namespace Parma_Watchdog_Library {

// Set linkage now to declare it friend later.
extern "C" void PWL_handle_timeout(int signum);

//! A watchdog timer.
class Watchdog {
public:
  template <typename Flag_Base, typename Flag>
  Watchdog(int units, const Flag_Base* volatile& holder, Flag& flag);

  Watchdog(int units, void (*function)());
  ~Watchdog();


private:
  friend class Init;
  static void initialize();
  static void finalize();

  bool expired;
  const Handler& handler;
  Pending_List::Iterator pending_position;

private:
  // Just to prevent their use.
  Watchdog(const Watchdog&);
  Watchdog& operator=(const Watchdog&);

  // Pass this to getitimer().
  static itimerval current_timer_status;

  // Get the timer value.
  static void get_timer(Time& time);

  // Pass this to setitimer().
  static itimerval signal_once;

  // Last time value we set the timer to.
  static Time last_time_requested;

  // Set the timer value.
  static void set_timer(const Time& time);

  // Stops the timer.
  static void stop_timer();

  // Quick reschedule to avoid race conditions.
  static void reschedule();

  // Used by the above.
  static Time reschedule_time;

  // Records the time elapsed since last fresh start.
  static Time time_so_far;

  //! The ordered queue of pending watchdog events.
  static Pending_List pending;

  //! The actual signal handler.
  static void handle_timeout(int);

  // Handle the addition of a new watchdog event.
  static Pending_List::Iterator new_watchdog_event(int units,
						   const Handler& handler,
						   bool& expired_flag);

  // Handle the removal of a watchdog event.
  void remove_watchdog_event(Pending_List::Iterator position);

  // Whether the alarm clock is running.
  static volatile bool alarm_clock_running;

  // Whether we are changing data that is also changed by the signal handler.
  static volatile bool in_critical_section;

  friend void PWL_handle_timeout(int signum);
};

class Init {
private:
  //! Count the number of objects created.
  static unsigned int count;

public:
  //! Initializes the PWL.
  Init();

  //! Finalizes the PWL.
  ~Init();
};

} // namespace Parma_Watchdog_Library

// Automatically generated from PPL source file ../../../Watchdog/src/Watchdog.inlines.hh line 1
/* Watchdog and associated classes' implementation: inline functions.
*/

#ifndef PWL_Watchdog_inlines_hh
#define PWL_Watchdog_inlines_hh 1

#include <stdexcept>

// Automatically generated from PPL source file ../../../Watchdog/src/Watchdog.inlines.hh line 29

namespace Parma_Watchdog_Library {

inline void
Watchdog::reschedule() {
  set_timer(reschedule_time);
}

template <typename Flag_Base, typename Flag>
Watchdog::Watchdog(int units, const Flag_Base* volatile& holder, Flag& flag)
  : expired(false),
    handler(*new Handler_Flag<Flag_Base, Flag>(holder, flag)) {
  if (units <= 0)
    throw std::invalid_argument("Watchdog constructor called with a"
				" non-positive number of time units");
  in_critical_section = true;
  pending_position = new_watchdog_event(units, handler, expired);
  in_critical_section = false;
}

inline
Watchdog::Watchdog(int units, void (*function)())
  : expired(false), handler(*new Handler_Function(function)) {
  if (units <= 0)
    throw std::invalid_argument("Watchdog constructor called with a"
				" non-positive number of time units");
  in_critical_section = true;
  pending_position = new_watchdog_event(units, handler, expired);
  in_critical_section = false;
}

inline
Init::Init() {
  // Only when the first Init object is constructed...
  if (count++ == 0) {
    // ... the library is initialized.
    Watchdog::initialize();
  }
}

inline
Init::~Init() {
  // Only when the last Init object is destroyed...
  if (--count == 0) {
    // ... the library is finalized.
    Watchdog::finalize();
  }
}

} // namespace Parma_Watchdog_Library

#endif // !defined(PWL_Watchdog_inlines_hh)
// Automatically generated from PPL source file ../../../Watchdog/src/Watchdog.defs.hh line 131

namespace {

Parma_Watchdog_Library::Init Parma_Watchdog_Library_initializer;

} // namespace

#endif // !defined(PWL_Watchdog_defs_hh)


#ifdef PWL_SAVE_NDEBUG
# ifndef NDEBUG
#  define NDEBUG 1
# endif
# undef PWL_SAVE_NDEBUG
#else
# ifdef NDEBUG
#  undef NDEBUG
# endif
#endif
#include <cassert>

#endif
