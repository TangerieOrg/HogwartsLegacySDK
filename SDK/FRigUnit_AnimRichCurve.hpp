#pragma once
#include <cstdint>
#include "FRigUnit_AnimBase.hpp"
#include "FRuntimeFloatCurve.hpp"
#pragma pack(push, 1)
struct FRigUnit_AnimRichCurve : public FRigUnit_AnimBase {
    FRuntimeFloatCurve Curve; // 0x8
}; // Size: 0x90
#pragma pack(pop)
