#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCameraFilmbackSettings {
    float SensorWidth; // 0x0
    float SensorHeight; // 0x4
    float SensorAspectRatio; // 0x8
}; // Size: 0xc
#pragma pack(pop)
