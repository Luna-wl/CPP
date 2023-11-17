#ifndef DYNAMIC_H
# define DYNAMIC_H

# include <iostream>
# include <cstdlib>
# include <ctime>

class Base {
	public:
		Base();
		virtual ~Base();

		Base( const Base &cp );
		Base &operator=( const Base &cp );

		static Base* generate(void);
		static void identify(Base* p);
		static void identify(Base& p);
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

#endif
