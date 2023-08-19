#include "AActor.hpp"
#include "EInteractiveState.hpp"
#include "UAnalyticsManager.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UAnalyticsManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
UAnalyticsManager* UAnalyticsManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnalyticsManager");
    return (UAnalyticsManager*)res;
}
void UAnalyticsManager::SetUsingFloo(bool UsingFloo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.SetUsingFloo"));
    struct Params_SetUsingFloo {
        bool UsingFloo; // 0x0
    }; // Size: 0x1
    Params_SetUsingFloo params{};
    params.UsingFloo = (bool)UsingFloo;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsManager::SetSaveSlot(int32_t SaveSlot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.SetSaveSlot"));
    struct Params_SetSaveSlot {
        int32_t SaveSlot; // 0x0
    }; // Size: 0x4
    Params_SetSaveSlot params{};
    params.SaveSlot = (int32_t)SaveSlot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FString UAnalyticsManager::GetCharacterID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.GetCharacterID"));
    struct Params_GetCharacterID {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCharacterID params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UAnalyticsManager::HandleSphinxPuzzle(FString Name, FString Type, EInteractiveState InteractiveState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.HandleSphinxPuzzle"));
    struct Params_HandleSphinxPuzzle {
        FString Name; // 0x0
        FString Type; // 0x10
        EInteractiveState InteractiveState; // 0x20
    }; // Size: 0x21
    Params_HandleSphinxPuzzle params{};
    params.Name = (FString)Name;
    params.Type = (FString)Type;
    params.InteractiveState = (EInteractiveState)InteractiveState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsManager::SetNaturalPlaythrough(bool bNatural) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.SetNaturalPlaythrough"));
    struct Params_SetNaturalPlaythrough {
        bool bNatural; // 0x0
    }; // Size: 0x1
    Params_SetNaturalPlaythrough params{};
    params.bNatural = (bool)bNatural;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsManager::AnalyticsEventAction(FString ActionName, FString SubactionName, bool ActionResult, FString ResultExplained, FString ActionDetail) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.AnalyticsEventAction"));
    struct Params_AnalyticsEventAction {
        FString ActionName; // 0x0
        FString SubactionName; // 0x10
        bool ActionResult; // 0x20
        char pad_21[0x7];
        FString ResultExplained; // 0x28
        FString ActionDetail; // 0x38
    }; // Size: 0x48
    Params_AnalyticsEventAction params{};
    params.ActionName = (FString)ActionName;
    params.SubactionName = (FString)SubactionName;
    params.ActionResult = (bool)ActionResult;
    params.ResultExplained = (FString)ResultExplained;
    params.ActionDetail = (FString)ActionDetail;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsManager::HandleSpellFunnel(bool Conjuration, int32_t StepNumber, FString FunnelAction, FString Selection, FString Transformation, FString Color, FString SelectionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.HandleSpellFunnel"));
    struct Params_HandleSpellFunnel {
        bool Conjuration; // 0x0
        char pad_1[0x3];
        int32_t StepNumber; // 0x4
        FString FunnelAction; // 0x8
        FString Selection; // 0x18
        FString Transformation; // 0x28
        FString Color; // 0x38
        FString SelectionID; // 0x48
    }; // Size: 0x58
    Params_HandleSpellFunnel params{};
    params.Conjuration = (bool)Conjuration;
    params.StepNumber = (int32_t)StepNumber;
    params.FunnelAction = (FString)FunnelAction;
    params.Selection = (FString)Selection;
    params.Transformation = (FString)Transformation;
    params.Color = (FString)Color;
    params.SelectionID = (FString)SelectionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsManager::HeartbeatUpdateMountState(FString MountType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.HeartbeatUpdateMountState"));
    struct Params_HeartbeatUpdateMountState {
        FString MountType; // 0x0
    }; // Size: 0x10
    Params_HeartbeatUpdateMountState params{};
    params.MountType = (FString)MountType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsManager::HandleMenuItemSelect(FName menuItemName, FString selectAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.HandleMenuItemSelect"));
    struct Params_HandleMenuItemSelect {
        FName menuItemName; // 0x0
        FString selectAction; // 0x8
    }; // Size: 0x18
    Params_HandleMenuItemSelect params{};
    params.menuItemName = (FName)menuItemName;
    params.selectAction = (FString)selectAction;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsManager::HandleResourceFlow(FString Resource, float ChangeAmount, float FinalAmount, FString Source, FString SourceDetail, FString ResourceFlowID, FString ResourceCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.HandleResourceFlow"));
    struct Params_HandleResourceFlow {
        FString Resource; // 0x0
        float ChangeAmount; // 0x10
        float FinalAmount; // 0x14
        FString Source; // 0x18
        FString SourceDetail; // 0x28
        FString ResourceFlowID; // 0x38
        FString ResourceCategory; // 0x48
    }; // Size: 0x58
    Params_HandleResourceFlow params{};
    params.Resource = (FString)Resource;
    params.ChangeAmount = (float)ChangeAmount;
    params.FinalAmount = (float)FinalAmount;
    params.Source = (FString)Source;
    params.SourceDetail = (FString)SourceDetail;
    params.ResourceFlowID = (FString)ResourceFlowID;
    params.ResourceCategory = (FString)ResourceCategory;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsManager::HandlePuzzle(FString PuzzleName, bool Start, FString PuzzleType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.HandlePuzzle"));
    struct Params_HandlePuzzle {
        FString PuzzleName; // 0x0
        bool Start; // 0x10
        char pad_11[0x7];
        FString PuzzleType; // 0x18
    }; // Size: 0x28
    Params_HandlePuzzle params{};
    params.PuzzleName = (FString)PuzzleName;
    params.Start = (bool)Start;
    params.PuzzleType = (FString)PuzzleType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsManager::HandlePlayerAvatarUpdate(FString PresetType, FString PresetValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.HandlePlayerAvatarUpdate"));
    struct Params_HandlePlayerAvatarUpdate {
        FString PresetType; // 0x0
        FString PresetValue; // 0x10
    }; // Size: 0x20
    Params_HandlePlayerAvatarUpdate params{};
    params.PresetType = (FString)PresetType;
    params.PresetValue = (FString)PresetValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsManager::HandleOptionSet(FString OptionName, FString OptionType, FString StringValue, bool BoolValue, float FloatValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.HandleOptionSet"));
    struct Params_HandleOptionSet {
        FString OptionName; // 0x0
        FString OptionType; // 0x10
        FString StringValue; // 0x20
        bool BoolValue; // 0x30
        char pad_31[0x3];
        float FloatValue; // 0x34
    }; // Size: 0x38
    Params_HandleOptionSet params{};
    params.OptionName = (FString)OptionName;
    params.OptionType = (FString)OptionType;
    params.StringValue = (FString)StringValue;
    params.BoolValue = (bool)BoolValue;
    params.FloatValue = (float)FloatValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsManager::HandleNPCAction(FString NPCID, FString Action, FString ActionDetail, FString ConversationID, FString DialogueText, int32_t ChoiceNum, int32_t NumChoices) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.HandleNPCAction"));
    struct Params_HandleNPCAction {
        FString NPCID; // 0x0
        FString Action; // 0x10
        FString ActionDetail; // 0x20
        FString ConversationID; // 0x30
        FString DialogueText; // 0x40
        int32_t ChoiceNum; // 0x50
        int32_t NumChoices; // 0x54
    }; // Size: 0x58
    Params_HandleNPCAction params{};
    params.NPCID = (FString)NPCID;
    params.Action = (FString)Action;
    params.ActionDetail = (FString)ActionDetail;
    params.ConversationID = (FString)ConversationID;
    params.DialogueText = (FString)DialogueText;
    params.ChoiceNum = (int32_t)ChoiceNum;
    params.NumChoices = (int32_t)NumChoices;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsManager::HandleMenuAction(FString MenuName, FString Action, FString Selection, FString SelectionDetail, bool LockedToPage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.HandleMenuAction"));
    struct Params_HandleMenuAction {
        FString MenuName; // 0x0
        FString Action; // 0x10
        FString Selection; // 0x20
        FString SelectionDetail; // 0x30
        bool LockedToPage; // 0x40
    }; // Size: 0x41
    Params_HandleMenuAction params{};
    params.MenuName = (FString)MenuName;
    params.Action = (FString)Action;
    params.Selection = (FString)Selection;
    params.SelectionDetail = (FString)SelectionDetail;
    params.LockedToPage = (bool)LockedToPage;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsManager::HandleInteraction(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.HandleInteraction"));
    struct Params_HandleInteraction {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_HandleInteraction params{};
    params.Target = (AActor*)Target;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsManager::HandleFirstTimeLaunch() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.HandleFirstTimeLaunch"));
    struct Params_HandleFirstTimeLaunch {
    }; // Size: 0x0
    Params_HandleFirstTimeLaunch params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAnalyticsManager::HandleConversationChoice(FString DialogueID, int32_t ChoiceNum, int32_t NumChoices) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.HandleConversationChoice"));
    struct Params_HandleConversationChoice {
        FString DialogueID; // 0x0
        int32_t ChoiceNum; // 0x10
        int32_t NumChoices; // 0x14
    }; // Size: 0x18
    Params_HandleConversationChoice params{};
    params.DialogueID = (FString)DialogueID;
    params.ChoiceNum = (int32_t)ChoiceNum;
    params.NumChoices = (int32_t)NumChoices;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UAnalyticsManager* UAnalyticsManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AnalyticsManager.Get"));
    struct Params_Get {
        UAnalyticsManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAnalyticsManager*)params.ReturnValue;
}
