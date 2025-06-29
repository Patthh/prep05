#include "SpellBook.hpp"
#include "ASpell.hpp"

typedef map<str, ASpell*> uwu;

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){
	uwu::iterator it = _spells.begin();
	uwu::iterator ite = _spells.end();
	while (it != ite){
		delete it->second;
		++it;
	}
	_spells.clear();
}

void SpellBook::learnSpell(ASpell* spell){
	if (spell)
		_spells[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(str const &spellName){
	uwu::iterator it = _spells.find(spellName);
	if (it != _spells.end()){
		delete it->second;
		_spells.erase(it);
	}
}

ASpell* SpellBook::createSpell(str const &spellName){
	uwu::iterator it = _spells.find(spellName);
	if (it != _spells.end())
		return it->second->clone();
	return NULL;
}