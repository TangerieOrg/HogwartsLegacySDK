#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_AnimateProperty.hpp"
class UTransformProvider;
#pragma pack(push, 1)
class USceneAction_AnimateFloatProperty : public USceneAction_AnimateProperty {
public:
    FRuntimeFloatCurve Curve; // 0xc0
    float DefaultValue; // 0x148
    char pad_14c[0x4];
    UTransformProvider* CartLocation; // 0x150
    static USceneAction_AnimateFloatProperty* StaticClass();
}; // Size: 0x158
#pragma pack(pop)
