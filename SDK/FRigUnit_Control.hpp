#pragma once
#include <cstdint>
#include "FEulerTransform.hpp"
#include "FRigUnit.hpp"
#include "FTransform.hpp"
#include "FTransformFilter.hpp"
#pragma pack(push, 1)
struct FRigUnit_Control : public FRigUnit {
    FEulerTransform Transform; // 0x8
    char pad_2c[0x4];
    FTransform Base; // 0x30
    FTransform InitTransform; // 0x60
    FTransform Result; // 0x90
    FTransformFilter Filter; // 0xc0
    char pad_c9[0x7];
}; // Size: 0xd0
#pragma pack(pop)
