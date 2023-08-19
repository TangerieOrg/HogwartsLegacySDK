#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "URootMotionModifier.hpp"
class AAmbulatory_Character;
#pragma pack(push, 1)
class URootMotionModifier_TurnAssist : public URootMotionModifier {
public:
    FVector CurrentDirection; // 0x50
    FVector TargetDirection; // 0x5c
    FVector DesiredDirection; // 0x68
    FVector RootMotionRotationDirection; // 0x74
    FVector RootMotionTranslationDirection; // 0x80
    float RootYawRemaining; // 0x8c
    float RootYawOffset; // 0x90
    float RootYawSampleTime; // 0x94
    bool bRootYawRemainingInitialized; // 0x98
    char pad_99[0x3];
    float ElapsedTime; // 0x9c
    float ScaledElapsedTime; // 0xa0
    bool bValidFacingTargets; // 0xa4
    char pad_a5[0x3];
    FVector TestVector; // 0xa8
    char pad_b4[0x24];
    static URootMotionModifier_TurnAssist* StaticClass();
    void CharacterTeleported(AAmbulatory_Character* TeleportedCharacter, FVector AmountDisplaced, FRotator AmountRotated);
    void CharacterRotatedBySupport(FRotator AmountRotated);
}; // Size: 0xd8
#pragma pack(pop)
