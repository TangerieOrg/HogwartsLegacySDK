#pragma once
#include <cstdint>
#include "FExposureExpressions.hpp"
#include "UDataAsset.hpp"
class UEnvironmentalGlobalsVar;
#pragma pack(push, 1)
class UEnvironmentalGlobalsVars : public UDataAsset {
public:
    char pad_30[0x8];
    TArray<UEnvironmentalGlobalsVar*> Vars; // 0x38
    FExposureExpressions GlobalExpressions; // 0x48
    static UEnvironmentalGlobalsVars* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
