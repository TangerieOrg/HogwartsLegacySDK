#pragma once
#include <cstdint>
#include "FSceneComponentInstanceData.hpp"
#include "FSplineCurves.hpp"
#pragma pack(push, 1)
struct FSplineInstanceData : public FSceneComponentInstanceData {
    bool bSplineHasBeenEdited; // 0xb8
    char pad_b9[0x7];
    FSplineCurves SplineCurves; // 0xc0
    FSplineCurves SplineCurvesPreUCS; // 0x130
}; // Size: 0x1a0
#pragma pack(pop)
