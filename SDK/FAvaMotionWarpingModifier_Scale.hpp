#pragma once
#include <cstdint>
#include "FAvaMotionWarpingModifier.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAvaMotionWarpingModifier_Scale : public FAvaMotionWarpingModifier {
    FVector Scale; // 0x28
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
