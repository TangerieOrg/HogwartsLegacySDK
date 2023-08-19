#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "EWandLinkInputType.hpp"
#include "UWandLinkUIMiniGame.hpp"
#pragma pack(push, 1)
class UWandLinkUIMiniGame_NewButtonMash : public UWandLinkUIMiniGame {
public:
    float AntagonistAttackSpeed; // 0x58
    float ButtonMashMeterInterpInSpeed; // 0x5c
    float ButtonMashTimeOut; // 0x60
    float ButtonMashDecreaseRate; // 0x64
    float ButtonMashNearSuccessCheck; // 0x68
    EWandLinkInputType WandLinkButtonMashInput; // 0x6c
    EWandLinkInputType WandLinkSuccessInput; // 0x6d
    char pad_6e[0x2];
    float ProtagonistSuccessSurge; // 0x70
    ECustomInterpType::Type ProtagonistAttackInterpType; // 0x74
    char pad_75[0x3];
    float ProtagonistAttackInterpSpeedOrExp; // 0x78
    float ProtagonistAttackInterpTime; // 0x7c
    float ProtagonistFailSurge; // 0x80
    float FailDelay; // 0x84
    float FailAttackonistSpeedMultiplier; // 0x88
    float SuccessDelay; // 0x8c
    char pad_90[0x38];
    static UWandLinkUIMiniGame_NewButtonMash* StaticClass();
    void SuccessTimerExpired();
    void SuccessComboButtonReleased();
    void SuccessComboButtonPressed();
    void SuccessButtonPressed();
    void IncorrectSuccessButtonPressed();
    void IncorrectButtonMashed();
    void FailTimerExpired();
    void CorrectButtonMashed();
    void CheatButtonSuccessPressed();
    void CheatButtonFailPressed();
}; // Size: 0xc8
#pragma pack(pop)
