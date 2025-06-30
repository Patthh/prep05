#pragma once

#include "Warlock.hpp"
#include <iostream>


typedef std::string str;
using std::cout;
using std::endl;

class ATarget;

class ASpell {
	private:
		str _name, _effects;
	public:
		ASpell(const str &name, const str &effect);
		virtual ~ASpell();
		str getName() const;
		str getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(const ATarget &spell);
};
