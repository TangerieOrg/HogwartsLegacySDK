#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessShadowAsTwoSided : public UActorMeshSetupProcessFiltered {
public:
    bool bCastShadowAsTwoSided; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessShadowAsTwoSided* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
