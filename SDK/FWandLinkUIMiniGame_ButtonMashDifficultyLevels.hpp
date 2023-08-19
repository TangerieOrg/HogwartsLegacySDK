#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FWandLinkUIMiniGame_ButtonMashDifficultyLevels {
    float AntagonistAttackSpeed; // 0x0
    float AntagonistStartingSurgeToPct; // 0x4
    float ProtagonistMashInterpToSpeed; // 0x8
    float ProtagonistNoMashInterpToZero; // 0xc
    float ProtagonistAttackSpeed; // 0x10
    float ProtagonistWinConditionPct; // 0x14
}; // Size: 0x18
#pragma pack(pop)
