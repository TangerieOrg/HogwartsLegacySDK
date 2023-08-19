#pragma once
#include <cstdint>
#include "EEmberTrickAxis\Type.hpp"
#include "EEmberTrickRotation\Type.hpp"
#include "UDataAsset.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class ULumosEmberTrick : public UDataAsset {
public:
    UCurveFloat* RadiusCurve; // 0x30
    UCurveFloat* RotationCurve; // 0x38
    EEmberTrickAxis::Type TrickAxis; // 0x40
    EEmberTrickRotation::Type TrickRotation; // 0x41
    char pad_42[0x2];
    float RadiusValueMultiplier; // 0x44
    float RadiusTimeMultiplier; // 0x48
    float RotationValueMultiplier; // 0x4c
    float RotationTimeMultiplier; // 0x50
    char pad_54[0xc];
    static ULumosEmberTrick* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
