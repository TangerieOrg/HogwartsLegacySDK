#pragma once
#include <cstdint>
#include "ESceneAction_AnimateCurves_BlendMode.hpp"
#include "ESceneAction_AnimateCurves_FillMode.hpp"
#include "FAnimateProperty_PropertyName.hpp"
#include "FSceneRigObjectActionBase_ComponentName.hpp"
#include "USceneAction_AnimateCurves.hpp"
#pragma pack(push, 1)
class USceneAction_AnimateProperty : public USceneAction_AnimateCurves {
public:
    FSceneRigObjectActionBase_ComponentName ComponentName; // 0xa0
    FAnimateProperty_PropertyName PropertyName; // 0xa8
    ESceneAction_AnimateCurves_BlendMode BlendMode; // 0xb0
    ESceneAction_AnimateCurves_FillMode FillMode; // 0xb1
    char pad_b2[0x2];
    float LoopCount; // 0xb4
    bool bKeepStateOnCompletion; // 0xb8
    char pad_b9[0x7];
    static USceneAction_AnimateProperty* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
