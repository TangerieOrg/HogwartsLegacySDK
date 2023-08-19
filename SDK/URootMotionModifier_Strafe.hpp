#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "URootMotionModifier.hpp"
class AAmbulatory_Character;
#pragma pack(push, 1)
class URootMotionModifier_Strafe : public URootMotionModifier {
public:
    float ElapsedTime; // 0x50
    char pad_54[0x4];
    static URootMotionModifier_Strafe* StaticClass();
    void CharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FRotator AmountRotated);
    void CharacterRotatedBySupport(FRotator AmountRotated);
}; // Size: 0x58
#pragma pack(pop)
