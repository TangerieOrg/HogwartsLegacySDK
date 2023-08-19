#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessHiddenShadow : public UActorMeshSetupProcessFiltered {
public:
    bool bCastHiddenShadow; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessHiddenShadow* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
