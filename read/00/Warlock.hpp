#pragma once

#include <iostream>

typedef std::string str;
using std::cout, std::endl;

class Warlock{
	private:
		str _name, _title;
	public:
		Warlock(const str &name, const str &title);
		~Warlock();
		const str &getName() const;
		const str &getTitle() const;
		void setTitle(const str &title);
		void introduce() const;
};