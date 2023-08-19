#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessUseAsOccluder : public UActorMeshSetupProcessFiltered {
public:
    bool bUseAsOccluder; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessUseAsOccluder* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
