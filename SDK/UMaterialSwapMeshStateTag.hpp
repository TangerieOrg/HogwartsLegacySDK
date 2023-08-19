#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateBoolMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateTag : public UMaterialSwapMeshStateBoolMap {
public:
    FName Tag; // 0x28
    static UMaterialSwapMeshStateTag* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
