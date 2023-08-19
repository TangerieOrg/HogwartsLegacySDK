#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPoseDriverType {
    SwingAndTwist = 0,
    SwingOnly = 1,
    Translation = 2,
    EPoseDriverType_MAX = 3,
};
#pragma pack(pop)
