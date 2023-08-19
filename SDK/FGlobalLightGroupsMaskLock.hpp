#pragma once
#include <cstdint>
#include "FGlobalLightGroupsMask.hpp"
#pragma pack(push, 1)
struct FGlobalLightGroupsMaskLock {
    FGlobalLightGroupsMask LockedOnMask; // 0x0
    FGlobalLightGroupsMask LockedOffMask; // 0x8
}; // Size: 0x10
#pragma pack(pop)
