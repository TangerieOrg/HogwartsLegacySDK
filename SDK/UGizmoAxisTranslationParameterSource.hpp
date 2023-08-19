#pragma once
#include <cstdint>
#include "FGizmoFloatParameterChange.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UGizmoBaseFloatParameterSource.hpp"
#pragma pack(push, 1)
class UGizmoAxisTranslationParameterSource : public UGizmoBaseFloatParameterSource {
public:
    char pad_48[0x68];
    float Parameter; // 0xb0
    FGizmoFloatParameterChange LastChange; // 0xb4
    FVector CurTranslationAxis; // 0xbc
    FVector CurTranslationOrigin; // 0xc8
    char pad_d4[0xc];
    FTransform InitialTransform; // 0xe0
    static UGizmoAxisTranslationParameterSource* StaticClass();
}; // Size: 0x110
#pragma pack(pop)
