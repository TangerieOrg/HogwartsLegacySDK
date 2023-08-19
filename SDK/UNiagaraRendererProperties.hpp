#pragma once
#include <cstdint>
#include "ENiagaraRendererMotionVectorSetting.hpp"
#include "FNiagaraPlatformSet.hpp"
#include "UNiagaraMergeable.hpp"
#pragma pack(push, 1)
class UNiagaraRendererProperties : public UNiagaraMergeable {
public:
    FNiagaraPlatformSet Platforms; // 0x28
    int32_t SortOrderHint; // 0x58
    ENiagaraRendererMotionVectorSetting MotionVectorSetting; // 0x5c
    bool bIsEnabled; // 0x60
    bool bMotionBlurEnabled; // 0x61
    char pad_62[0x16];
    static UNiagaraRendererProperties* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
