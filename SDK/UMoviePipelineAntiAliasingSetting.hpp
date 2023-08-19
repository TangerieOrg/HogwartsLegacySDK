#pragma once
#include <cstdint>
#include "EAntiAliasingMethod.hpp"
#include "UMoviePipelineSetting.hpp"
#pragma pack(push, 1)
class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting {
public:
    int32_t SpatialSampleCount; // 0x48
    int32_t TemporalSampleCount; // 0x4c
    bool bOverrideAntiAliasing; // 0x50
    EAntiAliasingMethod AntiAliasingMethod; // 0x51
    char pad_52[0x2];
    int32_t RenderWarmUpCount; // 0x54
    bool bUseCameraCutForWarmUp; // 0x58
    char pad_59[0x3];
    int32_t EngineWarmUpCount; // 0x5c
    bool bRenderWarmUpFrames; // 0x60
    char pad_61[0x7];
    static UMoviePipelineAntiAliasingSetting* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
