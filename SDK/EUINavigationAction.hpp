#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUINavigationAction : uint8_t {
    Accept = 0,
    Back = 1,
    Num = 2,
    Invalid = 3,
    EUINavigationAction_MAX = 4,
};
#pragma pack(pop)
