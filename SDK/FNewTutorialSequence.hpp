#pragma once
#include <cstdint>
#include "ETutorialPersistence.hpp"
#include "FNewTutorialInfo.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FNewTutorialSequence : public FTableRowBase {
    FName TutorialName; // 0x8
    ETutorialPersistence Persistence; // 0x10
    bool WaitForNotificationsToClear; // 0x11
    bool MissionBannerNotification; // 0x12
    bool LevelUpNotification; // 0x13
    bool MissionStepNotification; // 0x14
    bool OwlMailNotification; // 0x15
    bool KnowledgeNotification; // 0x16
    bool XPNotification; // 0x17
    bool SpellNotification; // 0x18
    bool ConversationActive; // 0x19
    bool VendorScreenActive; // 0x1a
    bool FieldGuideToastActive; // 0x1b
    bool ShouldKeepCheckingForExitCondition; // 0x1c
    char pad_1d[0x3];
    TArray<FName> HermesMessagesOnTutorialStart; // 0x20
    TArray<FNewTutorialInfo> TutorialSequence; // 0x30
    TArray<FName> HermesMessagesOnTutorialCompletion; // 0x40
    TArray<FName> KnowledgeCategories; // 0x50
    TArray<FName> KnowledgeUnlocks; // 0x60
    bool CanReplayTutorial; // 0x70
    char pad_71[0x7];
}; // Size: 0x78
#pragma pack(pop)
