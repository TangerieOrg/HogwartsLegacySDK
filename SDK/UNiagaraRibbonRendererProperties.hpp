#pragma once
#include <cstdint>
#include "ENiagaraRibbonDrawDirection.hpp"
#include "ENiagaraRibbonFacingMode.hpp"
#include "ENiagaraRibbonShapeMode.hpp"
#include "ENiagaraRibbonTessellationMode.hpp"
#include "FNiagaraMaterialAttributeBinding.hpp"
#include "FNiagaraRibbonShapeCustomVertex.hpp"
#include "FNiagaraRibbonUVSettings.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "FNiagaraVariableAttributeBinding.hpp"
#include "UNiagaraRendererProperties.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties {
public:
    UMaterialInterface* Material; // 0x78
    FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x80
    ENiagaraRibbonFacingMode FacingMode; // 0xa0
    char pad_a1[0x3];
    int32_t VertsPerParticle; // 0xa4
    FNiagaraRibbonUVSettings UV0Settings; // 0xa8
    FNiagaraRibbonUVSettings UV1Settings; // 0xcc
    ENiagaraRibbonDrawDirection DrawDirection; // 0xf0
    ENiagaraRibbonShapeMode Shape; // 0xf1
    bool bEnableAccurateGeometry; // 0xf2
    char pad_f3[0x1];
    int32_t WidthSegmentationCount; // 0xf4
    int32_t MultiPlaneCount; // 0xf8
    int32_t TubeSubdivisions; // 0xfc
    TArray<FNiagaraRibbonShapeCustomVertex> CustomVertices; // 0x100
    float CurveTension; // 0x110
    ENiagaraRibbonTessellationMode TessellationMode; // 0x114
    char pad_115[0x3];
    int32_t TessellationFactor; // 0x118
    bool bUseConstantFactor; // 0x11c
    char pad_11d[0x3];
    float TessellationAngle; // 0x120
    bool bScreenSpaceTessellation; // 0x124
    char pad_125[0x3];
    FNiagaraVariableAttributeBinding PositionBinding; // 0x128
    FNiagaraVariableAttributeBinding ColorBinding; // 0x180
    FNiagaraVariableAttributeBinding VelocityBinding; // 0x1d8
    FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x230
    FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x288
    FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x2e0
    FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x338
    FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x390
    FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x3e8
    FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x440
    FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x498
    FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x4f0
    FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x548
    FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x5a0
    FNiagaraVariableAttributeBinding RibbonUVDistance; // 0x5f8
    FNiagaraVariableAttributeBinding U0OverrideBinding; // 0x650
    FNiagaraVariableAttributeBinding V0RangeOverrideBinding; // 0x6a8
    FNiagaraVariableAttributeBinding U1OverrideBinding; // 0x700
    FNiagaraVariableAttributeBinding V1RangeOverrideBinding; // 0x758
    TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x7b0
    char pad_7c0[0xa0];
    static UNiagaraRibbonRendererProperties* StaticClass();
}; // Size: 0x860
#pragma pack(pop)
