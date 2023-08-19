#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESubLevelStripMode {
    ExactClass = 0,
    IsChildOf = 1,
    ESubLevelStripMode_MAX = 2,
};
#pragma pack(pop)
