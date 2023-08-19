#pragma once
#include <cstdint>
#include "FRigUnit_AnimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_FramesToSeconds : public FRigUnit_AnimBase {
    float Frames; // 0x8
    float Seconds; // 0xc
}; // Size: 0x10
#pragma pack(pop)
