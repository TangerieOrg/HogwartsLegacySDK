#pragma once
#include <cstdint>
#include "UMoviePipelineOutputBase.hpp"
#pragma pack(push, 1)
class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase {
public:
    FString FileNameFormatOverride; // 0x48
    char pad_58[0x60];
    static UMoviePipelineWaveOutput* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
