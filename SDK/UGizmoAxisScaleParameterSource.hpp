#pragma once
#include <cstdint>
#include "FGizmoFloatParameterChange.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UGizmoBaseFloatParameterSource.hpp"
#pragma pack(push, 1)
class UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource {
public:
    char pad_48[0x20];
    float ScaleMultiplier; // 0x68
    float Parameter; // 0x6c
    FGizmoFloatParameterChange LastChange; // 0x70
    FVector CurScaleAxis; // 0x78
    FVector CurScaleOrigin; // 0x84
    FTransform InitialTransform; // 0x90
    static UGizmoAxisScaleParameterSource* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
