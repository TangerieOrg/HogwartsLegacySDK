#pragma once
#include <cstdint>
#include "USceneAction_WeatherSequenceOvercast.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSequenceOvercastConstant : public USceneAction_WeatherSequenceOvercast {
public:
    float Overcast; // 0x88
    char pad_8c[0x4];
    static USceneAction_WeatherSequenceOvercastConstant* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
