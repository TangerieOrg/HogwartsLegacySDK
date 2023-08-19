#pragma once
#include <cstdint>
#include "FEnvironmentalGlobalsExtraVariables.hpp"
#include "FEnvironmentalGlobalsUnsetExtraVariables.hpp"
#pragma pack(push, 1)
struct FWeatherEnvironmentalGlobalsExtras {
    FEnvironmentalGlobalsExtraVariables StartState; // 0x0
    FEnvironmentalGlobalsExtraVariables CurrentState; // 0x30
    FEnvironmentalGlobalsUnsetExtraVariables UNSET; // 0x60
}; // Size: 0x90
#pragma pack(pop)
