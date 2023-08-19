#pragma once
#include <cstdint>
#include "UEngineCustomTimeStep.hpp"
#pragma pack(push, 1)
class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep {
public:
    char pad_28[0x8];
    static UMoviePipelineCustomTimeStep* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
