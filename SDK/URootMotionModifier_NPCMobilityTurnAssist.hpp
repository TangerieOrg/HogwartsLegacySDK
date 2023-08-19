#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "URootMotionModifier.hpp"
class AAmbulatory_Character;
#pragma pack(push, 1)
class URootMotionModifier_NPCMobilityTurnAssist : public URootMotionModifier {
public:
    FVector RootMotionRotationDirection; // 0x50
    FVector RootMotionTranslationDirection; // 0x5c
    float ElapsedTime; // 0x68
    FVector TranslateVec; // 0x6c
    bool bApplyTranslateVec; // 0x78
    char pad_79[0x7];
    static URootMotionModifier_NPCMobilityTurnAssist* StaticClass();
    void CharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FRotator AmountRotated);
    void CharacterRotatedBySupport(FRotator AmountRotated);
}; // Size: 0x80
#pragma pack(pop)
