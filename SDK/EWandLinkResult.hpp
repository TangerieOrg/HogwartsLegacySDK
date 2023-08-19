#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWandLinkResult : uint8_t {
    LethalExplode = 0,
    NonLethalGetup = 1,
    NonLethalProne = 2,
    HarlowEnd = 3,
    EWandLinkResult_MAX = 4,
};
#pragma pack(pop)
