#include "AActor.hpp"
#include "APawn.hpp"
#include "APhoenixPathActor.hpp"
#include "APlayerController.hpp"
#include "EDisciplineType.hpp"
#include "EFactsheetButtonState.hpp"
#include "EFieldGuideExitReasons.hpp"
#include "EGamepadType.hpp"
#include "EGenderEnum.hpp"
#include "EInputDeviceUsed.hpp"
#include "EPauseMenuPage.hpp"
#include "ETutorialPosition.hpp"
#include "EUIDisplayMode.hpp"
#include "EUIFactsheetMode.hpp"
#include "EUIGameOverReason.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "EUIPopupPriority.hpp"
#include "EWidgetType.hpp"
#include "FColor.hpp"
#include "FInputActionHoldInfo.hpp"
#include "FInputActionKeyMapping.hpp"
#include "FInputAxisKeyMapping.hpp"
#include "FInputGroupHeader.hpp"
#include "FKey.hpp"
#include "FLegendItemData.hpp"
#include "FLinearColor.hpp"
#include "FMastermindPopupInfo.hpp"
#include "FMastermindScreenInfo.hpp"
#include "FMastermindTutorialInfo.hpp"
#include "FMenuReaderVoice.hpp"
#include "FRPGUIInfo.hpp"
#include "FTimespan.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "HouseIds.hpp"
#include "UBeaconInfo.hpp"
#include "UClass.hpp"
#include "UDataTable.hpp"
#include "UFieldGuideMenu.hpp"
#include "UFunction.hpp"
#include "UInGameMenuScreen.hpp"
#include "UMapDungeon.hpp"
#include "UMapHogsmeade.hpp"
#include "UMapHogwarts.hpp"
#include "UMapOverland.hpp"
#include "UMapSubSystem.hpp"
#include "UMenuCursorWidget.hpp"
#include "UMissionFailScreenBase.hpp"
#include "UObject.hpp"
#include "UPhoenixNotificationManager.hpp"
#include "UPopupScreen.hpp"
#include "UScreen.hpp"
#include "UScreenFadeWidget.hpp"
#include "UTexture2D.hpp"
#include "UTutorialSystem.hpp"
#include "UUIInputManager.hpp"
#include "UUIManager.hpp"
#include "UUserWidget.hpp"
#include "UWorld.hpp"
#include "UWorldSupportLevel.hpp"
#include "UWorldSupportWorld.hpp"
UUIManager* UUIManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UIManager");
    return (UUIManager*)res;
}
bool UUIManager::SetPlayerChosenWandInfo(FString WandStyle, FString WandWood, FString WandCore, FString WandLength, FString WandFlex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetPlayerChosenWandInfo"));
    struct Params_SetPlayerChosenWandInfo {
        FString WandStyle; // 0x0
        FString WandWood; // 0x10
        FString WandCore; // 0x20
        FString WandLength; // 0x30
        FString WandFlex; // 0x40
        bool ReturnValue; // 0x50
    }; // Size: 0x51
    Params_SetPlayerChosenWandInfo params{};
    params.WandStyle = (FString)WandStyle;
    params.WandWood = (FString)WandWood;
    params.WandCore = (FString)WandCore;
    params.WandLength = (FString)WandLength;
    params.WandFlex = (FString)WandFlex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::ShowPathSelectionCancelled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ShowPathSelectionCancelled"));
    struct Params_ShowPathSelectionCancelled {
    }; // Size: 0x0
    Params_ShowPathSelectionCancelled params{};
    ProcessEvent(func, &params);
}
void UUIManager::GetPlayerFirstAndLastName(FString& PlayerFirstName, FString& PlayerLastName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetPlayerFirstAndLastName"));
    struct Params_GetPlayerFirstAndLastName {
        FString PlayerFirstName; // 0x0
        FString PlayerLastName; // 0x10
    }; // Size: 0x20
    Params_GetPlayerFirstAndLastName params{};
    params.PlayerFirstName = (FString)PlayerFirstName;
    params.PlayerLastName = (FString)PlayerLastName;
    ProcessEvent(func, &params);
    PlayerFirstName = params.PlayerFirstName;
    PlayerLastName = params.PlayerLastName;
}
void UUIManager::WidgetClassLoaded(UUserWidget* Widget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.WidgetClassLoaded"));
    struct Params_WidgetClassLoaded {
        UUserWidget* Widget; // 0x0
    }; // Size: 0x8
    Params_WidgetClassLoaded params{};
    params.Widget = (UUserWidget*)Widget;
    ProcessEvent(func, &params);
}
void UUIManager::ShowRoadsInWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ShowRoadsInWorld"));
    struct Params_ShowRoadsInWorld {
    }; // Size: 0x0
    Params_ShowRoadsInWorld params{};
    ProcessEvent(func, &params);
}
void UUIManager::StartCompanionWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.StartCompanionWorld"));
    struct Params_StartCompanionWorld {
    }; // Size: 0x0
    Params_StartCompanionWorld params{};
    ProcessEvent(func, &params);
}
bool UUIManager::UpdateFSKnownItemsDetailMap(FString FactItem, FString FactAttribute, EFactsheetButtonState FactState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.UpdateFSKnownItemsDetailMap"));
    struct Params_UpdateFSKnownItemsDetailMap {
        FString FactItem; // 0x0
        FString FactAttribute; // 0x10
        EFactsheetButtonState FactState; // 0x20
        bool ReturnValue; // 0x21
    }; // Size: 0x22
    Params_UpdateFSKnownItemsDetailMap params{};
    params.FactItem = (FString)FactItem;
    params.FactAttribute = (FString)FactAttribute;
    params.FactState = (EFactsheetButtonState)FactState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::UITriggerLevelLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.UITriggerLevelLoad"));
    struct Params_UITriggerLevelLoad {
    }; // Size: 0x0
    Params_UITriggerLevelLoad params{};
    ProcessEvent(func, &params);
}
void UUIManager::DebugTriggerCollectionObtainedNotification(FName CollectionID, FName CollectionCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.DebugTriggerCollectionObtainedNotification"));
    struct Params_DebugTriggerCollectionObtainedNotification {
        FName CollectionID; // 0x0
        FName CollectionCategory; // 0x8
    }; // Size: 0x10
    Params_DebugTriggerCollectionObtainedNotification params{};
    params.CollectionID = (FName)CollectionID;
    params.CollectionCategory = (FName)CollectionCategory;
    ProcessEvent(func, &params);
}
FMenuReaderVoice UUIManager::ValidateMenuReaderVoice(FMenuReaderVoice InVoice) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ValidateMenuReaderVoice"));
    struct Params_ValidateMenuReaderVoice {
        FMenuReaderVoice InVoice; // 0x0
        FMenuReaderVoice ReturnValue; // 0x30
    }; // Size: 0x60
    Params_ValidateMenuReaderVoice params{};
    params.InVoice = (FMenuReaderVoice)InVoice;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMenuReaderVoice)params.ReturnValue;
}
void UUIManager::UseHoverDrone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.UseHoverDrone"));
    struct Params_UseHoverDrone {
    }; // Size: 0x0
    Params_UseHoverDrone params{};
    ProcessEvent(func, &params);
}
TArray<FName> UUIManager::GetGroupMappingNames(FName GroupName, bool bAction, bool bAxis, bool bSort) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetGroupMappingNames"));
    struct Params_GetGroupMappingNames {
        FName GroupName; // 0x0
        bool bAction; // 0x8
        bool bAxis; // 0x9
        bool bSort; // 0xa
        char pad_b[0x5];
        TArray<FName> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetGroupMappingNames params{};
    params.GroupName = (FName)GroupName;
    params.bAction = (bool)bAction;
    params.bAxis = (bool)bAxis;
    params.bSort = (bool)bSort;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
bool UUIManager::GetIsInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetIsInitialized"));
    struct Params_GetIsInitialized {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsInitialized params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::UpdateHintGameLogic(FName GameLogicVar, bool SetOn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.UpdateHintGameLogic"));
    struct Params_UpdateHintGameLogic {
        FName GameLogicVar; // 0x0
        bool SetOn; // 0x8
    }; // Size: 0x9
    Params_UpdateHintGameLogic params{};
    params.GameLogicVar = (FName)GameLogicVar;
    params.SetOn = (bool)SetOn;
    ProcessEvent(func, &params);
}
bool UUIManager::GetMastermindScreenInfo(FMastermindScreenInfo& outMastermindScreenInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetMastermindScreenInfo"));
    struct Params_GetMastermindScreenInfo {
        FMastermindScreenInfo outMastermindScreenInfo; // 0x0
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_GetMastermindScreenInfo params{};
    params.outMastermindScreenInfo = (FMastermindScreenInfo)outMastermindScreenInfo;
    ProcessEvent(func, &params);
    outMastermindScreenInfo = params.outMastermindScreenInfo;
    return (bool)params.ReturnValue;
}
void UUIManager::SetInMenuTransition(bool pInMenuTransition, FString pContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetInMenuTransition"));
    struct Params_SetInMenuTransition {
        bool pInMenuTransition; // 0x0
        char pad_1[0x7];
        FString pContext; // 0x8
    }; // Size: 0x18
    Params_SetInMenuTransition params{};
    params.pInMenuTransition = (bool)pInMenuTransition;
    params.pContext = (FString)pContext;
    ProcessEvent(func, &params);
}
bool UUIManager::SetMKBAction(FInputActionKeyMapping& InActionMapping, bool bIsPrimary, bool bForceRebuildKeymaps, bool bTranspose) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetMKBAction"));
    struct Params_SetMKBAction {
        FInputActionKeyMapping InActionMapping; // 0x0
        bool bIsPrimary; // 0x38
        bool bForceRebuildKeymaps; // 0x39
        bool bTranspose; // 0x3a
        bool ReturnValue; // 0x3b
    }; // Size: 0x3c
    Params_SetMKBAction params{};
    params.InActionMapping = (FInputActionKeyMapping)InActionMapping;
    params.bIsPrimary = (bool)bIsPrimary;
    params.bForceRebuildKeymaps = (bool)bForceRebuildKeymaps;
    params.bTranspose = (bool)bTranspose;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InActionMapping = params.InActionMapping;
    return (bool)params.ReturnValue;
}
void UUIManager::ShowPathSelectionReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ShowPathSelectionReleased"));
    struct Params_ShowPathSelectionReleased {
    }; // Size: 0x0
    Params_ShowPathSelectionReleased params{};
    ProcessEvent(func, &params);
}
void UUIManager::UIManager_ToggleShowCurentLevelName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.UIManager_ToggleShowCurentLevelName"));
    struct Params_UIManager_ToggleShowCurentLevelName {
    }; // Size: 0x0
    Params_UIManager_ToggleShowCurentLevelName params{};
    ProcessEvent(func, &params);
}
void UUIManager::UpdateAllFastTravelLocations() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.UpdateAllFastTravelLocations"));
    struct Params_UpdateAllFastTravelLocations {
    }; // Size: 0x0
    Params_UpdateAllFastTravelLocations params{};
    ProcessEvent(func, &params);
}
void UUIManager::SetPlayerPawn(APawn* Pawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetPlayerPawn"));
    struct Params_SetPlayerPawn {
        APawn* Pawn; // 0x0
    }; // Size: 0x8
    Params_SetPlayerPawn params{};
    params.Pawn = (APawn*)Pawn;
    ProcessEvent(func, &params);
}
void UUIManager::UnpauseLocationNameUI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.UnpauseLocationNameUI"));
    struct Params_UnpauseLocationNameUI {
    }; // Size: 0x0
    Params_UnpauseLocationNameUI params{};
    ProcessEvent(func, &params);
}
void UUIManager::UnlockAllPauseMenuTabs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.UnlockAllPauseMenuTabs"));
    struct Params_UnlockAllPauseMenuTabs {
    }; // Size: 0x0
    Params_UnlockAllPauseMenuTabs params{};
    ProcessEvent(func, &params);
}
bool UUIManager::SetPlayerHouseEnum(HouseIds House) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetPlayerHouseEnum"));
    struct Params_SetPlayerHouseEnum {
        HouseIds House; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetPlayerHouseEnum params{};
    params.House = (HouseIds)House;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::GetMKBAxisPairsByName(FName& AxisName, FInputAxisKeyMapping& OutPositivePrimary, FInputAxisKeyMapping& OutPositiveAlternative, FInputAxisKeyMapping& OutNegativePrimary, FInputAxisKeyMapping& OutNegativeAlternative, bool bTranspose) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetMKBAxisPairsByName"));
    struct Params_GetMKBAxisPairsByName {
        FName AxisName; // 0x0
        FInputAxisKeyMapping OutPositivePrimary; // 0x8
        FInputAxisKeyMapping OutPositiveAlternative; // 0x40
        FInputAxisKeyMapping OutNegativePrimary; // 0x78
        FInputAxisKeyMapping OutNegativeAlternative; // 0xb0
        bool bTranspose; // 0xe8
        bool ReturnValue; // 0xe9
    }; // Size: 0xea
    Params_GetMKBAxisPairsByName params{};
    params.AxisName = (FName)AxisName;
    params.OutPositivePrimary = (FInputAxisKeyMapping)OutPositivePrimary;
    params.OutPositiveAlternative = (FInputAxisKeyMapping)OutPositiveAlternative;
    params.OutNegativePrimary = (FInputAxisKeyMapping)OutNegativePrimary;
    params.OutNegativeAlternative = (FInputAxisKeyMapping)OutNegativeAlternative;
    params.bTranspose = (bool)bTranspose;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPositiveAlternative = params.OutPositiveAlternative;
    AxisName = params.AxisName;
    OutNegativePrimary = params.OutNegativePrimary;
    OutPositivePrimary = params.OutPositivePrimary;
    OutNegativeAlternative = params.OutNegativeAlternative;
    return (bool)params.ReturnValue;
}
void UUIManager::UIBuildNavMeshData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.UIBuildNavMeshData"));
    struct Params_UIBuildNavMeshData {
    }; // Size: 0x0
    Params_UIBuildNavMeshData params{};
    ProcessEvent(func, &params);
}
void UUIManager::ClearPath() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ClearPath"));
    struct Params_ClearPath {
    }; // Size: 0x0
    Params_ClearPath params{};
    ProcessEvent(func, &params);
}
void UUIManager::UnloadFieldGuideScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.UnloadFieldGuideScreen"));
    struct Params_UnloadFieldGuideScreen {
    }; // Size: 0x0
    Params_UnloadFieldGuideScreen params{};
    ProcessEvent(func, &params);
}
bool UUIManager::SetMenuReaderEnabled(bool bEnabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetMenuReaderEnabled"));
    struct Params_SetMenuReaderEnabled {
        bool bEnabled; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_SetMenuReaderEnabled params{};
    params.bEnabled = (bool)bEnabled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::UnbindMKBAxis(FInputAxisKeyMapping& InAxisMapping, bool bForceRebuildKeymaps, bool bTranspose) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.UnbindMKBAxis"));
    struct Params_UnbindMKBAxis {
        FInputAxisKeyMapping InAxisMapping; // 0x0
        bool bForceRebuildKeymaps; // 0x38
        bool bTranspose; // 0x39
        bool ReturnValue; // 0x3a
    }; // Size: 0x3b
    Params_UnbindMKBAxis params{};
    params.InAxisMapping = (FInputAxisKeyMapping)InAxisMapping;
    params.bForceRebuildKeymaps = (bool)bForceRebuildKeymaps;
    params.bTranspose = (bool)bTranspose;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAxisMapping = params.InAxisMapping;
    return (bool)params.ReturnValue;
}
void UUIManager::StopCompanionWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.StopCompanionWorld"));
    struct Params_StopCompanionWorld {
    }; // Size: 0x0
    Params_StopCompanionWorld params{};
    ProcessEvent(func, &params);
}
bool UUIManager::UnbindMKBAction(FInputActionKeyMapping& InActionMapping, bool bForceRebuildKeymaps, bool bTranspose) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.UnbindMKBAction"));
    struct Params_UnbindMKBAction {
        FInputActionKeyMapping InActionMapping; // 0x0
        bool bForceRebuildKeymaps; // 0x38
        bool bTranspose; // 0x39
        bool ReturnValue; // 0x3a
    }; // Size: 0x3b
    Params_UnbindMKBAction params{};
    params.InActionMapping = (FInputActionKeyMapping)InActionMapping;
    params.bForceRebuildKeymaps = (bool)bForceRebuildKeymaps;
    params.bTranspose = (bool)bTranspose;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InActionMapping = params.InActionMapping;
    return (bool)params.ReturnValue;
}
bool UUIManager::SetLocatorBeaconUsingDBLocation(FString LocationID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetLocatorBeaconUsingDBLocation"));
    struct Params_SetLocatorBeaconUsingDBLocation {
        FString LocationID; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetLocatorBeaconUsingDBLocation params{};
    params.LocationID = (FString)LocationID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::TriggerGamepadTextInput() {}
void UUIManager::TriggerFadeOut() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.TriggerFadeOut"));
    struct Params_TriggerFadeOut {
    }; // Size: 0x0
    Params_TriggerFadeOut params{};
    ProcessEvent(func, &params);
}
void UUIManager::ShowVirtualCursor(APlayerController* Controller, bool Enable, FVector2D Position, FString Context) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ShowVirtualCursor"));
    struct Params_ShowVirtualCursor {
        APlayerController* Controller; // 0x0
        bool Enable; // 0x8
        char pad_9[0x3];
        FVector2D Position; // 0xc
        char pad_14[0x4];
        FString Context; // 0x18
    }; // Size: 0x28
    Params_ShowVirtualCursor params{};
    params.Controller = (APlayerController*)Controller;
    params.Enable = (bool)Enable;
    params.Position = (FVector2D)Position;
    params.Context = (FString)Context;
    ProcessEvent(func, &params);
}
void UUIManager::TriggerFadeIn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.TriggerFadeIn"));
    struct Params_TriggerFadeIn {
    }; // Size: 0x0
    Params_TriggerFadeIn params{};
    ProcessEvent(func, &params);
}
void UUIManager::ShowPathInWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ShowPathInWorld"));
    struct Params_ShowPathInWorld {
    }; // Size: 0x0
    Params_ShowPathInWorld params{};
    ProcessEvent(func, &params);
}
TArray<FInputAxisKeyMapping> UUIManager::TransposeAxisToQWERTY(TArray<FInputAxisKeyMapping>& AxisMappings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.TransposeAxisToQWERTY"));
    struct Params_TransposeAxisToQWERTY {
        TArray<FInputAxisKeyMapping> AxisMappings; // 0x0
        TArray<FInputAxisKeyMapping> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_TransposeAxisToQWERTY params{};
    params.AxisMappings = (TArray<FInputAxisKeyMapping>)AxisMappings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    AxisMappings = params.AxisMappings;
    return (TArray<FInputAxisKeyMapping>)params.ReturnValue;
}
bool UUIManager::SetMenuReaderVolume(float InVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetMenuReaderVolume"));
    struct Params_SetMenuReaderVolume {
        float InVolume; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_SetMenuReaderVolume params{};
    params.InVolume = (float)InVolume;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMapHogsmeade* UUIManager::GetHogsmeadeMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetHogsmeadeMap"));
    struct Params_GetHogsmeadeMap {
        UMapHogsmeade* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHogsmeadeMap params{};
    ProcessEvent(func, &params);
    return (UMapHogsmeade*)params.ReturnValue;
}
TArray<FInputAxisKeyMapping> UUIManager::TransposeAxisFromQWERTY(TArray<FInputAxisKeyMapping>& AxisMappings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.TransposeAxisFromQWERTY"));
    struct Params_TransposeAxisFromQWERTY {
        TArray<FInputAxisKeyMapping> AxisMappings; // 0x0
        TArray<FInputAxisKeyMapping> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_TransposeAxisFromQWERTY params{};
    params.AxisMappings = (TArray<FInputAxisKeyMapping>)AxisMappings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    AxisMappings = params.AxisMappings;
    return (TArray<FInputAxisKeyMapping>)params.ReturnValue;
}
bool UUIManager::GetPlayerChosenWandInfo(FString& WandStyle, FString& WandWood, FString& WandCore, FString& WandLength, FString& WandFlex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetPlayerChosenWandInfo"));
    struct Params_GetPlayerChosenWandInfo {
        FString WandStyle; // 0x0
        FString WandWood; // 0x10
        FString WandCore; // 0x20
        FString WandLength; // 0x30
        FString WandFlex; // 0x40
        bool ReturnValue; // 0x50
    }; // Size: 0x51
    Params_GetPlayerChosenWandInfo params{};
    params.WandStyle = (FString)WandStyle;
    params.WandWood = (FString)WandWood;
    params.WandCore = (FString)WandCore;
    params.WandLength = (FString)WandLength;
    params.WandFlex = (FString)WandFlex;
    ProcessEvent(func, &params);
    WandFlex = params.WandFlex;
    WandWood = params.WandWood;
    WandStyle = params.WandStyle;
    WandCore = params.WandCore;
    WandLength = params.WandLength;
    return (bool)params.ReturnValue;
}
void UUIManager::StopVendorWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.StopVendorWorld"));
    struct Params_StopVendorWorld {
    }; // Size: 0x0
    Params_StopVendorWorld params{};
    ProcessEvent(func, &params);
}
TArray<FInputActionKeyMapping> UUIManager::TransposeActionToQWERTY(TArray<FInputActionKeyMapping>& ActionMappings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.TransposeActionToQWERTY"));
    struct Params_TransposeActionToQWERTY {
        TArray<FInputActionKeyMapping> ActionMappings; // 0x0
        TArray<FInputActionKeyMapping> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_TransposeActionToQWERTY params{};
    params.ActionMappings = (TArray<FInputActionKeyMapping>)ActionMappings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActionMappings = params.ActionMappings;
    return (TArray<FInputActionKeyMapping>)params.ReturnValue;
}
TArray<FInputActionKeyMapping> UUIManager::TransposeActionFromQWERTY(TArray<FInputActionKeyMapping>& ActionMappings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.TransposeActionFromQWERTY"));
    struct Params_TransposeActionFromQWERTY {
        TArray<FInputActionKeyMapping> ActionMappings; // 0x0
        TArray<FInputActionKeyMapping> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_TransposeActionFromQWERTY params{};
    params.ActionMappings = (TArray<FInputActionKeyMapping>)ActionMappings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    ActionMappings = params.ActionMappings;
    return (TArray<FInputActionKeyMapping>)params.ReturnValue;
}
void UUIManager::AddPathEnd(FVector End, float Width, float Height) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.AddPathEnd"));
    struct Params_AddPathEnd {
        FVector End; // 0x0
        float Width; // 0xc
        float Height; // 0x10
    }; // Size: 0x14
    Params_AddPathEnd params{};
    params.End = (FVector)End;
    params.Width = (float)Width;
    params.Height = (float)Height;
    ProcessEvent(func, &params);
}
void UUIManager::DebugTriggerCollectionKnownNotification(FName CollectionID, FName CollectionCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.DebugTriggerCollectionKnownNotification"));
    struct Params_DebugTriggerCollectionKnownNotification {
        FName CollectionID; // 0x0
        FName CollectionCategory; // 0x8
    }; // Size: 0x10
    Params_DebugTriggerCollectionKnownNotification params{};
    params.CollectionID = (FName)CollectionID;
    params.CollectionCategory = (FName)CollectionCategory;
    ProcessEvent(func, &params);
}
int32_t UUIManager::GetPlayerYear(EDisciplineType Discipline) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetPlayerYear"));
    struct Params_GetPlayerYear {
        EDisciplineType Discipline; // 0x0
        char pad_1[0x3];
        int32_t ReturnValue; // 0x4
    }; // Size: 0x8
    Params_GetPlayerYear params{};
    params.Discipline = (EDisciplineType)Discipline;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UUIManager::IsFaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsFaded"));
    struct Params_IsFaded {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFaded params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::RemoveInteractComponentWidget(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.RemoveInteractComponentWidget"));
    struct Params_RemoveInteractComponentWidget {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_RemoveInteractComponentWidget params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
bool UUIManager::SetPlayerGender(FString Gender) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetPlayerGender"));
    struct Params_SetPlayerGender {
        FString Gender; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetPlayerGender params{};
    params.Gender = (FString)Gender;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::TogglePathActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.TogglePathActive"));
    struct Params_TogglePathActive {
    }; // Size: 0x0
    Params_TogglePathActive params{};
    ProcessEvent(func, &params);
}
void UUIManager::SetToMapFromBackButton(bool pToMapFromBackButton) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetToMapFromBackButton"));
    struct Params_SetToMapFromBackButton {
        bool pToMapFromBackButton; // 0x0
    }; // Size: 0x1
    Params_SetToMapFromBackButton params{};
    params.pToMapFromBackButton = (bool)pToMapFromBackButton;
    ProcessEvent(func, &params);
}
bool UUIManager::CanPlayIntroNormally() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.CanPlayIntroNormally"));
    struct Params_CanPlayIntroNormally {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanPlayIntroNormally params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::ToggleMenuTab(EPauseMenuPage MenuPage, bool ShouldShow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ToggleMenuTab"));
    struct Params_ToggleMenuTab {
        EPauseMenuPage MenuPage; // 0x0
        bool ShouldShow; // 0x1
    }; // Size: 0x2
    Params_ToggleMenuTab params{};
    params.MenuPage = (EPauseMenuPage)MenuPage;
    params.ShouldShow = (bool)ShouldShow;
    ProcessEvent(func, &params);
}
bool UUIManager::GetIsVirtualCursorShowing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetIsVirtualCursorShowing"));
    struct Params_GetIsVirtualCursorShowing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsVirtualCursorShowing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::ToggleHUD(bool Enable, bool AllowSelectiveTicking) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ToggleHUD"));
    struct Params_ToggleHUD {
        bool Enable; // 0x0
        bool AllowSelectiveTicking; // 0x1
    }; // Size: 0x2
    Params_ToggleHUD params{};
    params.Enable = (bool)Enable;
    params.AllowSelectiveTicking = (bool)AllowSelectiveTicking;
    ProcessEvent(func, &params);
}
bool UUIManager::TargetWidgetSetup(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.TargetWidgetSetup"));
    struct Params_TargetWidgetSetup {
        AActor* Target; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_TargetWidgetSetup params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UPopupScreen* UUIManager::ShowYesNoPopup(FString TitleString, FString DescriptionString, bool IsDescTranslated, bool bPausesTheGame, UUserWidget* ContentWidget, EUIPopupPriority PopupPriority, bool bAutoCloseOnButtonPress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ShowYesNoPopup"));
    struct Params_ShowYesNoPopup {
        FString TitleString; // 0x0
        FString DescriptionString; // 0x10
        bool IsDescTranslated; // 0x20
        bool bPausesTheGame; // 0x21
        char pad_22[0x6];
        UUserWidget* ContentWidget; // 0x28
        EUIPopupPriority PopupPriority; // 0x30
        bool bAutoCloseOnButtonPress; // 0x31
        char pad_32[0x6];
        UPopupScreen* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_ShowYesNoPopup params{};
    params.TitleString = (FString)TitleString;
    params.DescriptionString = (FString)DescriptionString;
    params.IsDescTranslated = (bool)IsDescTranslated;
    params.bPausesTheGame = (bool)bPausesTheGame;
    params.ContentWidget = (UUserWidget*)ContentWidget;
    params.PopupPriority = (EUIPopupPriority)PopupPriority;
    params.bAutoCloseOnButtonPress = (bool)bAutoCloseOnButtonPress;
    ProcessEvent(func, &params);
    return (UPopupScreen*)params.ReturnValue;
}
void UUIManager::SetManualFade(float Opacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetManualFade"));
    struct Params_SetManualFade {
        float Opacity; // 0x0
    }; // Size: 0x4
    Params_SetManualFade params{};
    params.Opacity = (float)Opacity;
    ProcessEvent(func, &params);
}
void UUIManager::ShowPathSelectionPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ShowPathSelectionPressed"));
    struct Params_ShowPathSelectionPressed {
    }; // Size: 0x0
    Params_ShowPathSelectionPressed params{};
    ProcessEvent(func, &params);
}
UWorld* UUIManager::GetCurrentWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetCurrentWorld"));
    struct Params_GetCurrentWorld {
        UWorld* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCurrentWorld params{};
    ProcessEvent(func, &params);
    return (UWorld*)params.ReturnValue;
}
void UUIManager::TargetComponentWidget(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.TargetComponentWidget"));
    struct Params_TargetComponentWidget {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_TargetComponentWidget params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
void UUIManager::BuildNavPointsUsingActors(TArray<AActor*>& Actors, float Width, float Height) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.BuildNavPointsUsingActors"));
    struct Params_BuildNavPointsUsingActors {
        TArray<AActor*> Actors; // 0x0
        float Width; // 0x10
        float Height; // 0x14
    }; // Size: 0x18
    Params_BuildNavPointsUsingActors params{};
    params.Actors = (TArray<AActor*>)Actors;
    params.Width = (float)Width;
    params.Height = (float)Height;
    ProcessEvent(func, &params);
    Actors = params.Actors;
}
void UUIManager::CreateAsyncWidget() {}
UPopupScreen* UUIManager::ShowOkPopup(FString TitleString, FString DescriptionString, bool IsDescTranslated, bool bPausesTheGame, UUserWidget* ContentWidget, EUIPopupPriority PopupPriority, bool bAutoCloseOnButtonPress, int32_t ZOrder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ShowOkPopup"));
    struct Params_ShowOkPopup {
        FString TitleString; // 0x0
        FString DescriptionString; // 0x10
        bool IsDescTranslated; // 0x20
        bool bPausesTheGame; // 0x21
        char pad_22[0x6];
        UUserWidget* ContentWidget; // 0x28
        EUIPopupPriority PopupPriority; // 0x30
        bool bAutoCloseOnButtonPress; // 0x31
        char pad_32[0x2];
        int32_t ZOrder; // 0x34
        UPopupScreen* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_ShowOkPopup params{};
    params.TitleString = (FString)TitleString;
    params.DescriptionString = (FString)DescriptionString;
    params.IsDescTranslated = (bool)IsDescTranslated;
    params.bPausesTheGame = (bool)bPausesTheGame;
    params.ContentWidget = (UUserWidget*)ContentWidget;
    params.PopupPriority = (EUIPopupPriority)PopupPriority;
    params.bAutoCloseOnButtonPress = (bool)bAutoCloseOnButtonPress;
    params.ZOrder = (int32_t)ZOrder;
    ProcessEvent(func, &params);
    return (UPopupScreen*)params.ReturnValue;
}
bool UUIManager::SetPlayerHouse(FString HouseName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetPlayerHouse"));
    struct Params_SetPlayerHouse {
        FString HouseName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetPlayerHouse params{};
    params.HouseName = (FString)HouseName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::StartVendorWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.StartVendorWorld"));
    struct Params_StartVendorWorld {
    }; // Size: 0x0
    Params_StartVendorWorld params{};
    ProcessEvent(func, &params);
}
void UUIManager::ShowFloatingGamepadTextInput() {}
UPopupScreen* UUIManager::ShowPleaseWaitPopup(FString TitleString, FString DescriptionString, bool IsDescTranslated, bool bPausesTheGame, UUserWidget* ContentWidget, EUIPopupPriority PopupPriority, bool bAutoCloseOnButtonPress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ShowPleaseWaitPopup"));
    struct Params_ShowPleaseWaitPopup {
        FString TitleString; // 0x0
        FString DescriptionString; // 0x10
        bool IsDescTranslated; // 0x20
        bool bPausesTheGame; // 0x21
        char pad_22[0x6];
        UUserWidget* ContentWidget; // 0x28
        EUIPopupPriority PopupPriority; // 0x30
        bool bAutoCloseOnButtonPress; // 0x31
        char pad_32[0x6];
        UPopupScreen* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_ShowPleaseWaitPopup params{};
    params.TitleString = (FString)TitleString;
    params.DescriptionString = (FString)DescriptionString;
    params.IsDescTranslated = (bool)IsDescTranslated;
    params.bPausesTheGame = (bool)bPausesTheGame;
    params.ContentWidget = (UUserWidget*)ContentWidget;
    params.PopupPriority = (EUIPopupPriority)PopupPriority;
    params.bAutoCloseOnButtonPress = (bool)bAutoCloseOnButtonPress;
    ProcessEvent(func, &params);
    return (UPopupScreen*)params.ReturnValue;
}
bool UUIManager::GetIsUIShown() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetIsUIShown"));
    struct Params_GetIsUIShown {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsUIShown params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UPopupScreen* UUIManager::ShowOkCancelPopup(FString TitleString, FString DescriptionString, bool IsDescTranslated, bool bPausesTheGame, UUserWidget* ContentWidget, EUIPopupPriority PopupPriority, bool bAutoCloseOnButtonPress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ShowOkCancelPopup"));
    struct Params_ShowOkCancelPopup {
        FString TitleString; // 0x0
        FString DescriptionString; // 0x10
        bool IsDescTranslated; // 0x20
        bool bPausesTheGame; // 0x21
        char pad_22[0x6];
        UUserWidget* ContentWidget; // 0x28
        EUIPopupPriority PopupPriority; // 0x30
        bool bAutoCloseOnButtonPress; // 0x31
        char pad_32[0x6];
        UPopupScreen* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_ShowOkCancelPopup params{};
    params.TitleString = (FString)TitleString;
    params.DescriptionString = (FString)DescriptionString;
    params.IsDescTranslated = (bool)IsDescTranslated;
    params.bPausesTheGame = (bool)bPausesTheGame;
    params.ContentWidget = (UUserWidget*)ContentWidget;
    params.PopupPriority = (EUIPopupPriority)PopupPriority;
    params.bAutoCloseOnButtonPress = (bool)bAutoCloseOnButtonPress;
    ProcessEvent(func, &params);
    return (UPopupScreen*)params.ReturnValue;
}
bool UUIManager::SetStudentLocatorBeacon(FString StudentName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetStudentLocatorBeacon"));
    struct Params_SetStudentLocatorBeacon {
        FString StudentName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetStudentLocatorBeacon params{};
    params.StudentName = (FString)StudentName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UPopupScreen* UUIManager::ShowGenericPopup(FString TitleString, FString DescriptionString, TArray<FLegendItemData>& LegendItems, TArray<FInputActionHoldInfo>& CompletionActions, bool bUsesWaitIndicator, bool IsDescTranslated, bool bPausesTheGame, UUserWidget* ContentWidget, EUIPopupPriority PopupPriority, bool bAutoCloseOnButtonPress, int32_t ZOrder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ShowGenericPopup"));
    struct Params_ShowGenericPopup {
        FString TitleString; // 0x0
        FString DescriptionString; // 0x10
        TArray<FLegendItemData> LegendItems; // 0x20
        TArray<FInputActionHoldInfo> CompletionActions; // 0x30
        bool bUsesWaitIndicator; // 0x40
        bool IsDescTranslated; // 0x41
        bool bPausesTheGame; // 0x42
        char pad_43[0x5];
        UUserWidget* ContentWidget; // 0x48
        EUIPopupPriority PopupPriority; // 0x50
        bool bAutoCloseOnButtonPress; // 0x51
        char pad_52[0x2];
        int32_t ZOrder; // 0x54
        UPopupScreen* ReturnValue; // 0x58
    }; // Size: 0x60
    Params_ShowGenericPopup params{};
    params.TitleString = (FString)TitleString;
    params.DescriptionString = (FString)DescriptionString;
    params.LegendItems = (TArray<FLegendItemData>)LegendItems;
    params.CompletionActions = (TArray<FInputActionHoldInfo>)CompletionActions;
    params.bUsesWaitIndicator = (bool)bUsesWaitIndicator;
    params.IsDescTranslated = (bool)IsDescTranslated;
    params.bPausesTheGame = (bool)bPausesTheGame;
    params.ContentWidget = (UUserWidget*)ContentWidget;
    params.PopupPriority = (EUIPopupPriority)PopupPriority;
    params.bAutoCloseOnButtonPress = (bool)bAutoCloseOnButtonPress;
    params.ZOrder = (int32_t)ZOrder;
    ProcessEvent(func, &params);
    LegendItems = params.LegendItems;
    CompletionActions = params.CompletionActions;
    return (UPopupScreen*)params.ReturnValue;
}
void UUIManager::SetUIDisplayMode(EUIDisplayMode DisplayMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetUIDisplayMode"));
    struct Params_SetUIDisplayMode {
        EUIDisplayMode DisplayMode; // 0x0
    }; // Size: 0x1
    Params_SetUIDisplayMode params{};
    params.DisplayMode = (EUIDisplayMode)DisplayMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UUIManager::AppendNavPointsUsingActors(TArray<AActor*>& Actors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.AppendNavPointsUsingActors"));
    struct Params_AppendNavPointsUsingActors {
        TArray<AActor*> Actors; // 0x0
    }; // Size: 0x10
    Params_AppendNavPointsUsingActors params{};
    params.Actors = (TArray<AActor*>)Actors;
    ProcessEvent(func, &params);
    Actors = params.Actors;
}
bool UUIManager::GetMutatedMKBAxisMappingsByName(FName& AxisName, TArray<FKey>& ForbiddenKeys, FInputAxisKeyMapping& OutPosMain, FInputAxisKeyMapping& OutFakePosMain, FInputAxisKeyMapping& OutPosAlt, FInputAxisKeyMapping& OutNegMain, FInputAxisKeyMapping& OutFakeNegMain, FInputAxisKeyMapping& OutNegAlt, bool bTranspose) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetMutatedMKBAxisMappingsByName"));
    struct Params_GetMutatedMKBAxisMappingsByName {
        FName AxisName; // 0x0
        TArray<FKey> ForbiddenKeys; // 0x8
        FInputAxisKeyMapping OutPosMain; // 0x18
        FInputAxisKeyMapping OutFakePosMain; // 0x50
        FInputAxisKeyMapping OutPosAlt; // 0x88
        FInputAxisKeyMapping OutNegMain; // 0xc0
        FInputAxisKeyMapping OutFakeNegMain; // 0xf8
        FInputAxisKeyMapping OutNegAlt; // 0x130
        bool bTranspose; // 0x168
        bool ReturnValue; // 0x169
    }; // Size: 0x16a
    Params_GetMutatedMKBAxisMappingsByName params{};
    params.AxisName = (FName)AxisName;
    params.ForbiddenKeys = (TArray<FKey>)ForbiddenKeys;
    params.OutPosMain = (FInputAxisKeyMapping)OutPosMain;
    params.OutFakePosMain = (FInputAxisKeyMapping)OutFakePosMain;
    params.OutPosAlt = (FInputAxisKeyMapping)OutPosAlt;
    params.OutNegMain = (FInputAxisKeyMapping)OutNegMain;
    params.OutFakeNegMain = (FInputAxisKeyMapping)OutFakeNegMain;
    params.OutNegAlt = (FInputAxisKeyMapping)OutNegAlt;
    params.bTranspose = (bool)bTranspose;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutNegMain = params.OutNegMain;
    AxisName = params.AxisName;
    OutPosMain = params.OutPosMain;
    ForbiddenKeys = params.ForbiddenKeys;
    OutFakePosMain = params.OutFakePosMain;
    OutPosAlt = params.OutPosAlt;
    OutNegAlt = params.OutNegAlt;
    OutFakeNegMain = params.OutFakeNegMain;
    return (bool)params.ReturnValue;
}
bool UUIManager::IsAxisKeyValid(FInputAxisKeyMapping& InAxisMapping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsAxisKeyValid"));
    struct Params_IsAxisKeyValid {
        FInputAxisKeyMapping InAxisMapping; // 0x0
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_IsAxisKeyValid params{};
    params.InAxisMapping = (FInputAxisKeyMapping)InAxisMapping;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAxisMapping = params.InAxisMapping;
    return (bool)params.ReturnValue;
}
void UUIManager::OnVendorLevelShow(UWorldSupportLevel* Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnVendorLevelShow"));
    struct Params_OnVendorLevelShow {
        UWorldSupportLevel* Level; // 0x0
    }; // Size: 0x8
    Params_OnVendorLevelShow params{};
    params.Level = (UWorldSupportLevel*)Level;
    ProcessEvent(func, &params);
}
void UUIManager::SetTempPauseLock(bool pTempPauseLock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetTempPauseLock"));
    struct Params_SetTempPauseLock {
        bool pTempPauseLock; // 0x0
    }; // Size: 0x1
    Params_SetTempPauseLock params{};
    params.pTempPauseLock = (bool)pTempPauseLock;
    ProcessEvent(func, &params);
}
void UUIManager::SetPlayerInventorySortPreference(FString Preference) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetPlayerInventorySortPreference"));
    struct Params_SetPlayerInventorySortPreference {
        FString Preference; // 0x0
    }; // Size: 0x10
    Params_SetPlayerInventorySortPreference params{};
    params.Preference = (FString)Preference;
    ProcessEvent(func, &params);
}
void UUIManager::SetFactsheetMode(EUIFactsheetMode NewFactsheetMode) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetFactsheetMode"));
    struct Params_SetFactsheetMode {
        EUIFactsheetMode NewFactsheetMode; // 0x0
    }; // Size: 0x1
    Params_SetFactsheetMode params{};
    params.NewFactsheetMode = (EUIFactsheetMode)NewFactsheetMode;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UUIManager::SetPlayerFirstAndLastName(FString PlayerFirstName, FString PlayerLastName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetPlayerFirstAndLastName"));
    struct Params_SetPlayerFirstAndLastName {
        FString PlayerFirstName; // 0x0
        FString PlayerLastName; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_SetPlayerFirstAndLastName params{};
    params.PlayerFirstName = (FString)PlayerFirstName;
    params.PlayerLastName = (FString)PlayerLastName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::SetMKBAxis(FInputAxisKeyMapping& InAxisMapping, bool bIsPrimary, bool bForceRebuildKeymaps, bool bTranspose) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetMKBAxis"));
    struct Params_SetMKBAxis {
        FInputAxisKeyMapping InAxisMapping; // 0x0
        bool bIsPrimary; // 0x38
        bool bForceRebuildKeymaps; // 0x39
        bool bTranspose; // 0x3a
        bool ReturnValue; // 0x3b
    }; // Size: 0x3c
    Params_SetMKBAxis params{};
    params.InAxisMapping = (FInputAxisKeyMapping)InAxisMapping;
    params.bIsPrimary = (bool)bIsPrimary;
    params.bForceRebuildKeymaps = (bool)bForceRebuildKeymaps;
    params.bTranspose = (bool)bTranspose;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InAxisMapping = params.InAxisMapping;
    return (bool)params.ReturnValue;
}
bool UUIManager::SetMenuReaderVoice(FMenuReaderVoice InVoice) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetMenuReaderVoice"));
    struct Params_SetMenuReaderVoice {
        FMenuReaderVoice InVoice; // 0x0
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_SetMenuReaderVoice params{};
    params.InVoice = (FMenuReaderVoice)InVoice;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::SetLocatorBeaconUsingType(FString Type, FString NameOrLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetLocatorBeaconUsingType"));
    struct Params_SetLocatorBeaconUsingType {
        FString Type; // 0x0
        FString NameOrLocation; // 0x10
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_SetLocatorBeaconUsingType params{};
    params.Type = (FString)Type;
    params.NameOrLocation = (FString)NameOrLocation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::SetLocatorBeaconUsingDBDungeonEntrances(FString LocationID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetLocatorBeaconUsingDBDungeonEntrances"));
    struct Params_SetLocatorBeaconUsingDBDungeonEntrances {
        FString LocationID; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetLocatorBeaconUsingDBDungeonEntrances params{};
    params.LocationID = (FString)LocationID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::SetLocatorBeacon(FString StudentName, FVector Location, FString BeaconIconName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetLocatorBeacon"));
    struct Params_SetLocatorBeacon {
        FString StudentName; // 0x0
        FVector Location; // 0x10
        char pad_1c[0x4];
        FString BeaconIconName; // 0x20
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_SetLocatorBeacon params{};
    params.StudentName = (FString)StudentName;
    params.Location = (FVector)Location;
    params.BeaconIconName = (FString)BeaconIconName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::SetLocationName(FName LocationName, bool ShowNotification) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetLocationName"));
    struct Params_SetLocationName {
        FName LocationName; // 0x0
        bool ShowNotification; // 0x8
    }; // Size: 0x9
    Params_SetLocationName params{};
    params.LocationName = (FName)LocationName;
    params.ShowNotification = (bool)ShowNotification;
    ProcessEvent(func, &params);
}
void UUIManager::SetLoadingSaveGame(bool pLoadingSaveGame) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetLoadingSaveGame"));
    struct Params_SetLoadingSaveGame {
        bool pLoadingSaveGame; // 0x0
    }; // Size: 0x1
    Params_SetLoadingSaveGame params{};
    params.pLoadingSaveGame = (bool)pLoadingSaveGame;
    ProcessEvent(func, &params);
}
void UUIManager::SetIsRichPaperShowing(bool Showing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetIsRichPaperShowing"));
    struct Params_SetIsRichPaperShowing {
        bool Showing; // 0x0
    }; // Size: 0x1
    Params_SetIsRichPaperShowing params{};
    params.Showing = (bool)Showing;
    ProcessEvent(func, &params);
}
void UUIManager::SetInPreGameplayState(bool InPreGameplayState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetInPreGameplayState"));
    struct Params_SetInPreGameplayState {
        bool InPreGameplayState; // 0x0
    }; // Size: 0x1
    Params_SetInPreGameplayState params{};
    params.InPreGameplayState = (bool)InPreGameplayState;
    ProcessEvent(func, &params);
}
bool UUIManager::SaveInputConfig() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SaveInputConfig"));
    struct Params_SaveInputConfig {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_SaveInputConfig params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::SetInMenuTransitionWithDelay(bool pInMenuTransition, float Delay, FString pContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetInMenuTransitionWithDelay"));
    struct Params_SetInMenuTransitionWithDelay {
        bool pInMenuTransition; // 0x0
        char pad_1[0x3];
        float Delay; // 0x4
        FString pContext; // 0x8
    }; // Size: 0x18
    Params_SetInMenuTransitionWithDelay params{};
    params.pInMenuTransition = (bool)pInMenuTransition;
    params.Delay = (float)Delay;
    params.pContext = (FString)pContext;
    ProcessEvent(func, &params);
}
void UUIManager::SetInFrontendLevel(bool bInFrontend) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetInFrontendLevel"));
    struct Params_SetInFrontendLevel {
        bool bInFrontend; // 0x0
    }; // Size: 0x1
    Params_SetInFrontendLevel params{};
    params.bInFrontend = (bool)bInFrontend;
    ProcessEvent(func, &params);
}
void UUIManager::OnFieldGuideLoad(UWorldSupportLevel* Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnFieldGuideLoad"));
    struct Params_OnFieldGuideLoad {
        UWorldSupportLevel* Level; // 0x0
    }; // Size: 0x8
    Params_OnFieldGuideLoad params{};
    params.Level = (UWorldSupportLevel*)Level;
    ProcessEvent(func, &params);
}
void UUIManager::SetInDarkArtsChallenge(bool InDA) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetInDarkArtsChallenge"));
    struct Params_SetInDarkArtsChallenge {
        bool InDA; // 0x0
    }; // Size: 0x1
    Params_SetInDarkArtsChallenge params{};
    params.InDA = (bool)InDA;
    ProcessEvent(func, &params);
}
bool UUIManager::GetShouldShowButtonGraphics() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetShouldShowButtonGraphics"));
    struct Params_GetShouldShowButtonGraphics {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShouldShowButtonGraphics params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsSteamRunningOnSteamDeck() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsSteamRunningOnSteamDeck"));
    struct Params_IsSteamRunningOnSteamDeck {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSteamRunningOnSteamDeck params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::SetHiddenMenuTabs(TArray<EPauseMenuPage> PagesToHide) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetHiddenMenuTabs"));
    struct Params_SetHiddenMenuTabs {
        TArray<EPauseMenuPage> PagesToHide; // 0x0
    }; // Size: 0x10
    Params_SetHiddenMenuTabs params{};
    params.PagesToHide = (TArray<EPauseMenuPage>)PagesToHide;
    ProcessEvent(func, &params);
}
void UUIManager::SetDebugLoadingScreen(bool bDebug) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetDebugLoadingScreen"));
    struct Params_SetDebugLoadingScreen {
        bool bDebug; // 0x0
    }; // Size: 0x1
    Params_SetDebugLoadingScreen params{};
    params.bDebug = (bool)bDebug;
    ProcessEvent(func, &params);
}
void UUIManager::SetCursorWidget(UMenuCursorWidget* NewCursor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetCursorWidget"));
    struct Params_SetCursorWidget {
        UMenuCursorWidget* NewCursor; // 0x0
    }; // Size: 0x8
    Params_SetCursorWidget params{};
    params.NewCursor = (UMenuCursorWidget*)NewCursor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UUIManager::SetCompanionSelectionScreen(UScreen* InScreen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetCompanionSelectionScreen"));
    struct Params_SetCompanionSelectionScreen {
        UScreen* InScreen; // 0x0
    }; // Size: 0x8
    Params_SetCompanionSelectionScreen params{};
    params.InScreen = (UScreen*)InScreen;
    ProcessEvent(func, &params);
}
void UUIManager::SetCastStupefyWithRightTrigger(bool UseRT) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetCastStupefyWithRightTrigger"));
    struct Params_SetCastStupefyWithRightTrigger {
        bool UseRT; // 0x0
    }; // Size: 0x1
    Params_SetCastStupefyWithRightTrigger params{};
    params.UseRT = (bool)UseRT;
    ProcessEvent(func, &params);
}
void UUIManager::SetCanBackOutOfAvatarCreator(bool bCanBackOut) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetCanBackOutOfAvatarCreator"));
    struct Params_SetCanBackOutOfAvatarCreator {
        bool bCanBackOut; // 0x0
    }; // Size: 0x1
    Params_SetCanBackOutOfAvatarCreator params{};
    params.bCanBackOut = (bool)bCanBackOut;
    ProcessEvent(func, &params);
}
void UUIManager::KeepLoadScreenUp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.KeepLoadScreenUp"));
    struct Params_KeepLoadScreenUp {
    }; // Size: 0x0
    Params_KeepLoadScreenUp params{};
    ProcessEvent(func, &params);
}
void UUIManager::SetAsyncScreenLoadInProgress(bool InProgress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetAsyncScreenLoadInProgress"));
    struct Params_SetAsyncScreenLoadInProgress {
        bool InProgress; // 0x0
    }; // Size: 0x1
    Params_SetAsyncScreenLoadInProgress params{};
    params.InProgress = (bool)InProgress;
    ProcessEvent(func, &params);
}
void UUIManager::ClearNewIndicatorCategory(FName CategoryName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ClearNewIndicatorCategory"));
    struct Params_ClearNewIndicatorCategory {
        FName CategoryName; // 0x0
    }; // Size: 0x8
    Params_ClearNewIndicatorCategory params{};
    params.CategoryName = (FName)CategoryName;
    ProcessEvent(func, &params);
}
void UUIManager::SetAndShowHintMessage(FString HintKey, ETutorialPosition HintPosition, bool bIgnoreShowTutorialElementsFlag, float MaxDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetAndShowHintMessage"));
    struct Params_SetAndShowHintMessage {
        FString HintKey; // 0x0
        ETutorialPosition HintPosition; // 0x10
        bool bIgnoreShowTutorialElementsFlag; // 0x11
        char pad_12[0x2];
        float MaxDuration; // 0x14
    }; // Size: 0x18
    Params_SetAndShowHintMessage params{};
    params.HintKey = (FString)HintKey;
    params.HintPosition = (ETutorialPosition)HintPosition;
    params.bIgnoreShowTutorialElementsFlag = (bool)bIgnoreShowTutorialElementsFlag;
    params.MaxDuration = (float)MaxDuration;
    ProcessEvent(func, &params);
}
void UUIManager::SetActiveMenu(FName MenuToLoad, bool LoadToSubPage, bool LockToMenu) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SetActiveMenu"));
    struct Params_SetActiveMenu {
        FName MenuToLoad; // 0x0
        bool LoadToSubPage; // 0x8
        bool LockToMenu; // 0x9
    }; // Size: 0xa
    Params_SetActiveMenu params{};
    params.MenuToLoad = (FName)MenuToLoad;
    params.LoadToSubPage = (bool)LoadToSubPage;
    params.LockToMenu = (bool)LockToMenu;
    ProcessEvent(func, &params);
}
void UUIManager::SelectButton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.SelectButton"));
    struct Params_SelectButton {
    }; // Size: 0x0
    Params_SelectButton params{};
    ProcessEvent(func, &params);
}
void UUIManager::RevelioPageScreenLoaded(UScreen* Screen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.RevelioPageScreenLoaded"));
    struct Params_RevelioPageScreenLoaded {
        UScreen* Screen; // 0x0
    }; // Size: 0x8
    Params_RevelioPageScreenLoaded params{};
    params.Screen = (UScreen*)Screen;
    ProcessEvent(func, &params);
}
void UUIManager::ReturnToStartPage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ReturnToStartPage"));
    struct Params_ReturnToStartPage {
    }; // Size: 0x0
    Params_ReturnToStartPage params{};
    ProcessEvent(func, &params);
}
bool UUIManager::IsUsingSwitchController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsUsingSwitchController"));
    struct Params_IsUsingSwitchController {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUsingSwitchController params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UUIManager::ResolveOptionPanelChoice(FString DialogueLine) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ResolveOptionPanelChoice"));
    struct Params_ResolveOptionPanelChoice {
        FString DialogueLine; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_ResolveOptionPanelChoice params{};
    params.DialogueLine = (FString)DialogueLine;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UUIManager::RequestGameAndSystemPause(bool bPause, FName RequesterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.RequestGameAndSystemPause"));
    struct Params_RequestGameAndSystemPause {
        bool bPause; // 0x0
        char pad_1[0x3];
        FName RequesterName; // 0x4
    }; // Size: 0xc
    Params_RequestGameAndSystemPause params{};
    params.bPause = (bool)bPause;
    params.RequesterName = (FName)RequesterName;
    ProcessEvent(func, &params);
}
void UUIManager::RemoveTargetComponentWidget(AActor* Target, bool TargetDied) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.RemoveTargetComponentWidget"));
    struct Params_RemoveTargetComponentWidget {
        AActor* Target; // 0x0
        bool TargetDied; // 0x8
    }; // Size: 0x9
    Params_RemoveTargetComponentWidget params{};
    params.Target = (AActor*)Target;
    params.TargetDied = (bool)TargetDied;
    ProcessEvent(func, &params);
}
void UUIManager::RemoveStudentLocatorBeacon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.RemoveStudentLocatorBeacon"));
    struct Params_RemoveStudentLocatorBeacon {
    }; // Size: 0x0
    Params_RemoveStudentLocatorBeacon params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UUIManager::RemoveAlertComponentWidget(AActor* Target, EWidgetType WidgetType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.RemoveAlertComponentWidget"));
    struct Params_RemoveAlertComponentWidget {
        AActor* Target; // 0x0
        EWidgetType WidgetType; // 0x8
    }; // Size: 0x9
    Params_RemoveAlertComponentWidget params{};
    params.Target = (AActor*)Target;
    params.WidgetType = (EWidgetType)WidgetType;
    ProcessEvent(func, &params);
}
bool UUIManager::IsAsyncScreenLoadInProgress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsAsyncScreenLoadInProgress"));
    struct Params_IsAsyncScreenLoadInProgress {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsAsyncScreenLoadInProgress params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UUIManager::PhoenixTranslate(FString Key, FString DebugLogText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.PhoenixTranslate"));
    struct Params_PhoenixTranslate {
        FString Key; // 0x0
        FString DebugLogText; // 0x10
        FString ReturnValue; // 0x20
    }; // Size: 0x30
    Params_PhoenixTranslate params{};
    params.Key = (FString)Key;
    params.DebugLogText = (FString)DebugLogText;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UUIManager::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
bool UUIManager::PhoenixKeyExists(FString Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.PhoenixKeyExists"));
    struct Params_PhoenixKeyExists {
        FString Key; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_PhoenixKeyExists params{};
    params.Key = (FString)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsPopupReady() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsPopupReady"));
    struct Params_IsPopupReady {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPopupReady params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::PauseLocationNameUI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.PauseLocationNameUI"));
    struct Params_PauseLocationNameUI {
    }; // Size: 0x0
    Params_PauseLocationNameUI params{};
    ProcessEvent(func, &params);
}
void UUIManager::PathSelectionTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.PathSelectionTimerExpired"));
    struct Params_PathSelectionTimerExpired {
    }; // Size: 0x0
    Params_PathSelectionTimerExpired params{};
    ProcessEvent(func, &params);
}
bool UUIManager::IsItemNew(FName CategoryName, FName ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsItemNew"));
    struct Params_IsItemNew {
        FName CategoryName; // 0x0
        FName ItemName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsItemNew params{};
    params.CategoryName = (FName)CategoryName;
    params.ItemName = (FName)ItemName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::OnVendorLevelUnload(UWorldSupportLevel* Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnVendorLevelUnload"));
    struct Params_OnVendorLevelUnload {
        UWorldSupportLevel* Level; // 0x0
    }; // Size: 0x8
    Params_OnVendorLevelUnload params{};
    params.Level = (UWorldSupportLevel*)Level;
    ProcessEvent(func, &params);
}
void UUIManager::AlertComponentWidget(AActor* Target, EWidgetType WidgetType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.AlertComponentWidget"));
    struct Params_AlertComponentWidget {
        AActor* Target; // 0x0
        EWidgetType WidgetType; // 0x8
    }; // Size: 0x9
    Params_AlertComponentWidget params{};
    params.Target = (AActor*)Target;
    params.WidgetType = (EWidgetType)WidgetType;
    ProcessEvent(func, &params);
}
void UUIManager::OnVendorLevelLoad(UWorldSupportLevel* Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnVendorLevelLoad"));
    struct Params_OnVendorLevelLoad {
        UWorldSupportLevel* Level; // 0x0
    }; // Size: 0x8
    Params_OnVendorLevelLoad params{};
    params.Level = (UWorldSupportLevel*)Level;
    ProcessEvent(func, &params);
}
void UUIManager::OnStatChanged(FName StatID, int32_t Value, int32_t Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnStatChanged"));
    struct Params_OnStatChanged {
        FName StatID; // 0x0
        int32_t Value; // 0x8
        int32_t Delta; // 0xc
    }; // Size: 0x10
    Params_OnStatChanged params{};
    params.StatID = (FName)StatID;
    params.Value = (int32_t)Value;
    params.Delta = (int32_t)Delta;
    ProcessEvent(func, &params);
}
void UUIManager::OnSaveGameLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnSaveGameLoad"));
    struct Params_OnSaveGameLoad {
    }; // Size: 0x0
    Params_OnSaveGameLoad params{};
    ProcessEvent(func, &params);
}
void UUIManager::AddTextTickerNotification(FString NotificationText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.AddTextTickerNotification"));
    struct Params_AddTextTickerNotification {
        FString NotificationText; // 0x0
    }; // Size: 0x10
    Params_AddTextTickerNotification params{};
    params.NotificationText = (FString)NotificationText;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UUIManager::LoadFieldGuideScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.LoadFieldGuideScreen"));
    struct Params_LoadFieldGuideScreen {
    }; // Size: 0x0
    Params_LoadFieldGuideScreen params{};
    ProcessEvent(func, &params);
}
void UUIManager::OnInputDeviceChanged(EInputDeviceUsed UsedInputDevice, FKey InputPressed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnInputDeviceChanged"));
    struct Params_OnInputDeviceChanged {
        EInputDeviceUsed UsedInputDevice; // 0x0
        char pad_1[0x7];
        FKey InputPressed; // 0x8
    }; // Size: 0x20
    Params_OnInputDeviceChanged params{};
    params.UsedInputDevice = (EInputDeviceUsed)UsedInputDevice;
    params.InputPressed = (FKey)InputPressed;
    ProcessEvent(func, &params);
}
void UUIManager::ClearNewIndicatorItem(FName CategoryName, FName ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ClearNewIndicatorItem"));
    struct Params_ClearNewIndicatorItem {
        FName CategoryName; // 0x0
        FName ItemName; // 0x8
    }; // Size: 0x10
    Params_ClearNewIndicatorItem params{};
    params.CategoryName = (FName)CategoryName;
    params.ItemName = (FName)ItemName;
    ProcessEvent(func, &params);
}
void UUIManager::OnFieldGuideUnload(UWorldSupportLevel* Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnFieldGuideUnload"));
    struct Params_OnFieldGuideUnload {
        UWorldSupportLevel* Level; // 0x0
    }; // Size: 0x8
    Params_OnFieldGuideUnload params{};
    params.Level = (UWorldSupportLevel*)Level;
    ProcessEvent(func, &params);
}
TArray<FInputGroupHeader> UUIManager::GetPCInputGroupHeaders(bool bAction, bool bAxis) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetPCInputGroupHeaders"));
    struct Params_GetPCInputGroupHeaders {
        bool bAction; // 0x0
        bool bAxis; // 0x1
        char pad_2[0x6];
        TArray<FInputGroupHeader> ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetPCInputGroupHeaders params{};
    params.bAction = (bool)bAction;
    params.bAxis = (bool)bAxis;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FInputGroupHeader>)params.ReturnValue;
}
void UUIManager::OnFieldGuideShow(UWorldSupportLevel* Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnFieldGuideShow"));
    struct Params_OnFieldGuideShow {
        UWorldSupportLevel* Level; // 0x0
    }; // Size: 0x8
    Params_OnFieldGuideShow params{};
    params.Level = (UWorldSupportLevel*)Level;
    ProcessEvent(func, &params);
}
void UUIManager::OnFadeInComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnFadeInComplete"));
    struct Params_OnFadeInComplete {
    }; // Size: 0x0
    Params_OnFadeInComplete params{};
    ProcessEvent(func, &params);
}
void UUIManager::AnimateTrackingInfo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.AnimateTrackingInfo"));
    struct Params_AnimateTrackingInfo {
    }; // Size: 0x0
    Params_AnimateTrackingInfo params{};
    ProcessEvent(func, &params);
}
UMapDungeon* UUIManager::GetDungeonMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetDungeonMap"));
    struct Params_GetDungeonMap {
        UMapDungeon* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDungeonMap params{};
    ProcessEvent(func, &params);
    return (UMapDungeon*)params.ReturnValue;
}
bool UUIManager::GetIsRichPaperShowing() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetIsRichPaperShowing"));
    struct Params_GetIsRichPaperShowing {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetIsRichPaperShowing params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::HandleMapLocationChanged(UObject* Caller, FString CurrentMapLocationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.HandleMapLocationChanged"));
    struct Params_HandleMapLocationChanged {
        UObject* Caller; // 0x0
        FString CurrentMapLocationName; // 0x8
    }; // Size: 0x18
    Params_HandleMapLocationChanged params{};
    params.Caller = (UObject*)Caller;
    params.CurrentMapLocationName = (FString)CurrentMapLocationName;
    ProcessEvent(func, &params);
}
void UUIManager::OnDualShockFirmwareUpgradePopupClosed(UPopupScreen* PopupScreen, int32_t CompletionActionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnDualShockFirmwareUpgradePopupClosed"));
    struct Params_OnDualShockFirmwareUpgradePopupClosed {
        UPopupScreen* PopupScreen; // 0x0
        int32_t CompletionActionIndex; // 0x8
    }; // Size: 0xc
    Params_OnDualShockFirmwareUpgradePopupClosed params{};
    params.PopupScreen = (UPopupScreen*)PopupScreen;
    params.CompletionActionIndex = (int32_t)CompletionActionIndex;
    ProcessEvent(func, &params);
}
void UUIManager::OnControlSchemaChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnControlSchemaChanged"));
    struct Params_OnControlSchemaChanged {
    }; // Size: 0x0
    Params_OnControlSchemaChanged params{};
    ProcessEvent(func, &params);
}
void UUIManager::CreateGameOverScreen(EUIGameOverReason Reason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.CreateGameOverScreen"));
    struct Params_CreateGameOverScreen {
        EUIGameOverReason Reason; // 0x0
    }; // Size: 0x1
    Params_CreateGameOverScreen params{};
    params.Reason = (EUIGameOverReason)Reason;
    ProcessEvent(func, &params);
}
void UUIManager::OnCompanionLevelUnload(UWorldSupportLevel* Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnCompanionLevelUnload"));
    struct Params_OnCompanionLevelUnload {
        UWorldSupportLevel* Level; // 0x0
    }; // Size: 0x8
    Params_OnCompanionLevelUnload params{};
    params.Level = (UWorldSupportLevel*)Level;
    ProcessEvent(func, &params);
}
void UUIManager::OnCompanionLevelShow(UWorldSupportLevel* Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnCompanionLevelShow"));
    struct Params_OnCompanionLevelShow {
        UWorldSupportLevel* Level; // 0x0
    }; // Size: 0x8
    Params_OnCompanionLevelShow params{};
    params.Level = (UWorldSupportLevel*)Level;
    ProcessEvent(func, &params);
}
void UUIManager::OnCompanionLevelLoad(UWorldSupportLevel* Level) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.OnCompanionLevelLoad"));
    struct Params_OnCompanionLevelLoad {
        UWorldSupportLevel* Level; // 0x0
    }; // Size: 0x8
    Params_OnCompanionLevelLoad params{};
    params.Level = (UWorldSupportLevel*)Level;
    ProcessEvent(func, &params);
}
void UUIManager::MoviePlaybackFinished(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.MoviePlaybackFinished"));
    struct Params_MoviePlaybackFinished {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_MoviePlaybackFinished params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUIManager::MissionFailScreenLoaded(UScreen* Screen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.MissionFailScreenLoaded"));
    struct Params_MissionFailScreenLoaded {
        UScreen* Screen; // 0x0
    }; // Size: 0x8
    Params_MissionFailScreenLoaded params{};
    params.Screen = (UScreen*)Screen;
    ProcessEvent(func, &params);
}
bool UUIManager::IsVendorInteract(FName Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsVendorInteract"));
    struct Params_IsVendorInteract {
        FName Target; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsVendorInteract params{};
    params.Target = (FName)Target;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UInGameMenuScreen* UUIManager::GetInGameMenuWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetInGameMenuWidget"));
    struct Params_GetInGameMenuWidget {
        UInGameMenuScreen* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInGameMenuWidget params{};
    ProcessEvent(func, &params);
    return (UInGameMenuScreen*)params.ReturnValue;
}
bool UUIManager::IsUsingXboxOneController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsUsingXboxOneController"));
    struct Params_IsUsingXboxOneController {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUsingXboxOneController params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsUsingSteamController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsUsingSteamController"));
    struct Params_IsUsingSteamController {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUsingSteamController params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UUIManager::GetPSOProgress() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetPSOProgress"));
    struct Params_GetPSOProgress {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPSOProgress params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
bool UUIManager::IsUsingPS5Controller() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsUsingPS5Controller"));
    struct Params_IsUsingPS5Controller {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUsingPS5Controller params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsUsingPS4Controller() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsUsingPS4Controller"));
    struct Params_IsUsingPS4Controller {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsUsingPS4Controller params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsStudentLocatorBeaconActive(FString StudentName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsStudentLocatorBeaconActive"));
    struct Params_IsStudentLocatorBeaconActive {
        FString StudentName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsStudentLocatorBeaconActive params{};
    params.StudentName = (FString)StudentName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsSteamInBigPictureMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsSteamInBigPictureMode"));
    struct Params_IsSteamInBigPictureMode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSteamInBigPictureMode params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsPauseRequestedBy(FName RequesterName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsPauseRequestedBy"));
    struct Params_IsPauseRequestedBy {
        FName RequesterName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsPauseRequestedBy params{};
    params.RequesterName = (FName)RequesterName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsNabSackAlreadyEquipped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsNabSackAlreadyEquipped"));
    struct Params_IsNabSackAlreadyEquipped {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsNabSackAlreadyEquipped params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsMenuTabHidden(EPauseMenuPage MenuTab) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsMenuTabHidden"));
    struct Params_IsMenuTabHidden {
        EPauseMenuPage MenuTab; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsMenuTabHidden params{};
    params.MenuTab = (EPauseMenuPage)MenuTab;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsMenuReaderSupported() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsMenuReaderSupported"));
    struct Params_IsMenuReaderSupported {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMenuReaderSupported params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsMenuReaderEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsMenuReaderEnabled"));
    struct Params_IsMenuReaderEnabled {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMenuReaderEnabled params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::CanBackOutOfAvatarCreator() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.CanBackOutOfAvatarCreator"));
    struct Params_CanBackOutOfAvatarCreator {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanBackOutOfAvatarCreator params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UUIManager* UUIManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.Get"));
    struct Params_Get {
        UUIManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UUIManager*)params.ReturnValue;
}
bool UUIManager::IsMenuReaderCurrentLanguageSupported() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsMenuReaderCurrentLanguageSupported"));
    struct Params_IsMenuReaderCurrentLanguageSupported {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMenuReaderCurrentLanguageSupported params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsMenuReaderBusy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsMenuReaderBusy"));
    struct Params_IsMenuReaderBusy {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMenuReaderBusy params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsInPreGameplayState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsInPreGameplayState"));
    struct Params_IsInPreGameplayState {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInPreGameplayState params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsInFrontendLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsInFrontendLevel"));
    struct Params_IsInFrontendLevel {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsInFrontendLevel params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsGamepadTypeConnected(EGamepadType GamepadType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsGamepadTypeConnected"));
    struct Params_IsGamepadTypeConnected {
        EGamepadType GamepadType; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsGamepadTypeConnected params{};
    params.GamepadType = (EGamepadType)GamepadType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsDebugLoadingScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsDebugLoadingScreen"));
    struct Params_IsDebugLoadingScreen {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDebugLoadingScreen params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::IsActionKeyValid(FInputActionKeyMapping& InActionMapping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IsActionKeyValid"));
    struct Params_IsActionKeyValid {
        FInputActionKeyMapping InActionMapping; // 0x0
        bool ReturnValue; // 0x38
    }; // Size: 0x39
    Params_IsActionKeyValid params{};
    params.InActionMapping = (FInputActionKeyMapping)InActionMapping;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InActionMapping = params.InActionMapping;
    return (bool)params.ReturnValue;
}
void UUIManager::InteractComponentWidget(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.InteractComponentWidget"));
    struct Params_InteractComponentWidget {
        AActor* Target; // 0x0
    }; // Size: 0x8
    Params_InteractComponentWidget params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
}
bool UUIManager::InPauseMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.InPauseMode"));
    struct Params_InPauseMode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InPauseMode params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::ChallengeResultsScreenLoaded(UScreen* Screen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ChallengeResultsScreenLoaded"));
    struct Params_ChallengeResultsScreenLoaded {
        UScreen* Screen; // 0x0
    }; // Size: 0x8
    Params_ChallengeResultsScreenLoaded params{};
    params.Screen = (UScreen*)Screen;
    ProcessEvent(func, &params);
}
void UUIManager::ClearPauseMenuPageBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ClearPauseMenuPageBP"));
    struct Params_ClearPauseMenuPageBP {
    }; // Size: 0x0
    Params_ClearPauseMenuPageBP params{};
    ProcessEvent(func, &params);
}
EUIFactsheetMode UUIManager::GetFactsheetMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetFactsheetMode"));
    struct Params_GetFactsheetMode {
        EUIFactsheetMode ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetFactsheetMode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EUIFactsheetMode)params.ReturnValue;
}
bool UUIManager::InFieldGuideMenuTransition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.InFieldGuideMenuTransition"));
    struct Params_InFieldGuideMenuTransition {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InFieldGuideMenuTransition params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::InDarkArtsChallenge() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.InDarkArtsChallenge"));
    struct Params_InDarkArtsChallenge {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InDarkArtsChallenge params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::IconTextureLoadedCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.IconTextureLoadedCallback"));
    struct Params_IconTextureLoadedCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_IconTextureLoadedCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
AActor* UUIManager::GetVendorWorldPreviewActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetVendorWorldPreviewActor"));
    struct Params_GetVendorWorldPreviewActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetVendorWorldPreviewActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
EUIPlatformInputDevice UUIManager::GetUIPlatformInputDevice() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetUIPlatformInputDevice"));
    struct Params_GetUIPlatformInputDevice {
        EUIPlatformInputDevice ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetUIPlatformInputDevice params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EUIPlatformInputDevice)params.ReturnValue;
}
UUIManager* UUIManager::GetUIManagerPure() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetUIManagerPure"));
    struct Params_GetUIManagerPure {
        UUIManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetUIManagerPure params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UUIManager*)params.ReturnValue;
}
bool UUIManager::GetToMapFromBackButton() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetToMapFromBackButton"));
    struct Params_GetToMapFromBackButton {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetToMapFromBackButton params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIManager::GetTempPauseLock() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetTempPauseLock"));
    struct Params_GetTempPauseLock {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTempPauseLock params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
HouseIds UUIManager::GetSortingHatRecommendedHouse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetSortingHatRecommendedHouse"));
    struct Params_GetSortingHatRecommendedHouse {
        HouseIds ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSortingHatRecommendedHouse params{};
    ProcessEvent(func, &params);
    return (HouseIds)params.ReturnValue;
}
UScreenFadeWidget* UUIManager::GetScreenFadeWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetScreenFadeWidget"));
    struct Params_GetScreenFadeWidget {
        UScreenFadeWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetScreenFadeWidget params{};
    ProcessEvent(func, &params);
    return (UScreenFadeWidget*)params.ReturnValue;
}
APawn* UUIManager::GetPlayerPawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetPlayerPawn"));
    struct Params_GetPlayerPawn {
        APawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPlayerPawn params{};
    ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
FString UUIManager::GetDisplayedUserTag() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetDisplayedUserTag"));
    struct Params_GetDisplayedUserTag {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetDisplayedUserTag params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UUIManager::GetPlayerName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetPlayerName"));
    struct Params_GetPlayerName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPlayerName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UUIManager::AddNavPathPoints(TArray<FVector>& PathPoints, float Width, float Height) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.AddNavPathPoints"));
    struct Params_AddNavPathPoints {
        TArray<FVector> PathPoints; // 0x0
        float Width; // 0x10
        float Height; // 0x14
    }; // Size: 0x18
    Params_AddNavPathPoints params{};
    params.PathPoints = (TArray<FVector>)PathPoints;
    params.Width = (float)Width;
    params.Height = (float)Height;
    ProcessEvent(func, &params);
    PathPoints = params.PathPoints;
}
FString UUIManager::GetPlayerInventorySortPreference() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetPlayerInventorySortPreference"));
    struct Params_GetPlayerInventorySortPreference {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPlayerInventorySortPreference params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
HouseIds UUIManager::GetPlayerHouseEnum() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetPlayerHouseEnum"));
    struct Params_GetPlayerHouseEnum {
        HouseIds ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetPlayerHouseEnum params{};
    ProcessEvent(func, &params);
    return (HouseIds)params.ReturnValue;
}
void UUIManager::FieldGuideMenuStart() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.FieldGuideMenuStart"));
    struct Params_FieldGuideMenuStart {
    }; // Size: 0x0
    Params_FieldGuideMenuStart params{};
    ProcessEvent(func, &params);
}
FString UUIManager::GetPlayerHouse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetPlayerHouse"));
    struct Params_GetPlayerHouse {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPlayerHouse params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
AActor* UUIManager::GetCallOutComponentTarget(AActor* Target) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetCallOutComponentTarget"));
    struct Params_GetCallOutComponentTarget {
        AActor* Target; // 0x0
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetCallOutComponentTarget params{};
    params.Target = (AActor*)Target;
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
FString UUIManager::GetPlayerGender() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetPlayerGender"));
    struct Params_GetPlayerGender {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPlayerGender params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
UMapOverland* UUIManager::GetOverlandMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetOverlandMap"));
    struct Params_GetOverlandMap {
        UMapOverland* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOverlandMap params{};
    ProcessEvent(func, &params);
    return (UMapOverland*)params.ReturnValue;
}
void UUIManager::GetNewIndicatorCategory(FName CategoryName, TArray<FName>& NewIndicatorItems) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetNewIndicatorCategory"));
    struct Params_GetNewIndicatorCategory {
        FName CategoryName; // 0x0
        TArray<FName> NewIndicatorItems; // 0x8
    }; // Size: 0x18
    Params_GetNewIndicatorCategory params{};
    params.CategoryName = (FName)CategoryName;
    params.NewIndicatorItems = (TArray<FName>)NewIndicatorItems;
    ProcessEvent(func, &params);
    NewIndicatorItems = params.NewIndicatorItems;
}
int32_t UUIManager::GetNewFactCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetNewFactCount"));
    struct Params_GetNewFactCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNewFactCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UUIManager::GetMKBActionPairByName(FName ActionName, FInputActionKeyMapping& OutPrimary, FInputActionKeyMapping& OutAlternative, bool bTranspose) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetMKBActionPairByName"));
    struct Params_GetMKBActionPairByName {
        FName ActionName; // 0x0
        FInputActionKeyMapping OutPrimary; // 0x8
        FInputActionKeyMapping OutAlternative; // 0x40
        bool bTranspose; // 0x78
        bool ReturnValue; // 0x79
    }; // Size: 0x7a
    Params_GetMKBActionPairByName params{};
    params.ActionName = (FName)ActionName;
    params.OutPrimary = (FInputActionKeyMapping)OutPrimary;
    params.OutAlternative = (FInputActionKeyMapping)OutAlternative;
    params.bTranspose = (bool)bTranspose;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutPrimary = params.OutPrimary;
    OutAlternative = params.OutAlternative;
    return (bool)params.ReturnValue;
}
void UUIManager::DestroyVendorWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.DestroyVendorWorld"));
    struct Params_DestroyVendorWorld {
    }; // Size: 0x0
    Params_DestroyVendorWorld params{};
    ProcessEvent(func, &params);
}
bool UUIManager::GetMastermindTutorialInfo(FMastermindTutorialInfo& outMastermindTutorialInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetMastermindTutorialInfo"));
    struct Params_GetMastermindTutorialInfo {
        FMastermindTutorialInfo outMastermindTutorialInfo; // 0x0
        bool ReturnValue; // 0x68
    }; // Size: 0x69
    Params_GetMastermindTutorialInfo params{};
    params.outMastermindTutorialInfo = (FMastermindTutorialInfo)outMastermindTutorialInfo;
    ProcessEvent(func, &params);
    outMastermindTutorialInfo = params.outMastermindTutorialInfo;
    return (bool)params.ReturnValue;
}
bool UUIManager::GetMastermindPopupInfo(FMastermindPopupInfo& outMastermindPopupInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetMastermindPopupInfo"));
    struct Params_GetMastermindPopupInfo {
        FMastermindPopupInfo outMastermindPopupInfo; // 0x0
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetMastermindPopupInfo params{};
    params.outMastermindPopupInfo = (FMastermindPopupInfo)outMastermindPopupInfo;
    ProcessEvent(func, &params);
    outMastermindPopupInfo = params.outMastermindPopupInfo;
    return (bool)params.ReturnValue;
}
UMapSubSystem* UUIManager::GetMapSubSystem() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetMapSubSystem"));
    struct Params_GetMapSubSystem {
        UMapSubSystem* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapSubSystem params{};
    ProcessEvent(func, &params);
    return (UMapSubSystem*)params.ReturnValue;
}
void UUIManager::CorrectInputAxisKeyIfNeeded(FInputAxisKeyMapping& InInputAxisMapping, FInputAxisKeyMapping& OutInputAxisMapping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.CorrectInputAxisKeyIfNeeded"));
    struct Params_CorrectInputAxisKeyIfNeeded {
        FInputAxisKeyMapping InInputAxisMapping; // 0x0
        FInputAxisKeyMapping OutInputAxisMapping; // 0x38
    }; // Size: 0x70
    Params_CorrectInputAxisKeyIfNeeded params{};
    params.InInputAxisMapping = (FInputAxisKeyMapping)InInputAxisMapping;
    params.OutInputAxisMapping = (FInputAxisKeyMapping)OutInputAxisMapping;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InInputAxisMapping = params.InInputAxisMapping;
    OutInputAxisMapping = params.OutInputAxisMapping;
}
EInputDeviceUsed UUIManager::GetLastUsedInputDevice() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetLastUsedInputDevice"));
    struct Params_GetLastUsedInputDevice {
        EInputDeviceUsed ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLastUsedInputDevice params{};
    ProcessEvent(func, &params);
    return (EInputDeviceUsed)params.ReturnValue;
}
void UUIManager::DropLoadScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.DropLoadScreen"));
    struct Params_DropLoadScreen {
    }; // Size: 0x0
    Params_DropLoadScreen params{};
    ProcessEvent(func, &params);
}
void UUIManager::GetKeyIdsFromActionId(FString ActionId, TArray<FString>& OutKeyIds, bool Transpose, bool ForceGamepadKeys, bool ForceMouseKeyboardKeys) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetKeyIdsFromActionId"));
    struct Params_GetKeyIdsFromActionId {
        FString ActionId; // 0x0
        TArray<FString> OutKeyIds; // 0x10
        bool Transpose; // 0x20
        bool ForceGamepadKeys; // 0x21
        bool ForceMouseKeyboardKeys; // 0x22
    }; // Size: 0x23
    Params_GetKeyIdsFromActionId params{};
    params.ActionId = (FString)ActionId;
    params.OutKeyIds = (TArray<FString>)OutKeyIds;
    params.Transpose = (bool)Transpose;
    params.ForceGamepadKeys = (bool)ForceGamepadKeys;
    params.ForceMouseKeyboardKeys = (bool)ForceMouseKeyboardKeys;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutKeyIds = params.OutKeyIds;
}
bool UUIManager::GetInMenuTransition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetInMenuTransition"));
    struct Params_GetInMenuTransition {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetInMenuTransition params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::DestroyCompanionrWorld() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.DestroyCompanionrWorld"));
    struct Params_DestroyCompanionrWorld {
    }; // Size: 0x0
    Params_DestroyCompanionrWorld params{};
    ProcessEvent(func, &params);
}
UMapHogwarts* UUIManager::GetHogwartsMap() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetHogwartsMap"));
    struct Params_GetHogwartsMap {
        UMapHogwarts* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHogwartsMap params{};
    ProcessEvent(func, &params);
    return (UMapHogwarts*)params.ReturnValue;
}
TArray<EPauseMenuPage> UUIManager::GetHiddenMenuTabs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetHiddenMenuTabs"));
    struct Params_GetHiddenMenuTabs {
        TArray<EPauseMenuPage> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetHiddenMenuTabs params{};
    ProcessEvent(func, &params);
    return (TArray<EPauseMenuPage>)params.ReturnValue;
}
FString UUIManager::GetBuildNumber() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetBuildNumber"));
    struct Params_GetBuildNumber {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetBuildNumber params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
UFieldGuideMenu* UUIManager::GetFieldGuideWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetFieldGuideWidget"));
    struct Params_GetFieldGuideWidget {
        UFieldGuideMenu* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetFieldGuideWidget params{};
    ProcessEvent(func, &params);
    return (UFieldGuideMenu*)params.ReturnValue;
}
UMenuCursorWidget* UUIManager::GetCursorWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetCursorWidget"));
    struct Params_GetCursorWidget {
        UMenuCursorWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCursorWidget params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMenuCursorWidget*)params.ReturnValue;
}
UScreen* UUIManager::GetCompanionSelectionScreen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetCompanionSelectionScreen"));
    struct Params_GetCompanionSelectionScreen {
        UScreen* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCompanionSelectionScreen params{};
    ProcessEvent(func, &params);
    return (UScreen*)params.ReturnValue;
}
void UUIManager::GetAxisMappingByName(FName AxisName, TArray<FInputAxisKeyMapping>& OutMappings, bool bTranspose, bool bMouseAndKeyboardOnly, bool bIncludeUnbound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetAxisMappingByName"));
    struct Params_GetAxisMappingByName {
        FName AxisName; // 0x0
        TArray<FInputAxisKeyMapping> OutMappings; // 0x8
        bool bTranspose; // 0x18
        bool bMouseAndKeyboardOnly; // 0x19
        bool bIncludeUnbound; // 0x1a
    }; // Size: 0x1b
    Params_GetAxisMappingByName params{};
    params.AxisName = (FName)AxisName;
    params.OutMappings = (TArray<FInputAxisKeyMapping>)OutMappings;
    params.bTranspose = (bool)bTranspose;
    params.bMouseAndKeyboardOnly = (bool)bMouseAndKeyboardOnly;
    params.bIncludeUnbound = (bool)bIncludeUnbound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutMappings = params.OutMappings;
}
TArray<FMenuReaderVoice> UUIManager::GetAvailableVoices() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetAvailableVoices"));
    struct Params_GetAvailableVoices {
        TArray<FMenuReaderVoice> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAvailableVoices params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FMenuReaderVoice>)params.ReturnValue;
}
TArray<FRPGUIInfo> UUIManager::GetActiveBuffData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetActiveBuffData"));
    struct Params_GetActiveBuffData {
        TArray<FRPGUIInfo> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetActiveBuffData params{};
    ProcessEvent(func, &params);
    return (TArray<FRPGUIInfo>)params.ReturnValue;
}
void UUIManager::GetActionMappingByName(FName ActionName, TArray<FInputActionKeyMapping>& OutMappings, bool bTranspose, bool bMouseAndKeyboardOnly, bool bIncludeUnbound) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GetActionMappingByName"));
    struct Params_GetActionMappingByName {
        FName ActionName; // 0x0
        TArray<FInputActionKeyMapping> OutMappings; // 0x8
        bool bTranspose; // 0x18
        bool bMouseAndKeyboardOnly; // 0x19
        bool bIncludeUnbound; // 0x1a
    }; // Size: 0x1b
    Params_GetActionMappingByName params{};
    params.ActionName = (FName)ActionName;
    params.OutMappings = (TArray<FInputActionKeyMapping>)OutMappings;
    params.bTranspose = (bool)bTranspose;
    params.bMouseAndKeyboardOnly = (bool)bMouseAndKeyboardOnly;
    params.bIncludeUnbound = (bool)bIncludeUnbound;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutMappings = params.OutMappings;
}
void UUIManager::GameOverScreenLoaded(UScreen* Screen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.GameOverScreenLoaded"));
    struct Params_GameOverScreenLoaded {
        UScreen* Screen; // 0x0
    }; // Size: 0x8
    Params_GameOverScreenLoaded params{};
    params.Screen = (UScreen*)Screen;
    ProcessEvent(func, &params);
}
void UUIManager::ForceRebuildKeyMapsFromQWERTY() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ForceRebuildKeyMapsFromQWERTY"));
    struct Params_ForceRebuildKeyMapsFromQWERTY {
    }; // Size: 0x0
    Params_ForceRebuildKeyMapsFromQWERTY params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UUIManager::FadeOutToColor(float Duration, FLinearColor TargetColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.FadeOutToColor"));
    struct Params_FadeOutToColor {
        float Duration; // 0x0
        FLinearColor TargetColor; // 0x4
    }; // Size: 0x14
    Params_FadeOutToColor params{};
    params.Duration = (float)Duration;
    params.TargetColor = (FLinearColor)TargetColor;
    ProcessEvent(func, &params);
}
void UUIManager::FadeOut(float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.FadeOut"));
    struct Params_FadeOut {
        float Duration; // 0x0
    }; // Size: 0x4
    Params_FadeOut params{};
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
}
void UUIManager::FadeIn(float Duration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.FadeIn"));
    struct Params_FadeIn {
        float Duration; // 0x0
    }; // Size: 0x4
    Params_FadeIn params{};
    params.Duration = (float)Duration;
    ProcessEvent(func, &params);
}
void UUIManager::ExitFieldGuideWithReason(EFieldGuideExitReasons ExitReason, bool SkipFadeScreen, int32_t CharacterID, FString Filename, FString FastTravelName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ExitFieldGuideWithReason"));
    struct Params_ExitFieldGuideWithReason {
        EFieldGuideExitReasons ExitReason; // 0x0
        bool SkipFadeScreen; // 0x1
        char pad_2[0x2];
        int32_t CharacterID; // 0x4
        FString Filename; // 0x8
        FString FastTravelName; // 0x18
    }; // Size: 0x28
    Params_ExitFieldGuideWithReason params{};
    params.ExitReason = (EFieldGuideExitReasons)ExitReason;
    params.SkipFadeScreen = (bool)SkipFadeScreen;
    params.CharacterID = (int32_t)CharacterID;
    params.Filename = (FString)Filename;
    params.FastTravelName = (FString)FastTravelName;
    ProcessEvent(func, &params);
}
bool UUIManager::DoesRightTriggerCastStupefy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.DoesRightTriggerCastStupefy"));
    struct Params_DoesRightTriggerCastStupefy {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DoesRightTriggerCastStupefy params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIManager::DebugTriggerChallengeUpdatedNotification(FName ChallengeID, FName ChallengeCategory, int32_t CompletedAmt, int32_t TotalRequired) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.DebugTriggerChallengeUpdatedNotification"));
    struct Params_DebugTriggerChallengeUpdatedNotification {
        FName ChallengeID; // 0x0
        FName ChallengeCategory; // 0x8
        int32_t CompletedAmt; // 0x10
        int32_t TotalRequired; // 0x14
    }; // Size: 0x18
    Params_DebugTriggerChallengeUpdatedNotification params{};
    params.ChallengeID = (FName)ChallengeID;
    params.ChallengeCategory = (FName)ChallengeCategory;
    params.CompletedAmt = (int32_t)CompletedAmt;
    params.TotalRequired = (int32_t)TotalRequired;
    ProcessEvent(func, &params);
}
void UUIManager::DebugTriggerChallengeUnlockedNotification(FName ChallengeID, FName ChallengeCategory, int32_t TotalRequired) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.DebugTriggerChallengeUnlockedNotification"));
    struct Params_DebugTriggerChallengeUnlockedNotification {
        FName ChallengeID; // 0x0
        FName ChallengeCategory; // 0x8
        int32_t TotalRequired; // 0x10
    }; // Size: 0x14
    Params_DebugTriggerChallengeUnlockedNotification params{};
    params.ChallengeID = (FName)ChallengeID;
    params.ChallengeCategory = (FName)ChallengeCategory;
    params.TotalRequired = (int32_t)TotalRequired;
    ProcessEvent(func, &params);
}
void UUIManager::DebugTriggerChallengeCompleteNotification(FName ChallengeID, FName ChallengeCategory, int32_t CompletedLevel, int32_t TotalLevels, int32_t TotalInstancesForLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.DebugTriggerChallengeCompleteNotification"));
    struct Params_DebugTriggerChallengeCompleteNotification {
        FName ChallengeID; // 0x0
        FName ChallengeCategory; // 0x8
        int32_t CompletedLevel; // 0x10
        int32_t TotalLevels; // 0x14
        int32_t TotalInstancesForLevel; // 0x18
    }; // Size: 0x1c
    Params_DebugTriggerChallengeCompleteNotification params{};
    params.ChallengeID = (FName)ChallengeID;
    params.ChallengeCategory = (FName)ChallengeCategory;
    params.CompletedLevel = (int32_t)CompletedLevel;
    params.TotalLevels = (int32_t)TotalLevels;
    params.TotalInstancesForLevel = (int32_t)TotalInstancesForLevel;
    ProcessEvent(func, &params);
}
void UUIManager::CycleControlModeInputCheck1() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.CycleControlModeInputCheck1"));
    struct Params_CycleControlModeInputCheck1 {
    }; // Size: 0x0
    Params_CycleControlModeInputCheck1 params{};
    ProcessEvent(func, &params);
}
void UUIManager::CreateHUDLog(bool pShow, FString Group, FString pContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.CreateHUDLog"));
    struct Params_CreateHUDLog {
        bool pShow; // 0x0
        char pad_1[0x7];
        FString Group; // 0x8
        FString pContext; // 0x18
    }; // Size: 0x28
    Params_CreateHUDLog params{};
    params.pShow = (bool)pShow;
    params.Group = (FString)Group;
    params.pContext = (FString)pContext;
    ProcessEvent(func, &params);
}
void UUIManager::ClearHintMessage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ClearHintMessage"));
    struct Params_ClearHintMessage {
    }; // Size: 0x0
    Params_ClearHintMessage params{};
    ProcessEvent(func, &params);
}
void UUIManager::ClearCurrentLocationName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ClearCurrentLocationName"));
    struct Params_ClearCurrentLocationName {
    }; // Size: 0x0
    Params_ClearCurrentLocationName params{};
    ProcessEvent(func, &params);
}
void UUIManager::ChangeMenuPage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.ChangeMenuPage"));
    struct Params_ChangeMenuPage {
    }; // Size: 0x0
    Params_ChangeMenuPage params{};
    ProcessEvent(func, &params);
}
void UUIManager::AdvanceTime(FTimespan DeltaTimeAdvance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.AdvanceTime"));
    struct Params_AdvanceTime {
        FTimespan DeltaTimeAdvance; // 0x0
    }; // Size: 0x8
    Params_AdvanceTime params{};
    params.DeltaTimeAdvance = (FTimespan)DeltaTimeAdvance;
    ProcessEvent(func, &params);
}
void UUIManager::AddPathStartEnd(FVector Start, FVector End, float Width, float Height) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.AddPathStartEnd"));
    struct Params_AddPathStartEnd {
        FVector Start; // 0x0
        FVector End; // 0xc
        float Width; // 0x18
        float Height; // 0x1c
    }; // Size: 0x20
    Params_AddPathStartEnd params{};
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.Width = (float)Width;
    params.Height = (float)Height;
    ProcessEvent(func, &params);
}
void UUIManager::AddPathPoints(TArray<FVector>& PathPoints, float Width, float Height) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.AddPathPoints"));
    struct Params_AddPathPoints {
        TArray<FVector> PathPoints; // 0x0
        float Width; // 0x10
        float Height; // 0x14
    }; // Size: 0x18
    Params_AddPathPoints params{};
    params.PathPoints = (TArray<FVector>)PathPoints;
    params.Width = (float)Width;
    params.Height = (float)Height;
    ProcessEvent(func, &params);
    PathPoints = params.PathPoints;
}
void UUIManager::AddNewIndicatorItem(FName CategoryName, FName ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIManager.AddNewIndicatorItem"));
    struct Params_AddNewIndicatorItem {
        FName CategoryName; // 0x0
        FName ItemName; // 0x8
    }; // Size: 0x10
    Params_AddNewIndicatorItem params{};
    params.CategoryName = (FName)CategoryName;
    params.ItemName = (FName)ItemName;
    ProcessEvent(func, &params);
}
