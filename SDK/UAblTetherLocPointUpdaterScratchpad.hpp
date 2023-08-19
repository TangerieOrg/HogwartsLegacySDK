#pragma once
#include <cstdint>
#include "UAblAvaMotionWarpSyncPointUpdaterScratchpad.hpp"
#pragma pack(push, 1)
class UAblTetherLocPointUpdaterScratchpad : public UAblAvaMotionWarpSyncPointUpdaterScratchpad {
public:
    char pad_28[0x20];
    static UAblTetherLocPointUpdaterScratchpad* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
