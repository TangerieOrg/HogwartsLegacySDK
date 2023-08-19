#pragma once
#include <cstdint>
#include "UScreen.hpp"
#pragma pack(push, 1)
class UCombatChallengeResultsBase : public UScreen {
public:
    FString TitleText; // 0x370
    bool ResultIsAVictory; // 0x380
    char pad_381[0x7];
    static UCombatChallengeResultsBase* StaticClass();
    void ShowResultsScreen();
    void RestartRequested();
    void RestartFromDeath();
    void OnPostGameSave();
    void ExitRequested();
}; // Size: 0x388
#pragma pack(pop)
