#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EProjectedHullAxis : int32_t {
    X = 0,
    Y = 1,
    Z = 2,
    SmallestBoxDimension = 3,
    SmallestVolume = 4,
    EProjectedHullAxis_MAX = 5,
};
#pragma pack(pop)
