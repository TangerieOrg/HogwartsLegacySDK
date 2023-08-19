#pragma once
#include <cstdint>
#include "EFSR2DeDitherMode.hpp"
#include "EFSR2HistoryFormat.hpp"
#include "EFSR2LandscapeHISMMode.hpp"
#include "EFSR2QualityMode.hpp"
#include "EMaterialShadingModel.hpp"
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UFSR2Settings : public UDeveloperSettings {
public:
    bool bEnabled; // 0x38
    bool AutoExposure; // 0x39
    bool EnabledInEditorViewport; // 0x3a
    bool UseSSRExperimentalDenoiser; // 0x3b
    bool UseNativeDX12; // 0x3c
    bool UseNativeVulkan; // 0x3d
    char pad_3e[0x2];
    EFSR2QualityMode QualityMode; // 0x40
    EFSR2HistoryFormat HistoryFormat; // 0x44
    EFSR2DeDitherMode DeDither; // 0x48
    float Sharpness; // 0x4c
    bool AdjustMipBias; // 0x50
    bool ReactiveMask; // 0x51
    bool ForceVertexDeformationOutputsVelocity; // 0x52
    char pad_53[0x1];
    EFSR2LandscapeHISMMode ForceLandscapeHISMMobility; // 0x54
    float ReflectionScale; // 0x58
    float ReflectionLuminanceBias; // 0x5c
    float RoughnessScale; // 0x60
    float RoughnessBias; // 0x64
    float RoughnessMaxDistance; // 0x68
    bool ReactiveMaskRoughnessForceMaxDistance; // 0x6c
    char pad_6d[0x3];
    float TranslucencyBias; // 0x70
    float TranslucencyLuminanceBias; // 0x74
    float TranslucencyMaxDistance; // 0x78
    float PreDOFTranslucencyScale; // 0x7c
    bool PreDOFTranslucencyMax; // 0x80
    EMaterialShadingModel ReactiveShadingModelID; // 0x81
    char pad_82[0x2];
    float ForceReactiveMaterialValue; // 0x84
    float ReactiveHistoryTranslucencyBias; // 0x88
    float ReactiveHistoryTranslucencyLumaBias; // 0x8c
    static UFSR2Settings* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
