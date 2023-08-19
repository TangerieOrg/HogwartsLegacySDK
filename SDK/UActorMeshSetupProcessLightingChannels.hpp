#pragma once
#include <cstdint>
#include "FLightingChannels.hpp"
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessLightingChannels : public UActorMeshSetupProcessFiltered {
public:
    FLightingChannels LightingChannels; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessLightingChannels* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
