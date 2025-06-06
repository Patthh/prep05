#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

Warlock::Warlock(const s &n, const s &t): _n(n), _t(t){
	cout << getName() << ": This looks like another boring day." << endl;
}

Warlock::~Warlock(){
	cout << getName() << ": My job here is done!" << endl;
}

const s &Warlock::getName() const{
	return (this -> _n);
}

const s &Warlock::getTitle() const{
	return (this -> _t);
}

void Warlock::setTitle(const s &t){
	this -> _t = t;
}

void Warlock::introduce() const{
	cout << getName() << ": I am " << getName() << ", " <<getTitle() << "!" << endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    if (spell && _sb.find(spell->getName()) == _sb.end())
        _sb[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(string spellName)
{
    map<string, ASpell *>::iterator it = _sb.find(spellName);
    if (it != _sb.end())
    {
        delete it->second;
        _sb.erase(it);  // Use iterator instead of key
    }
}

void Warlock::launchSpell(string spellName, const ATarget &target)
{
    map<string, ASpell *>::iterator it = _sb.find(spellName);
    if (it != _sb.end())
        it->second->launch(target);
}
