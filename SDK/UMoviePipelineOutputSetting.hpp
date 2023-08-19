#pragma once
#include <cstdint>
#include "FDirectoryPath.hpp"
#include "FFrameRate.hpp"
#include "FIntPoint.hpp"
#include "UMoviePipelineSetting.hpp"
#pragma pack(push, 1)
class UMoviePipelineOutputSetting : public UMoviePipelineSetting {
public:
    FDirectoryPath OutputDirectory; // 0x48
    FString FileNameFormat; // 0x58
    FIntPoint OutputResolution; // 0x68
    bool bUseCustomFrameRate; // 0x70
    char pad_71[0x3];
    FFrameRate OutputFrameRate; // 0x74
    char pad_7c[0x4];
    bool bOverrideExistingOutput; // 0x80
    char pad_81[0x3];
    int32_t HandleFrameCount; // 0x84
    int32_t OutputFrameStep; // 0x88
    bool bUseCustomPlaybackRange; // 0x8c
    char pad_8d[0x3];
    int32_t CustomStartFrame; // 0x90
    int32_t CustomEndFrame; // 0x94
    int32_t VersionNumber; // 0x98
    bool bAutoVersion; // 0x9c
    char pad_9d[0x3];
    int32_t ZeroPadFrameNumbers; // 0xa0
    int32_t FrameNumberOffset; // 0xa4
    bool bFlushDiskWritesPerShot; // 0xa8
    char pad_a9[0x7];
    static UMoviePipelineOutputSetting* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
