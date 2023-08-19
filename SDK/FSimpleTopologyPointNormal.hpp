#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSimpleTopologyPointNormal {
    FVector Point; // 0x0
    FVector Normal; // 0xc
}; // Size: 0x18
#pragma pack(pop)
