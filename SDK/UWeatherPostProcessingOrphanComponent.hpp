#pragma once
#include <cstdint>
#include "FPostProcessSettings.hpp"
#include "UWeatherOrphanComponent.hpp"
#pragma pack(push, 1)
class UWeatherPostProcessingOrphanComponent : public UWeatherOrphanComponent {
public:
    char pad_118[0x8];
    FPostProcessSettings PostProcessSettings; // 0x120
    char pad_710[0x20];
    static UWeatherPostProcessingOrphanComponent* StaticClass();
}; // Size: 0x730
#pragma pack(pop)
