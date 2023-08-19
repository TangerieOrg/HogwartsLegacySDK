#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FVolumetricCloudsDetailParams {
    float Density; // 0x0
    float WeatherScale; // 0x4
    float ShapeScale; // 0x8
    float ErosionDetail; // 0xc
    float ErosionDetailScale; // 0x10
    float AnvilBias; // 0x14
    float LayerRadius; // 0x18
    float LayerVerticalHeight; // 0x1c
    float LayerAltitudeOffset; // 0x20
    float CoverageCameraFade; // 0x24
}; // Size: 0x28
#pragma pack(pop)
