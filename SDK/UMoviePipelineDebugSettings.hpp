#pragma once
#include <cstdint>
#include "UMoviePipelineSetting.hpp"
#pragma pack(push, 1)
class UMoviePipelineDebugSettings : public UMoviePipelineSetting {
public:
    bool bWriteAllSamples; // 0x48
    bool bCaptureFramesWithRenderDoc; // 0x49
    char pad_4a[0x2];
    int32_t CaptureFrame; // 0x4c
    char pad_50[0x8];
    static UMoviePipelineDebugSettings* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
