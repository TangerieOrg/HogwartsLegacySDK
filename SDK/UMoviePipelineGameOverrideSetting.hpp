#pragma once
#include <cstdint>
#include "EMoviePipelineTextureStreamingMethod.hpp"
#include "UMoviePipelineSetting.hpp"
class UClass;
#pragma pack(push, 1)
class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting {
public:
    UClass* GameModeOverride; // 0x48
    bool bCinematicQualitySettings; // 0x50
    EMoviePipelineTextureStreamingMethod TextureStreaming; // 0x51
    bool bUseLODZero; // 0x52
    bool bDisableHLODs; // 0x53
    bool bUseHighQualityShadows; // 0x54
    char pad_55[0x3];
    int32_t ShadowDistanceScale; // 0x58
    float ShadowRadiusThreshold; // 0x5c
    bool bOverrideViewDistanceScale; // 0x60
    char pad_61[0x3];
    int32_t ViewDistanceScale; // 0x64
    bool bFlushGrassStreaming; // 0x68
    char pad_69[0xaf];
    static UMoviePipelineGameOverrideSetting* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
