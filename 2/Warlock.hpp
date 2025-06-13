#pragma once

#include <iostream>
#include "SpellBook.hpp"

typedef std::string s;
using std::cout;
using std::endl;
using std::string;

class ASpell;
class ATarget;

class Warlock{
private:
	s _n, _t;
	SpellBook _sb;
public:
	Warlock(const s &n, const s &t);
	~Warlock();
	const s &getName() const;
	const s &getTitle() const;
	void setTitle(const s &t);
	void introduce() const;
	void learnSpell(ASpell *sp);
	void forgetSpell(s sn);
	void launchSpell(s sn, const ATarget &tg);
};