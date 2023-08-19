#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FChaosDebugSubstepControl {
    bool bPause; // 0x0
    bool bSubstep; // 0x1
    bool bStep; // 0x2
}; // Size: 0x3
#pragma pack(pop)
