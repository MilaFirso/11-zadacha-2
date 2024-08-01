#pragma once
#ifdef LeaverDinamicLab_EXPORTS
#define LeaverDinamicLab_API __declspec(dllexport)
#else
#define LeaverDinamicLab_API __declspec(dllimport)
#endif

#include<iostream> 
#include <string> 

class Leaver
{
public:
	LeaverDinamicLab_API void leave(std::string name);
};