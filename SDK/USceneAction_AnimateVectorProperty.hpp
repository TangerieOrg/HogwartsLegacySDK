#pragma once
#include <cstdint>
#include "FRuntimeCurveVector.hpp"
#include "FVector.hpp"
#include "USceneAction_AnimateProperty.hpp"
#pragma pack(push, 1)
class USceneAction_AnimateVectorProperty : public USceneAction_AnimateProperty {
public:
    FRuntimeCurveVector Curve; // 0xc0
    FVector DefaultValue; // 0x248
    char pad_254[0x4];
    static USceneAction_AnimateVectorProperty* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
