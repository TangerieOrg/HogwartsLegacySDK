#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UWeatherDecalPlacement.hpp"
#pragma pack(push, 1)
class UWeatherDecalPlacementLegacy : public UWeatherDecalPlacement {
public:
    FVector Position; // 0x28
    FVector Scale; // 0x34
    static UWeatherDecalPlacementLegacy* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
