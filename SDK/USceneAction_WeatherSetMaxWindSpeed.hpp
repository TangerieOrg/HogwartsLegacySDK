#pragma once
#include <cstdint>
#include "USceneAction_WeatherGeneric.hpp"
#pragma pack(push, 1)
class USceneAction_WeatherSetMaxWindSpeed : public USceneAction_WeatherGeneric {
public:
    float MaxWindSpeed; // 0x88
    char pad_8c[0x4];
    static USceneAction_WeatherSetMaxWindSpeed* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
