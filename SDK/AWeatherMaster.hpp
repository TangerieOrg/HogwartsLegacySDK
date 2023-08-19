#pragma once
#include <cstdint>
#include "AActor.hpp"
class UWeatherMasterComponent;
class UWindDirectionalSourceComponent;
class URenderSettingsComponent;
#pragma pack(push, 1)
class AWeatherMaster : public AActor {
public:
    UWeatherMasterComponent* Component; // 0x248
    UWindDirectionalSourceComponent* DebugWindComponent; // 0x250
    URenderSettingsComponent* OvercastVolume; // 0x258
    static AWeatherMaster* StaticClass();
    void NextSequence();
}; // Size: 0x260
#pragma pack(pop)
