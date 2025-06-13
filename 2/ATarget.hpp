#pragma once

#include <iostream>

typedef std::string s;
using std::cout;
using std::endl;

class ASpell;

class ATarget{
	protected:
		s _t;
	public:
		ATarget(const s &t);
		virtual ~ATarget();
		const s &getType() const;
		virtual ATarget* clone() const = 0;
		void	getHitBySpell(const ASpell &s) const;
};