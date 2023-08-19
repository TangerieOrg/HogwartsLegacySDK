#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "EWandLinkInputType.hpp"
#include "FWandLinkUIMiniGame_ButtonMashDifficultyLevels.hpp"
#include "UWandLinkUIMiniGame.hpp"
#pragma pack(push, 1)
class UWandLinkUIMiniGame_ButtonMash : public UWandLinkUIMiniGame {
public:
    FWandLinkUIMiniGame_ButtonMashDifficultyLevels EasyDifficulty; // 0x58
    FWandLinkUIMiniGame_ButtonMashDifficultyLevels MediumDifficulty; // 0x70
    FWandLinkUIMiniGame_ButtonMashDifficultyLevels HardDifficulty; // 0x88
    FWandLinkUIMiniGame_ButtonMashDifficultyLevels StoryModeDifficulty; // 0xa0
    ECustomInterpType::Type AntagonistStartingSurgeToPctInterpType; // 0xb8
    char pad_b9[0x3];
    float AntagonistStartingSurgeToPctInterpSpeedOrExp; // 0xbc
    float AntagonistStartingSurgeToPctInterpTime; // 0xc0
    float ButtonMashTimeOut; // 0xc4
    EWandLinkInputType WandLinkButtonMashInput; // 0xc8
    ECustomInterpType::Type ProtagonistAttackInterpType; // 0xc9
    char pad_ca[0x2];
    float ProtagonistAttackInterpSpeedOrExp; // 0xcc
    float ProtagonistAttackInterpTime; // 0xd0
    float FailDelay; // 0xd4
    float SuccessDelay; // 0xd8
    char pad_dc[0x44];
    static UWandLinkUIMiniGame_ButtonMash* StaticClass();
    void IncorrectButtonMashed();
    void CorrectButtonMashed();
    void CheatButtonSuccessPressed();
    void CheatButtonFailPressed();
}; // Size: 0x120
#pragma pack(pop)
