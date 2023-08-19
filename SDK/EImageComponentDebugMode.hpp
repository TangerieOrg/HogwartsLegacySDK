#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EImageComponentDebugMode : uint8_t {
    None = 0,
    ShowDetectedImage = 1,
    EImageComponentDebugMode_MAX = 2,
};
#pragma pack(pop)
