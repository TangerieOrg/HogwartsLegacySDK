#pragma once
#include <cstdint>
#include "FBoneReference.hpp"
#pragma pack(push, 1)
struct FInitializeEffectorData {
    FBoneReference FKBone; // 0x0
    FBoneReference EffectorBone; // 0x10
    FName TranslationControlCurve; // 0x20
    char pad_28[0x4];
    FName RotationControlCurve; // 0x2c
    char pad_34[0x4];
}; // Size: 0x38
#pragma pack(pop)
