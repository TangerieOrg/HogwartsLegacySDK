#pragma once
#include <cstdint>
#include "FInterpCurveFloat.hpp"
#include "FInterpCurveQuat.hpp"
#include "FInterpCurveVector.hpp"
class USplineMetadata;
#pragma pack(push, 1)
struct FSplineCurves {
    FInterpCurveVector Position; // 0x0
    FInterpCurveQuat Rotation; // 0x18
    FInterpCurveVector Scale; // 0x30
    FInterpCurveFloat ReparamTable; // 0x48
    USplineMetadata* MetaData; // 0x60
    uint32_t Version; // 0x68
    char pad_6c[0x4];
}; // Size: 0x70
#pragma pack(pop)
