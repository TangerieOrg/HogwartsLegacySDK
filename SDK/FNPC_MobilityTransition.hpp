#pragma once
#include <cstdint>
#include "ENPC_Mobility.hpp"
class UClass;
#pragma pack(push, 1)
struct FNPC_MobilityTransition {
    ENPC_Mobility FromMobility; // 0x0
    ENPC_Mobility ToMobility; // 0x1
    char pad_2[0x6];
    UClass* AbilityPtr; // 0x8
}; // Size: 0x10
#pragma pack(pop)
