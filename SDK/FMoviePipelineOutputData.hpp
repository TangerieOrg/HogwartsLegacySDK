#pragma once
#include <cstdint>
#include "FMoviePipelineShotOutputData.hpp"
class UMoviePipeline;
class UMoviePipelineExecutorJob;
#pragma pack(push, 1)
struct FMoviePipelineOutputData {
    UMoviePipeline* Pipeline; // 0x0
    UMoviePipelineExecutorJob* Job; // 0x8
    bool bSuccess; // 0x10
    char pad_11[0x7];
    TArray<FMoviePipelineShotOutputData> ShotData; // 0x18
}; // Size: 0x28
#pragma pack(pop)
