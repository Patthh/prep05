#pragma once

#include <iostream>
#include <map>

typedef std::string str;
using	std::map;

class ATarget;

class TargetGenerator{
	private:
		map<str, ATarget*> _targets;
		TargetGenerator(const TargetGenerator&);
		TargetGenerator& operator=(const TargetGenerator);
	public:
		TargetGenerator();
		~TargetGenerator();
		void	learnTargetType(ATarget* target);
		void	forgetTargetType(str const &tt);
		ATarget*	createTarget(str const &tt);
};