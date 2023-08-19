#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessStaticShadow : public UActorMeshSetupProcessFiltered {
public:
    bool bCastStaticShadow; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessStaticShadow* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
