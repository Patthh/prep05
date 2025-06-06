#pragma once

#include <iostream>
#include <map>

typedef std::string s;
using std::cout;
using std::endl;
using std::map;
using std::string;

class ASpell;
class ATarget;

class Warlock{
	private:
		s _n, _t;
		map<s, ASpell *> _sb;
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