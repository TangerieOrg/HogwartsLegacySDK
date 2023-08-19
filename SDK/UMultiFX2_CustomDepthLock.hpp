#pragma once
#include <cstdint>
#include "FStencilValueRenderCustomDepthFilter.hpp"
#include "UMultiFX2_CustomDepthLockBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_CustomDepthLock : public UMultiFX2_CustomDepthLockBase {
public:
    FStencilValueRenderCustomDepthFilter Filter; // 0x68
    uint8_t StencilValue; // 0x80
    bool bRenderCustomDepth; // 0x81
    char pad_82[0x2];
    int32_t StencilLockPriority; // 0x84
    static UMultiFX2_CustomDepthLock* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
