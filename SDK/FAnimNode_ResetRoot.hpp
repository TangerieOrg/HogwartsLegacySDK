#pragma once
#include <cstdint>
#include "FAnimNode_SkeletalControlBase.hpp"
#pragma pack(push, 1)
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase {
    char pad_c8[0x10];
}; // Size: 0xd8
#pragma pack(pop)
