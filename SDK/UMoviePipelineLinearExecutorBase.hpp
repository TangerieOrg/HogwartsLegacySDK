#pragma once
#include <cstdint>
#include "UMoviePipelineExecutorBase.hpp"
class UMoviePipelineQueue;
class UMoviePipeline;
#pragma pack(push, 1)
class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase {
public:
    UMoviePipelineQueue* Queue; // 0x108
    UMoviePipeline* ActiveMoviePipeline; // 0x110
    char pad_118[0x18];
    static UMoviePipelineLinearExecutorBase* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
