#pragma once
#include <cstdint>
#include "FAnimatedCreditEntry.hpp"
#include "FCreditEntry.hpp"
#include "UScreen.hpp"
class UCanvasPanel;
class UPhoenixCreditEntryWidget;
#pragma pack(push, 1)
class UPhoenixCreditsScreen : public UScreen {
public:
    char pad_370[0x28];
    float RollAnimationDuration; // 0x398
    float TimeBetweenEntries; // 0x39c
    UCanvasPanel* CreditsCanvasPanel; // 0x3a0
    TArray<FCreditEntry> AllCreditEntries; // 0x3a8
    TArray<FAnimatedCreditEntry> AnimatedCreditEntries; // 0x3b8
    bool DataTableLoaded; // 0x3c8
    bool CreditsRolling; // 0x3c9
    bool LastEntryReached; // 0x3ca
    char pad_3cb[0x1];
    float DurationMultiplier; // 0x3cc
    int32_t CreditsEntryCounter; // 0x3d0
    float TotalRollTime; // 0x3d4
    float TimeToNextEntry; // 0x3d8
    char pad_3dc[0x4];
    static UPhoenixCreditsScreen* StaticClass();
    void StartRollingCredits();
    UPhoenixCreditEntryWidget* CreateCreditEntry(FCreditEntry CreditEntry);
}; // Size: 0x3e0
#pragma pack(pop)
