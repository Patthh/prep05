#pragma once

#include <map>
#include <string>

class ATarget;
typedef std::string str;

class TargetGenerator{
private:
	std::map<str, ATarget*> _targets;
	TargetGenerator(const TargetGenerator&);
	TargetGenerator& operator=(const TargetGenerator&);
public:
	TargetGenerator();
	~TargetGenerator();
	void learnTargetType(ATarget* target);
	void forgetTargetType(str const &targetType);
	ATarget* createTarget(str const &targetType);
};