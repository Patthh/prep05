#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

typedef std::map<str, ASpell *> uwu;


Warlock::Warlock(const str &n, const str &t): _name(n), _title(t){
	cout << getName() << ": This looks like another boring day." << endl;
}

Warlock::~Warlock(){
	cout << getName() << ": My job here is done!" << endl;
}

const str &Warlock::getName() const{
	return (this -> _name);
}

const str &Warlock::getTitle() const{
	return (this -> _title);
}

void Warlock::setTitle(const str &t){
	this -> _title = t;
}

void Warlock::introduce() const{
	cout << getName() << ": I am " << getName() << ", " <<getTitle() << "!" << endl;
}

void Warlock::learnSpell(ASpell *spell)
{
    _sB.learnSpell(spell);
}

void Warlock::forgetSpell(str spellName)
{
	_sB.forgetSpell(spellName);
}

void Warlock::launchSpell(str spellName, const ATarget &target)
{
    ASpell* spell = _sB.createSpell(spellName);
    if (spell){
        spell->launch(target);
        delete spell;
    }
}

#include "Warlock.hpp"
#include "Fwoosh.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
#include "Polymorph.hpp"
#include "TargetGenerator.hpp"
#include "Fireball.hpp"
#include "ATarget.hpp"
#include "ASpell.hpp"
#include "SpellBook.hpp"

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
