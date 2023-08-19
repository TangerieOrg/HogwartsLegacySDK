#pragma once
#include <cstdint>
#include "FAnimationRequestLayerReference.hpp"
#include "FSceneActionAnimCurve.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_AnimCurves : public USceneRigObjectActionBase {
public:
    FAnimationRequestLayerReference Layer; // 0xa0
    TArray<FSceneActionAnimCurve> Curves; // 0xa8
    static USceneAction_AnimCurves* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
