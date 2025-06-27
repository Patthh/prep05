#include "SpellBook.hpp"
#include "ASpell.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){
	std::map<std::string, ASpell*>::iterator it = _spells.begin();
	std::map<std::string, ASpell*>::iterator ite = _spells.end();
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

void SpellBook::forgetSpell(std::string const &spellName){
	std::map<std::string, ASpell*>::iterator it = _spells.find(spellName);
	if (it != _spells.end()){
		delete it->second;
		_spells.erase(it);
	}
}

ASpell* SpellBook::createSpell(std::string const &spellName){
	std::map<std::string, ASpell*>::iterator it = _spells.find(spellName);
	if (it != _spells.end())
		return it->second->clone();
	return NULL;
}