#pragma once
#include <cstdint>
#include "FGizmoVec2ParameterChange.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UGizmoBaseVec2ParameterSource.hpp"
#pragma pack(push, 1)
class UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource {
public:
    char pad_48[0x68];
    float ScaleMultiplier; // 0xb0
    FVector2D Parameter; // 0xb4
    FGizmoVec2ParameterChange LastChange; // 0xbc
    FVector CurScaleOrigin; // 0xcc
    FVector CurScaleNormal; // 0xd8
    FVector CurScaleAxisX; // 0xe4
    FVector CurScaleAxisY; // 0xf0
    char pad_fc[0x4];
    FTransform InitialTransform; // 0x100
    static UGizmoPlaneScaleParameterSource* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
