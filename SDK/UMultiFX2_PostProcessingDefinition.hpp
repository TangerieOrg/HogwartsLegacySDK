#pragma once
#include <cstdint>
#include "FPostProcessSettings.hpp"
#include "FPostProcessingFXCurveSet.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UMultiFX2_PostProcessingDefinition : public UDataAsset {
public:
    FPostProcessSettings Settings; // 0x30
    FPostProcessingFXCurveSet DefaultCurves; // 0x620
    static UMultiFX2_PostProcessingDefinition* StaticClass();
    float LongestCurve(bool bKillOnly);
    bool HasCurves();
    bool CurvesCanKill();
}; // Size: 0x670
#pragma pack(pop)
