#pragma once
#include <cstdint>
#include "EUMGInputAction.hpp"
#pragma pack(push, 1)
struct FMastermindTutorialInfo {
    bool bIsPlayingIntro; // 0x0
    bool bIsPlayingOutro; // 0x1
    char pad_2[0x2];
    FName TutorialName; // 0x4
    FName TutorialStepAlias; // 0xc
    bool bIsModal; // 0x14
    bool bExpectsInput; // 0x15
    EUMGInputAction CompletionButton; // 0x16
    bool MustHoldCompletionButton; // 0x17
    char pad_18[0x50];
}; // Size: 0x68
#pragma pack(pop)
