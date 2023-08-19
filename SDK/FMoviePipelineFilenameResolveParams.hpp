#pragma once
#include <cstdint>
#include "FDateTime.hpp"
class UMoviePipelineExecutorJob;
class UMoviePipelineExecutorShot;
#pragma pack(push, 1)
struct FMoviePipelineFilenameResolveParams {
    int32_t FrameNumber; // 0x0
    int32_t FrameNumberShot; // 0x4
    int32_t FrameNumberRel; // 0x8
    int32_t FrameNumberShotRel; // 0xc
    FString CameraNameOverride; // 0x10
    FString ShotNameOverride; // 0x20
    int32_t ZeroPadFrameNumberCount; // 0x30
    bool bForceRelativeFrameNumbers; // 0x34
    char pad_35[0xa3];
    FDateTime InitializationTime; // 0xd8
    int32_t InitializationVersion; // 0xe0
    char pad_e4[0x4];
    UMoviePipelineExecutorJob* Job; // 0xe8
    UMoviePipelineExecutorShot* ShotOverride; // 0xf0
    int32_t AdditionalFrameNumberOffset; // 0xf8
    char pad_fc[0x4];
}; // Size: 0x100
#pragma pack(pop)
