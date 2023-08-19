#pragma once
#include <cstdint>
#include "UTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_ParentConstraint : public UTransformProvider {
public:
    UTransformProvider* ParentTransform; // 0x28
    UTransformProvider* TransformInParentSpace; // 0x30
    static UTransform_ParentConstraint* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
