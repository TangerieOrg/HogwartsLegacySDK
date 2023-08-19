#pragma once
#include <cstdint>
#include "UMoviePipelineSetting.hpp"
#pragma pack(push, 1)
class UMoviePipelineOutputBase : public UMoviePipelineSetting {
public:
    static UMoviePipelineOutputBase* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
