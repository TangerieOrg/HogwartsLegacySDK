#pragma once
#include <cstdint>
#include "EGameplayMechanics.hpp"
#include "ETutorialPosition.hpp"
#include "ETutorialTransparency.hpp"
#include "EUMGInputAction.hpp"
#include "FInputContextWithType.hpp"
#include "FLegendItemData.hpp"
#include "FName_GameLogicVarInt32.hpp"
#include "FSoftObjectPath.hpp"
#include "FTutorialLayoutData.hpp"
#pragma pack(push, 1)
struct FNewTutorialInfo {
    FName Alias; // 0x0
    FString Title; // 0x8
    FString Body; // 0x18
    FString BodyPC; // 0x28
    TArray<FString> RuntimeText; // 0x38
    bool ShouldShowCursor; // 0x48
    bool ShouldHideCursorOnRemove; // 0x49
    bool PlaySoundEffectOnCompletion; // 0x4a
    bool Modal; // 0x4b
    ETutorialTransparency TransparencyType; // 0x4c
    char pad_4d[0x3];
    FString ImageName; // 0x50
    TArray<FLegendItemData> LegendItems; // 0x60
    bool PausesTheGame; // 0x70
    bool ApplyBlur; // 0x71
    char pad_72[0x2];
    float ExpiryTimer; // 0x74
    bool ExpiryTimerStartsAutomatically; // 0x78
    bool ForceCompleteOnExpiry; // 0x79
    bool AllowNonModalInput; // 0x7a
    char pad_7b[0x1];
    float TimeDilationFactor; // 0x7c
    TArray<EGameplayMechanics> ExclusiveMechanics; // 0x80
    ETutorialPosition Position; // 0x90
    char pad_91[0x3];
    FTutorialLayoutData PositionData; // 0x94
    float PreDelay; // 0xa4
    float PostDelay; // 0xa8
    FName WaitOnHermesMessage; // 0xac
    EUMGInputAction CompletionButton; // 0xb4
    bool MustHoldCompletionButton; // 0xb5
    bool VisibleOverMenu; // 0xb6
    bool OpenPauseMenuOnComplete; // 0xb7
    FName PauseMenuPage; // 0xb8
    bool PauseMenuLockToPage; // 0xc0
    char pad_c1[0x7];
    TArray<FName> HermesMessagesOnStepCompletion; // 0xc8
    TArray<FInputContextWithType> ContextOverrides; // 0xd8
    TArray<FName_GameLogicVarInt32> GameVarOverrides; // 0xe8
    FSoftObjectPath Video; // 0xf8
}; // Size: 0x110
#pragma pack(pop)
