#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FRuntimeCurveLinearColor.hpp"
#include "USceneAction_AnimateProperty.hpp"
#pragma pack(push, 1)
class USceneAction_AnimateColorProperty : public USceneAction_AnimateProperty {
public:
    FRuntimeCurveLinearColor Curve; // 0xc0
    FLinearColor DefaultValue; // 0x2c8
    static USceneAction_AnimateColorProperty* StaticClass();
}; // Size: 0x2d8
#pragma pack(pop)
