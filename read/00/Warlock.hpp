#pragma once

#include <iostream>

typedef std::string s;
using std::cout, std::endl;

class Warlock{
	private:
		s _n;
		s _t;
	public:
		Warlock(const s &n, const s &t);
		~Warlock();
		const s &getName() const;
		const s &getTitle() const;
		void setTitle(const s &t);
		void introduce() const;
};