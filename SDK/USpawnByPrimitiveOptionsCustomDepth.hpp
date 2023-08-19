#pragma once
#include <cstdint>
#include "ERendererStencilMask.hpp"
#include "USpawnByPrimitiveOptions.hpp"
#pragma pack(push, 1)
class USpawnByPrimitiveOptionsCustomDepth : public USpawnByPrimitiveOptions {
public:
    bool bRenderCustomDepth; // 0x28
    ERendererStencilMask CustomDepthStencilWriteMask; // 0x29
    char pad_2a[0x2];
    int32_t CustomDepthStencilValue; // 0x2c
    static USpawnByPrimitiveOptionsCustomDepth* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
