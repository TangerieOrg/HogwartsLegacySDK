#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "URootMotionModifier.hpp"
class AAmbulatory_Character;
#pragma pack(push, 1)
class URootMotionModifier_DodgeDuckAssist : public URootMotionModifier {
public:
    FVector DesiredFacingDirection; // 0x50
    float AngleOffset; // 0x5c
    float YawRecovery; // 0x60
    char pad_64[0x4];
    static URootMotionModifier_DodgeDuckAssist* StaticClass();
    void CharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated);
}; // Size: 0x68
#pragma pack(pop)
