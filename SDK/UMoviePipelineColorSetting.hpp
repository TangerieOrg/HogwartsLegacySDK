#pragma once
#include <cstdint>
#include "FOpenColorIODisplayConfiguration.hpp"
#include "UMoviePipelineSetting.hpp"
#pragma pack(push, 1)
class UMoviePipelineColorSetting : public UMoviePipelineSetting {
public:
    FOpenColorIODisplayConfiguration OCIOConfiguration; // 0x48
    bool bDisableToneCurve; // 0xa8
    char pad_a9[0x7];
    static UMoviePipelineColorSetting* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
