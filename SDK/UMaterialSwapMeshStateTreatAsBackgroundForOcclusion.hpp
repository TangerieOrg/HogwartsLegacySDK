#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateBoolMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateTreatAsBackgroundForOcclusion : public UMaterialSwapMeshStateBoolMap {
public:
    bool bTreatAsBackgroundForOcclusion; // 0x28
    char pad_29[0x7];
    static UMaterialSwapMeshStateTreatAsBackgroundForOcclusion* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
