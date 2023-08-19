#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAblCameraStackContextOperation : uint8_t {
    Ignore = 0,
    AddContext = 1,
    RemoveContext = 2,
    EAblCameraStackContextOperation_MAX = 3,
};
#pragma pack(pop)
