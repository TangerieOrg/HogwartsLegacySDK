#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessCastShadow : public UActorMeshSetupProcessFiltered {
public:
    bool bCastShadow; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessCastShadow* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
