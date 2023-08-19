#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessRenderCustomDepth : public UActorMeshSetupProcessFiltered {
public:
    bool bRenderCustomDepth; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessRenderCustomDepth* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
