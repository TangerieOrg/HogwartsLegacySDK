#pragma once
#include <cstdint>
#include "UMaterialSwapMeshStateBoolMap.hpp"
#pragma pack(push, 1)
class UMaterialSwapMeshStateReceivesWeatherDecals : public UMaterialSwapMeshStateBoolMap {
public:
    bool bReceivesWeatherDecals; // 0x28
    char pad_29[0x7];
    static UMaterialSwapMeshStateReceivesWeatherDecals* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
