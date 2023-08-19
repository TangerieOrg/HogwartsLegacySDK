#pragma once
#include <cstdint>
#include "FGizmoVec2ParameterChange.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UGizmoBaseVec2ParameterSource.hpp"
#pragma pack(push, 1)
class UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource {
public:
    char pad_48[0x20];
    float ScaleMultiplier; // 0x68
    FVector2D Parameter; // 0x6c
    FGizmoVec2ParameterChange LastChange; // 0x74
    FVector CurScaleOrigin; // 0x84
    FVector CurScaleNormal; // 0x90
    FVector CurScaleAxisX; // 0x9c
    FVector CurScaleAxisY; // 0xa8
    char pad_b4[0xc];
    FTransform InitialTransform; // 0xc0
    static UGizmoUniformScaleParameterSource* StaticClass();
}; // Size: 0xf0
#pragma pack(pop)
