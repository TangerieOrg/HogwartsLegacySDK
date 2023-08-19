#pragma once
#include <cstdint>
#include "EHighContrastGameplayMarkup.hpp"
#include "FStencilValueRenderCustomDepthFilter.hpp"
#include "UMultiFX2_CustomDepthLockBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_HighContrastGameplayMarkup : public UMultiFX2_CustomDepthLockBase {
public:
    FStencilValueRenderCustomDepthFilter Filter; // 0x68
    EHighContrastGameplayMarkup StencilValue; // 0x80
    char pad_81[0x3];
    int32_t PriorityBoost; // 0x84
    uint8_t bAutoAdjustForTargeting : 1; // 0x88
    uint8_t pad_bitfield_88_1 : 7;
    char pad_89[0x7];
    static UMultiFX2_HighContrastGameplayMarkup* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
