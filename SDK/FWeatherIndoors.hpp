#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FWeatherIndoors {
    float GameIndoors; // 0x0
    float ProbeIndoors; // 0x4
    float WeatherIndoors; // 0x8
    float FullScreenDecalOpacity; // 0xc
    float CameraParticlesSpawnRate; // 0x10
}; // Size: 0x14
#pragma pack(pop)
