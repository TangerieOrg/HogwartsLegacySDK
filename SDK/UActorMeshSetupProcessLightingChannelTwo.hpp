#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessLightingChannelTwo : public UActorMeshSetupProcessFiltered {
public:
    bool bLightingChannelTwo; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessLightingChannelTwo* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
