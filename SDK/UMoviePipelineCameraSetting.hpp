#pragma once
#include <cstdint>
#include "EMoviePipelineShutterTiming.hpp"
#include "UMoviePipelineSetting.hpp"
#pragma pack(push, 1)
class UMoviePipelineCameraSetting : public UMoviePipelineSetting {
public:
    EMoviePipelineShutterTiming ShutterTiming; // 0x48
    char pad_49[0x3];
    float OverscanPercentage; // 0x4c
    static UMoviePipelineCameraSetting* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
