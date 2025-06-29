#pragma once

#include <iostream>

typedef std::string str;
using	std::cout, std::endl;

class ASpell;

class ATarget{
	protected:
		str _target;
	public:
		ATarget(const str &target);
		virtual ~ATarget();
		const str &getType() const;
		virtual ATarget* clone() const = 0;
		void getHitBySpell(const ASpell &spell) const;
};