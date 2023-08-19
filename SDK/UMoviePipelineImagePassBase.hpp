#pragma once
#include <cstdint>
#include "UMoviePipelineRenderPass.hpp"
#pragma pack(push, 1)
class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass {
public:
    char pad_48[0x80];
    static UMoviePipelineImagePassBase* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
