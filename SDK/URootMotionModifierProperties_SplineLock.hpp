#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_SplineLock : public URootMotionModifierProperties {
public:
    float MaxOffset; // 0x30
    bool bAllowReverseDirection; // 0x34
    bool bAllowOrientReverseDirection; // 0x35
    bool bLimitToEndPoints; // 0x36
    ECustomInterpType::Type OffsetInterpType; // 0x37
    float OffsetInterpSpeed; // 0x38
    bool bLockIn2D; // 0x3c
    bool bZeroOutRootMotionNotInSplineDirection; // 0x3d
    bool bOrientToSplineDirection; // 0x3e
    ECustomInterpType::Type RotationInterpType; // 0x3f
    float RotationInterpSpeed; // 0x40
    char pad_44[0x4];
    static URootMotionModifierProperties_SplineLock* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
