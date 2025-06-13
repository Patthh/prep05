#pragma once

#include <map>
#include <string>

class ASpell;

class SpellBook{
private:
	std::map<std::string, ASpell*> _spells;
	SpellBook(const SpellBook&);
	SpellBook& operator=(const SpellBook&);
public:
	SpellBook();
	~SpellBook();
	void learnSpell(ASpell* spell);
	void forgetSpell(std::string const &spellName);
	ASpell* createSpell(std::string const &spellName);
};