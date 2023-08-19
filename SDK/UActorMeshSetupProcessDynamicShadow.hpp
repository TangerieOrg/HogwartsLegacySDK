#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessDynamicShadow : public UActorMeshSetupProcessFiltered {
public:
    bool bCastDynamicShadow; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessDynamicShadow* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
