#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

typedef map<str, ASpell *> uwu;

Warlock::Warlock(const str &name, const str &title):_name(name), _title(title){
	cout << getName() << ": This looks like another boring day." << endl;
}

Warlock::~Warlock(){
	cout << getName() << ": My job here is done!" << endl;
}

const str	&Warlock::getName() const{
	return (this -> _name);
}

const str	&Warlock::getTitle() const{
	return (this -> _title);
}

void		Warlock::setTitle(const str &title){
	this -> _title = title;
}

void		Warlock::introduce() const{
	cout << getName() << ": I am " << getName() << ", " << getTitle() << "!" << endl;
}

void	Warlock::learnSpell(ASpell *spell){
	if(spell && _sB.find(spell -> getName()) == _sB.end())
		_sB[spell -> getName()] = spell -> clone();
}

void	Warlock::forgetSpell(str sn){
	uwu::iterator it = _sB.find(sn);
	if(it != _sB.end())
	{
		delete it -> second;
		_sB.erase(it);
	}
}

void	Warlock::launchSpell(str sn, ATarget &target){
	uwu::iterator it = _sB.find(sn);
	if(it != _sB.end())
		it -> second -> launch(target);
}

#include "Dummy.hpp"
#include "Fwoosh.hpp"

int main()
{
  Warlock richard("Richard", "the Titled");

  Dummy bob;
  Fwoosh* fwoosh = new Fwoosh();

  richard.learnSpell(fwoosh);

  richard.introduce();
  richard.launchSpell("Fwoosh", bob);

  richard.forgetSpell("Fwoosh");
  richard.launchSpell("Fwoosh", bob);
}