#pragma once
#include <cstdint>
#include "EInteractiveState.hpp"
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UAnalyticsManager : public UObject {
public:
    char pad_28[0x210];
    static UAnalyticsManager* StaticClass();
    static void SetUsingFloo(bool UsingFloo);
    static void SetSaveSlot(int32_t SaveSlot);
    static void SetNaturalPlaythrough(bool bNatural);
    void OnSaveGameLoaded();
    static void HeartbeatUpdateMountState(FString MountType);
    static void HandleSphinxPuzzle(FString Name, FString Type, EInteractiveState InteractiveState);
    static void HandleSpellFunnel(bool Conjuration, int32_t StepNumber, FString FunnelAction, FString Selection, FString Transformation, FString Color, FString SelectionID);
    static void HandleResourceFlow(FString Resource, float ChangeAmount, float FinalAmount, FString Source, FString SourceDetail, FString ResourceFlowID, FString ResourceCategory);
    static void HandlePuzzle(FString PuzzleName, bool Start, FString PuzzleType);
    static void HandlePlayerAvatarUpdate(FString PresetType, FString PresetValue);
    static void HandleOptionSet(FString OptionName, FString OptionType, FString StringValue, bool BoolValue, float FloatValue);
    static void HandleNPCAction(FString NPCID, FString Action, FString ActionDetail, FString ConversationID, FString DialogueText, int32_t ChoiceNum, int32_t NumChoices);
    static void HandleMenuItemSelect(FName menuItemName, FString selectAction);
    static void HandleMenuAction(FString MenuName, FString Action, FString Selection, FString SelectionDetail, bool LockedToPage);
    static void HandleInteraction(AActor* Target);
    static void HandleFirstTimeLaunch();
    static void HandleConversationChoice(FString DialogueID, int32_t ChoiceNum, int32_t NumChoices);
    FString GetCharacterID();
    static UAnalyticsManager* Get();
    static void AnalyticsEventAction(FString ActionName, FString SubactionName, bool ActionResult, FString ResultExplained, FString ActionDetail);
}; // Size: 0x238
#pragma pack(pop)
