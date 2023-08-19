#pragma once
#include <cstdint>
#include "EMotionWarpRotationType.hpp"
#include "FAvaMotionWarpingModifier.hpp"
#include "FAvaMotionWarpingSyncPoint.hpp"
#pragma pack(push, 1)
struct FAvaMotionWarpingModifier_Warp : public FAvaMotionWarpingModifier {
    FName SyncPointName; // 0x28
    bool bWarpTranslation; // 0x30
    bool bDisallowHorizontalStretching; // 0x31
    bool bDisallowHorizontalSquishing; // 0x32
    bool bIgnoreZAxis; // 0x33
    bool bWarpRotation; // 0x34
    EMotionWarpRotationType RotationType; // 0x35
    char pad_36[0x2];
    float WarpRotationTimeMultiplier; // 0x38
    char pad_3c[0x4];
    FAvaMotionWarpingSyncPoint CachedSyncPoint; // 0x40
}; // Size: 0x60
#pragma pack(pop)
