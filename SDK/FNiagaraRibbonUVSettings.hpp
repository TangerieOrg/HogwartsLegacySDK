#pragma once
#include <cstdint>
#include "ENiagaraRibbonUVDistributionMode.hpp"
#include "ENiagaraRibbonUVEdgeMode.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FNiagaraRibbonUVSettings {
    ENiagaraRibbonUVDistributionMode DistributionMode; // 0x0
    ENiagaraRibbonUVEdgeMode LeadingEdgeMode; // 0x4
    ENiagaraRibbonUVEdgeMode TrailingEdgeMode; // 0x8
    float TilingLength; // 0xc
    FVector2D Offset; // 0x10
    FVector2D Scale; // 0x18
    bool bEnablePerParticleUOverride; // 0x20
    bool bEnablePerParticleVRangeOverride; // 0x21
    char pad_22[0x2];
}; // Size: 0x24
#pragma pack(pop)
