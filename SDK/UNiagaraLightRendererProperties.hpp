#pragma once
#include <cstdint>
#include "FNiagaraVariableAttributeBinding.hpp"
#include "FVector.hpp"
#include "UNiagaraRendererProperties.hpp"
#pragma pack(push, 1)
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties {
public:
    uint8_t bUseInverseSquaredFalloff : 1; // 0x78
    uint8_t bAffectsVolumetricLighting : 1; // 0x78
    uint8_t bAlphaScalesBrightness : 1; // 0x78
    uint8_t pad_bitfield_78_3 : 5;
    char pad_79[0x3];
    float RadiusScale; // 0x7c
    float MinDistance; // 0x80
    float DefaultExponent; // 0x84
    FVector ColorAdd; // 0x88
    int32_t RendererVisibility; // 0x94
    FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0x98
    FNiagaraVariableAttributeBinding LightExponentBinding; // 0xf0
    FNiagaraVariableAttributeBinding PositionBinding; // 0x148
    FNiagaraVariableAttributeBinding ColorBinding; // 0x1a0
    FNiagaraVariableAttributeBinding RadiusBinding; // 0x1f8
    FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x250
    FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x2a8
    char pad_300[0x30];
    static UNiagaraLightRendererProperties* StaticClass();
}; // Size: 0x330
#pragma pack(pop)
