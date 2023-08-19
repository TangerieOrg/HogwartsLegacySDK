#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateBoolMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateCapsuleShadow : public UMaterialSwapMeshStateBoolMap {
public:
    bool bCastCapsuleDirectShadow; // 0x28
    char pad_29[0x7];
    static UMaterialSwapMeshStateCapsuleShadow* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
