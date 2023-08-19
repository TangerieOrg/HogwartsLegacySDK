#pragma once
#include <cstdint>
#include "USceneAction_WeatherSequenceCold.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceColdConstant : public USceneAction_WeatherSequenceCold {
public:
    float Cold; // 0x88
    char pad_8c[0x4];
    static USceneAction_WeatherSequenceColdConstant* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
