#pragma once
#include <cstdint>
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FWCullingPlane {
    FRotator RelativeRotation; // 0x0
    float RelativeDistance; // 0xc
    float AttenuationDistance; // 0x10
}; // Size: 0x14
#pragma pack(pop)
