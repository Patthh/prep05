#include "TargetGenerator.hpp"
#include "ATarget.hpp"

typedef std::map<str, ATarget*> uwu;

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){
	uwu::iterator it = _targets.begin();
	uwu::iterator ite = _targets.end();
	while (it != ite){
		delete it->second;
		++it;
	}
	_targets.clear();
}

void TargetGenerator::learnTargetType(ATarget* target){
	if (target)
		_targets[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(str const &targetType){
	uwu::iterator it = _targets.find(targetType);
	if (it != _targets.end()){
		delete it->second;
		_targets.erase(it);
	}
}

ATarget* TargetGenerator::createTarget(str const &targetType){
	uwu::iterator it = _targets.find(targetType);
	if (it != _targets.end())
		return it->second->clone();
	return NULL;
}