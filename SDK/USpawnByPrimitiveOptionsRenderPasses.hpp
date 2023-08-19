#pragma once
#include <cstdint>
#include "USpawnByPrimitiveOptions.hpp"
#pragma pack(push, 1)
class USpawnByPrimitiveOptionsRenderPasses : public USpawnByPrimitiveOptions {
public:
    bool bRenderInMainPass; // 0x28
    bool bRenderInDepthPass; // 0x29
    char pad_2a[0x6];
    static USpawnByPrimitiveOptionsRenderPasses* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
