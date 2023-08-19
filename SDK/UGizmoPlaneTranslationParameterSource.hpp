#pragma once
#include <cstdint>
#include "FGizmoVec2ParameterChange.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UGizmoBaseVec2ParameterSource.hpp"
#pragma pack(push, 1)
class UGizmoPlaneTranslationParameterSource : public UGizmoBaseVec2ParameterSource {
public:
    char pad_48[0x68];
    FVector2D Parameter; // 0xb0
    FGizmoVec2ParameterChange LastChange; // 0xb8
    FVector CurTranslationOrigin; // 0xc8
    FVector CurTranslationNormal; // 0xd4
    FVector CurTranslationAxisX; // 0xe0
    FVector CurTranslationAxisY; // 0xec
    char pad_f8[0x8];
    FTransform InitialTransform; // 0x100
    static UGizmoPlaneTranslationParameterSource* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
