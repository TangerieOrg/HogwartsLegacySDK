#pragma once
#include <cstdint>
#include "FEnvironmentalGlobalsExtraColorVariable.hpp"
#include "FEnvironmentalGlobalsExtraScalarVariable.hpp"
#include "FEnvironmentalGlobalsExtraVectorVariable.hpp"
#pragma pack(push, 1)
struct FEnvironmentalGlobalsExtraVariables {
    TArray<FEnvironmentalGlobalsExtraScalarVariable> Scalars; // 0x0
    TArray<FEnvironmentalGlobalsExtraColorVariable> Colors; // 0x10
    TArray<FEnvironmentalGlobalsExtraVectorVariable> Vectors; // 0x20
}; // Size: 0x30
#pragma pack(pop)
