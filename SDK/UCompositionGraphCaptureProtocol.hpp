#pragma once
#include <cstdint>
#include "EHDRCaptureGamut.hpp"
#include "FCompositionGraphCapturePasses.hpp"
#include "FSoftObjectPath.hpp"
#include "UMovieSceneImageCaptureProtocolBase.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase {
public:
    FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58
    bool bCaptureFramesInHDR; // 0x68
    char pad_69[0x3];
    int32_t HDRCompressionQuality; // 0x6c
    EHDRCaptureGamut CaptureGamut; // 0x70
    char pad_71[0x7];
    FSoftObjectPath PostProcessingMaterial; // 0x78
    bool bDisableScreenPercentage; // 0x90
    char pad_91[0x7];
    UMaterialInterface* PostProcessingMaterialPtr; // 0x98
    char pad_a0[0x20];
    static UCompositionGraphCaptureProtocol* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
