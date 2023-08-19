#pragma once
#include <cstdint>
#include "UMoviePipelineOutputBase.hpp"
#pragma pack(push, 1)
class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase {
public:
    char pad_48[0x20];
    static UMoviePipelineImageSequenceOutputBase* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
