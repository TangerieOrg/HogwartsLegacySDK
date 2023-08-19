#pragma once
#include <cstdint>
class UMoviePipelineExecutorJob;
#pragma pack(push, 1)
struct FMoviePipelineFormatArgs {
    char pad_0[0xa0];
    UMoviePipelineExecutorJob* InJob; // 0xa0
}; // Size: 0xa8
#pragma pack(pop)
