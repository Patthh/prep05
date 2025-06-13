#pragma once

#include <iostream>

typedef std::string s;
using std::cout;
using std::endl;

class ATarget;

class ASpell{
	private:
		s _n;
		s _e;
	public:
		ASpell(const s &n, const s &e);
		virtual ~ASpell();
		s getName() const;
		s getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(const ATarget &s) const;
};