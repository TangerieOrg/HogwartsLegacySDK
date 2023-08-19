#pragma once
#include <cstdint>
#include "FExpressionInput.hpp"
#include "UMaterialExpressionCustomOutput.hpp"
#pragma pack(push, 1)
class UMaterialExpressionVolumetricAdvancedMaterialOutput : public UMaterialExpressionCustomOutput {
public:
    FExpressionInput PhaseG; // 0x40
    FExpressionInput PhaseG2; // 0x54
    FExpressionInput PhaseBlend; // 0x68
    FExpressionInput MultiScatteringContribution; // 0x7c
    FExpressionInput MultiScatteringOcclusion; // 0x90
    FExpressionInput MultiScatteringEccentricity; // 0xa4
    FExpressionInput ConservativeDensity; // 0xb8
    float ConstPhaseG; // 0xcc
    float ConstPhaseG2; // 0xd0
    float ConstPhaseBlend; // 0xd4
    bool PerSamplePhaseEvaluation; // 0xd8
    char pad_d9[0x3];
    uint32_t MultiScatteringApproximationOctaveCount; // 0xdc
    float ConstMultiScatteringContribution; // 0xe0
    float ConstMultiScatteringOcclusion; // 0xe4
    float ConstMultiScatteringEccentricity; // 0xe8
    bool bGroundContribution; // 0xec
    bool bGrayScaleMaterial; // 0xed
    bool bRayMarchVolumeShadow; // 0xee
    char pad_ef[0x1];
    static UMaterialExpressionVolumetricAdvancedMaterialOutput* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
