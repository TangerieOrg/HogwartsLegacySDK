#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
#pragma pack(push, 1)
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static USynthesisUtilitiesBlueprintFunctionLibrary* StaticClass();
    static float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
    static float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);
}; // Size: 0x28
#pragma pack(pop)
