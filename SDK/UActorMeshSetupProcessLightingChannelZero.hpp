#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessLightingChannelZero : public UActorMeshSetupProcessFiltered {
public:
    bool bLightingChannelZero; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessLightingChannelZero* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
