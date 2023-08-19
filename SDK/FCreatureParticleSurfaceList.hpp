#pragma once
#include <cstdint>
#include "FCreatureSurfaceList.hpp"
#pragma pack(push, 1)
struct FCreatureParticleSurfaceList {
    FCreatureSurfaceList Large; // 0x0
    FCreatureSurfaceList Medium; // 0x30
    FCreatureSurfaceList Small; // 0x60
}; // Size: 0x90
#pragma pack(pop)
