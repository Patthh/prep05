#pragma once

#include <map>
#include <string>

typedef std::string str;
using std::map;

class ASpell;

class SpellBook{
private:
	map<str, ASpell*> _spells;
	SpellBook(const SpellBook&);
	SpellBook& operator=(const SpellBook&);
public:
	SpellBook();
	~SpellBook();
	void learnSpell(ASpell* spell);
	void forgetSpell(str const &spellName);
	ASpell* createSpell(str const &spellName);
};