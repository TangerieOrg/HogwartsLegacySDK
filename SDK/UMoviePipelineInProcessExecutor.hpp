#pragma once
#include <cstdint>
#include "UMoviePipelineLinearExecutorBase.hpp"
#pragma pack(push, 1)
class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase {
public:
    bool bUseCurrentLevel; // 0x130
    char pad_131[0x37];
    static UMoviePipelineInProcessExecutor* StaticClass();
}; // Size: 0x168
#pragma pack(pop)
