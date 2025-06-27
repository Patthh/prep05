#include "TargetGenerator.hpp"
#include "ATarget.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){
	std::map<std::string, ATarget*>::iterator it = _targets.begin();
	std::map<std::string, ATarget*>::iterator ite = _targets.end();
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

void TargetGenerator::forgetTargetType(std::string const &targetType){
	std::map<std::string, ATarget*>::iterator it = _targets.find(targetType);
	if (it != _targets.end()){
		delete it->second;
		_targets.erase(it);
	}
}

ATarget* TargetGenerator::createTarget(std::string const &targetType){
	std::map<std::string, ATarget*>::iterator it = _targets.find(targetType);
	if (it != _targets.end())
		return it->second->clone();
	return NULL;
}