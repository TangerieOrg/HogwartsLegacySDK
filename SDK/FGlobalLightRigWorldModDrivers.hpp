#pragma once
#include <cstdint>
#include "FGlobalLightRigModDrivers.hpp"
#pragma pack(push, 1)
struct FGlobalLightRigWorldModDrivers {
    FGlobalLightRigModDrivers Defaults; // 0x0
    char pad_50[0x50];
}; // Size: 0xa0
#pragma pack(pop)
