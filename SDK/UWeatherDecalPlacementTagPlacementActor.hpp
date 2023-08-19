#pragma once
#include <cstdint>
#include "UWeatherDecalPlacement.hpp"
#pragma pack(push, 1)
class UWeatherDecalPlacementTagPlacementActor : public UWeatherDecalPlacement {
public:
    FName DecalTag; // 0x28
    bool bFailOnNotFound; // 0x30
    char pad_31[0x7];
    static UWeatherDecalPlacementTagPlacementActor* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
