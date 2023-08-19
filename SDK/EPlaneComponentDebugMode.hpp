#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPlaneComponentDebugMode : uint8_t {
    None = 0,
    ShowNetworkRole = 1,
    ShowClassification = 2,
    EPlaneComponentDebugMode_MAX = 3,
};
#pragma pack(pop)
