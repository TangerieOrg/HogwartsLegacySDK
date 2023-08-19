#pragma once
#include <cstdint>
#include "UAvaMotionWarpWindowFinder.hpp"
#pragma pack(push, 1)
class UAvaEmptyMotionWarpWindowFinder : public UAvaMotionWarpWindowFinder {
public:
    static UAvaEmptyMotionWarpWindowFinder* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
