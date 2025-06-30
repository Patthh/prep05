#pragma once

#include <iostream>
#include <map>

typedef std::string str;
using	std::map;

class ASpell;

class SpellBook{
	private:
		map<str, ASpell*> _spells;
		SpellBook(const SpellBook&);
		SpellBook& operator=(const SpellBook);
	public:
		SpellBook();
		~SpellBook();
		void	learnSpell(ASpell* spell);
		void	forgetSpell(str const &sn);
		ASpell*	createSpell(str const &sn);
};