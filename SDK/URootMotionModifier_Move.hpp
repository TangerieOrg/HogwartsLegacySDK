#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "URootMotionModifier.hpp"
class AAmbulatory_Character;
#pragma pack(push, 1)
class URootMotionModifier_Move : public URootMotionModifier {
public:
    float StartingSpeed; // 0x50
    float ElapsedTime; // 0x54
    static URootMotionModifier_Move* StaticClass();
    void CharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FRotator AmountRotated);
    void CharacterRotatedBySupport(FRotator AmountRotated);
}; // Size: 0x58
#pragma pack(pop)
