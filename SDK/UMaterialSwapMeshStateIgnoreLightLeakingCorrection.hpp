#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateBoolMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateIgnoreLightLeakingCorrection : public UMaterialSwapMeshStateBoolMap {
public:
    bool bIgnoreLightLeakingCorrection; // 0x28
    char pad_29[0x7];
    static UMaterialSwapMeshStateIgnoreLightLeakingCorrection* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
