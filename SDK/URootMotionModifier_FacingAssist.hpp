#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "URootMotionModifier.hpp"
class AAmbulatory_Character;
#pragma pack(push, 1)
class URootMotionModifier_FacingAssist : public URootMotionModifier {
public:
    FVector StartDirection; // 0x50
    FVector CurrentDirection; // 0x5c
    FVector DesiredDirection; // 0x68
    float StartHeading; // 0x74
    float ElapsedTime; // 0x78
    char pad_7c[0x4];
    static URootMotionModifier_FacingAssist* StaticClass();
    void CharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated);
}; // Size: 0x80
#pragma pack(pop)
