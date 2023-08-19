#pragma once
#include <cstdint>
#include "FStencilValueRenderCustomDepthFilter.hpp"
#include "UMultiFX2_CustomDepthLockBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_HighContrastGameplayNPCMarkup : public UMultiFX2_CustomDepthLockBase {
public:
    FStencilValueRenderCustomDepthFilter Filter; // 0x68
    static UMultiFX2_HighContrastGameplayNPCMarkup* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
