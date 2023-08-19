#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_PointAndOrientConstraint : public UTransformProvider {
public:
    UTransformProvider* TranslationParent; // 0x28
    FVector TranslationInParentSpace; // 0x30
    char pad_3c[0x4];
    UTransformProvider* RotationParent; // 0x40
    FRotator RotationInParentSpace; // 0x48
    char pad_54[0x4];
    static UTransform_PointAndOrientConstraint* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
