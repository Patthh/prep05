#pragma once

#include <iostream>

typedef std::string s ;
using std::cout;
using std::endl;

class Warlock{

	private:
		s _namai;
		s _titre;
	public:
		Warlock(const s &name, const s &title);
		~Warlock();
		const s &getName()const;
		const s &getTitle()const;
		void setTitle(const s &title);
		void introduce() const;

};