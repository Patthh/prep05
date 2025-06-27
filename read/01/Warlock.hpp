#pragma once

#include <iostream>
#include <map>

typedef std::string str;
using std::cout;
using std::endl;
using std::map;

class ASpell;
class ATarget;

class Warlock{
	private:
		str _name, _title;
		map<str, ASpell*> _sB;
	public:
		Warlock(const str &name, const str &title);
		~Warlock();
		const str &getName() const;
		const str &getTitle() const;
		void setTitle(const str &title);
		void introduce() const;
		void learnSpell(ASpell *spell);
		void forgetSpell(str spellName);
		void launchSpell(str spellName, const ATarget &target);
};