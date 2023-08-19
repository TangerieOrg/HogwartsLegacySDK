#pragma once
#include <cstdint>
#include "UMoviePipelineOutputBase.hpp"
#pragma pack(push, 1)
class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase {
public:
    char pad_48[0x40];
    static UMoviePipelineVideoOutputBase* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
