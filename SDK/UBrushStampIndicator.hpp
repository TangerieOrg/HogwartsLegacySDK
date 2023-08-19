#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UInteractiveGizmo.hpp"
class UPrimitiveComponent;
#pragma pack(push, 1)
class UBrushStampIndicator : public UInteractiveGizmo {
public:
    float BrushRadius; // 0x38
    float BrushFalloff; // 0x3c
    FVector BrushPosition; // 0x40
    FVector BrushNormal; // 0x4c
    bool bDrawIndicatorLines; // 0x58
    bool bDrawRadiusCircle; // 0x59
    char pad_5a[0x2];
    int32_t SampleStepCount; // 0x5c
    FLinearColor LineColor; // 0x60
    float LineThickness; // 0x70
    bool bDepthTested; // 0x74
    bool bDrawSecondaryLines; // 0x75
    char pad_76[0x2];
    float SecondaryLineThickness; // 0x78
    FLinearColor SecondaryLineColor; // 0x7c
    char pad_8c[0x4];
    UPrimitiveComponent* AttachedComponent; // 0x90
    char pad_98[0x18];
    static UBrushStampIndicator* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
