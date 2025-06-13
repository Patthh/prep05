#pragma once

#include <map>
#include <string>

class ATarget;

class TargetGenerator{
private:
	std::map<std::string, ATarget*> _targets;
	TargetGenerator(const TargetGenerator&);
	TargetGenerator& operator=(const TargetGenerator&);
public:
	TargetGenerator();
	~TargetGenerator();
	void learnTargetType(ATarget* target);
	void forgetTargetType(std::string const &targetType);
	ATarget* createTarget(std::string const &targetType);
};