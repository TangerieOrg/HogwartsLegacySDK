#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessSelfShadowOnly : public UActorMeshSetupProcessFiltered {
public:
    bool bSelfShadowOnly; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessSelfShadowOnly* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
