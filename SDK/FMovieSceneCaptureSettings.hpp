#pragma once
#include <cstdint>
#include "FCaptureResolution.hpp"
#include "FDirectoryPath.hpp"
#include "FFrameRate.hpp"
class UClass;
#pragma pack(push, 1)
struct FMovieSceneCaptureSettings {
    FDirectoryPath OutputDirectory; // 0x0
    UClass* GameModeOverride; // 0x10
    FString OutputFormat; // 0x18
    bool bOverwriteExisting; // 0x28
    bool bUseRelativeFrameNumbers; // 0x29
    char pad_2a[0x2];
    int32_t HandleFrames; // 0x2c
    FString MovieExtension; // 0x30
    uint8_t ZeroPadFrameNumbers; // 0x40
    char pad_41[0x3];
    FFrameRate FrameRate; // 0x44
    bool bUseCustomFrameRate; // 0x4c
    char pad_4d[0x3];
    FFrameRate CustomFrameRate; // 0x50
    FCaptureResolution Resolution; // 0x58
    bool bEnableTextureStreaming; // 0x60
    bool bCinematicEngineScalability; // 0x61
    bool bCinematicMode; // 0x62
    bool bAllowMovement; // 0x63
    bool bAllowTurning; // 0x64
    bool bShowPlayer; // 0x65
    bool bShowHUD; // 0x66
    bool bUsePathTracer; // 0x67
    int32_t PathTracerSamplePerPixel; // 0x68
    char pad_6c[0x4];
}; // Size: 0x70
#pragma pack(pop)
