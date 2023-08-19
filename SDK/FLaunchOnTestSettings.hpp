#pragma once
#include <cstdint>
#include "FFilePath.hpp"
#pragma pack(push, 1)
struct FLaunchOnTestSettings {
    FFilePath LaunchOnTestmap; // 0x0
    FString DeviceID; // 0x10
}; // Size: 0x20
#pragma pack(pop)
