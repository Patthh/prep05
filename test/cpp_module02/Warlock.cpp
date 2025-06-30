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
	_sB.learnSpell(spell);
}

void	Warlock::forgetSpell(str sn){
	_sB.forgetSpell(sn);
}

void	Warlock::launchSpell(str sn, ATarget &target){
	ASpell* spell = _sB.createSpell(sn);
	if (spell){
		spell -> launch(target);
		delete spell;
	}
}

#include "Dummy.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "BrickWall.hpp"
#include "Polymorph.hpp"
#include "SpellBook.hpp"
#include "SpellBook.hpp"
#include "TargetGenerator.hpp"

int main()
{
  Warlock richard("Richard", "foo");
  richard.setTitle("Hello, I'm Richard the Warlock!");
  BrickWall model1;

  Polymorph* polymorph = new Polymorph();
  TargetGenerator tarGen;

  tarGen.learnTargetType(&model1);
  richard.learnSpell(polymorph);

  Fireball* fireball = new Fireball();

  richard.learnSpell(fireball);

  ATarget* wall = tarGen.createTarget("Inconspicuous Red-brick Wall");

  richard.introduce();
  richard.launchSpell("Polymorph", *wall);
  richard.launchSpell("Fireball", *wall);
}
