#pragma once
#include <cstdint>
#include "ELightingBuildQuality.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMapBuildDataRegistry : public UObject {
public:
    ELightingBuildQuality LevelLightingQuality; // 0x28
    char pad_29[0x25f];
    static UMapBuildDataRegistry* StaticClass();
}; // Size: 0x288
#pragma pack(pop)
