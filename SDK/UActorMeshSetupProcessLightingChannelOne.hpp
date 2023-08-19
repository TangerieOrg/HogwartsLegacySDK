#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessLightingChannelOne : public UActorMeshSetupProcessFiltered {
public:
    bool bLightingChannelOne; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessLightingChannelOne* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
