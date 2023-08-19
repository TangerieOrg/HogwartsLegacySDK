#pragma once
#include <cstdint>
#include "ESplineInterpMode.hpp"
#include "FControlPoint.hpp"
#include "FNamedBoneInfluences.hpp"
#pragma pack(push, 1)
struct FDynamicSpline {
    TArray<FControlPoint> ControlPoints; // 0x0
    TArray<FNamedBoneInfluences> ControlPointInfluences; // 0x10
    TArray<float> Keys; // 0x20
    TArray<ESplineInterpMode> InterpModes; // 0x30
}; // Size: 0x40
#pragma pack(pop)
