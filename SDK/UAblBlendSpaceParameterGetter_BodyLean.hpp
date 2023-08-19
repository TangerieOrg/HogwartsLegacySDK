#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAblBlendSpaceParameterGetter.hpp"
class AAmbulatory_Character;
#pragma pack(push, 1)
class UAblBlendSpaceParameterGetter_BodyLean : public UAblBlendSpaceParameterGetter {
public:
    FVector2D SpeedRange; // 0x28
    FVector2D BlendSpaceMaxRange; // 0x30
    FVector2D InterpSpeedRange; // 0x38
    bool bUseSpringInterp; // 0x40
    char pad_41[0x3];
    float SpringHalflife; // 0x44
    char pad_48[0x10];
    static UAblBlendSpaceParameterGetter_BodyLean* StaticClass();
    void OnTeleport(AAmbulatory_Character* Character, FVector AmountDisplaced, FRotator AmountRotated);
}; // Size: 0x58
#pragma pack(pop)
