#pragma once
#include <cstdint>
#include "FRigUnit_AnimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_SecondsToFrames : public FRigUnit_AnimBase {
    float Seconds; // 0x8
    float Frames; // 0xc
}; // Size: 0x10
#pragma pack(pop)
