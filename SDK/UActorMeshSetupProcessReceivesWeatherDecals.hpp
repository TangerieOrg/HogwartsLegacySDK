#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessReceivesWeatherDecals : public UActorMeshSetupProcessFiltered {
public:
    bool bReceivesWeatherDecals; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessReceivesWeatherDecals* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
