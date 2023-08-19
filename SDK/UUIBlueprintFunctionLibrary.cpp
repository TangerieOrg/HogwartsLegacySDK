#include "AActor.hpp"
#include "AController.hpp"
#include "ANPC_Character.hpp"
#include "APlayerController.hpp"
#include "EUIAsyncLoadPriority.hpp"
#include "FDateTime.hpp"
#include "FIntPoint.hpp"
#include "FKey.hpp"
#include "FMenuReaderVoice.hpp"
#include "FSlateFontInfo.hpp"
#include "FSoftObjectPath.hpp"
#include "FTimespan.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPanelWidget.hpp"
#include "UTexture2D.hpp"
#include "UUIBlueprintFunctionLibrary.hpp"
#include "UUserWidget.hpp"
#include "UWidget.hpp"
void UUIBlueprintFunctionLibrary::AsyncLoadFont(FSoftObjectPath FontPath) {}
void UUIBlueprintFunctionLibrary::ShowInspectable(FString InspectableID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.ShowInspectable"));
    struct Params_ShowInspectable {
        FString InspectableID; // 0x0
    }; // Size: 0x10
    Params_ShowInspectable params{};
    params.InspectableID = (FString)InspectableID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UUIBlueprintFunctionLibrary::PlayOwlMailDialog(UObject* WorldContextObj, FString MailID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.PlayOwlMailDialog"));
    struct Params_PlayOwlMailDialog {
        UObject* WorldContextObj; // 0x0
        FString MailID; // 0x8
        int32_t ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_PlayOwlMailDialog params{};
    params.WorldContextObj = (UObject*)WorldContextObj;
    params.MailID = (FString)MailID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UUIBlueprintFunctionLibrary* UUIBlueprintFunctionLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UIBlueprintFunctionLibrary");
    return (UUIBlueprintFunctionLibrary*)res;
}
void UUIBlueprintFunctionLibrary::ShowOutlines(APlayerController* PC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.ShowOutlines"));
    struct Params_ShowOutlines {
        APlayerController* PC; // 0x0
    }; // Size: 0x8
    Params_ShowOutlines params{};
    params.PC = (APlayerController*)PC;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UUIBlueprintFunctionLibrary::AsyncFindIconTexture2D(FString IconTextureName, UImage* InImage, bool MatchSize, EUIAsyncLoadPriority Priority, bool bIsLoadingScreen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.AsyncFindIconTexture2D"));
    struct Params_AsyncFindIconTexture2D {
        FString IconTextureName; // 0x0
        UImage* InImage; // 0x10
        bool MatchSize; // 0x18
        EUIAsyncLoadPriority Priority; // 0x19
        bool bIsLoadingScreen; // 0x1a
        bool ReturnValue; // 0x1b
    }; // Size: 0x1c
    Params_AsyncFindIconTexture2D params{};
    params.IconTextureName = (FString)IconTextureName;
    params.InImage = (UImage*)InImage;
    params.MatchSize = (bool)MatchSize;
    params.Priority = (EUIAsyncLoadPriority)Priority;
    params.bIsLoadingScreen = (bool)bIsLoadingScreen;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UUIBlueprintFunctionLibrary::UnicodeFilter(FString InputStr) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.UnicodeFilter"));
    struct Params_UnicodeFilter {
        FString InputStr; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_UnicodeFilter params{};
    params.InputStr = (FString)InputStr;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UUIBlueprintFunctionLibrary::GetAllPanelChildrenOfWidgetClass(UPanelWidget* PanelWidgetParent, UClass* WidgetClass, TArray<UWidget*>& FoundWidgets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetAllPanelChildrenOfWidgetClass"));
    struct Params_GetAllPanelChildrenOfWidgetClass {
        UPanelWidget* PanelWidgetParent; // 0x0
        UClass* WidgetClass; // 0x8
        TArray<UWidget*> FoundWidgets; // 0x10
    }; // Size: 0x20
    Params_GetAllPanelChildrenOfWidgetClass params{};
    params.PanelWidgetParent = (UPanelWidget*)PanelWidgetParent;
    params.WidgetClass = (UClass*)WidgetClass;
    params.FoundWidgets = (TArray<UWidget*>)FoundWidgets;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FoundWidgets = params.FoundWidgets;
}
void UUIBlueprintFunctionLibrary::RestartApplication() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.RestartApplication"));
    struct Params_RestartApplication {
    }; // Size: 0x0
    Params_RestartApplication params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UUIBlueprintFunctionLibrary::RotateMenuActors(float AxisValue, float rotateSpeedMultiplier, TArray<AActor*> Actors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.RotateMenuActors"));
    struct Params_RotateMenuActors {
        float AxisValue; // 0x0
        float rotateSpeedMultiplier; // 0x4
        TArray<AActor*> Actors; // 0x8
    }; // Size: 0x18
    Params_RotateMenuActors params{};
    params.AxisValue = (float)AxisValue;
    params.rotateSpeedMultiplier = (float)rotateSpeedMultiplier;
    params.Actors = (TArray<AActor*>)Actors;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UUIBlueprintFunctionLibrary::WorldToViewport(FVector WorldPos, FVector2D& o_Point, bool LockToViewableSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.WorldToViewport"));
    struct Params_WorldToViewport {
        FVector WorldPos; // 0x0
        FVector2D o_Point; // 0xc
        bool LockToViewableSpace; // 0x14
        bool ReturnValue; // 0x15
    }; // Size: 0x16
    Params_WorldToViewport params{};
    params.WorldPos = (FVector)WorldPos;
    params.o_Point = (FVector2D)o_Point;
    params.LockToViewableSpace = (bool)LockToViewableSpace;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    o_Point = params.o_Point;
    return (bool)params.ReturnValue;
}
bool UUIBlueprintFunctionLibrary::IsBeastMeshReady(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.IsBeastMeshReady"));
    struct Params_IsBeastMeshReady {
        AActor* Actor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsBeastMeshReady params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIBlueprintFunctionLibrary::SwitchToGamePadControlScheme(FName ControlSchemeName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.SwitchToGamePadControlScheme"));
    struct Params_SwitchToGamePadControlScheme {
        FName ControlSchemeName; // 0x0
    }; // Size: 0x8
    Params_SwitchToGamePadControlScheme params{};
    params.ControlSchemeName = (FName)ControlSchemeName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UUIBlueprintFunctionLibrary::CanUseGraphorn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.CanUseGraphorn"));
    struct Params_CanUseGraphorn {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanUseGraphorn params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIBlueprintFunctionLibrary::SetInventoryIconOverride(FString ItemId, FName Variation, FString& OutDisplayName, FString& OutIconName, bool& OutIsNameTranslatable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.SetInventoryIconOverride"));
    struct Params_SetInventoryIconOverride {
        FString ItemId; // 0x0
        FName Variation; // 0x10
        FString OutDisplayName; // 0x18
        FString OutIconName; // 0x28
        bool OutIsNameTranslatable; // 0x38
        bool ReturnValue; // 0x39
    }; // Size: 0x3a
    Params_SetInventoryIconOverride params{};
    params.ItemId = (FString)ItemId;
    params.Variation = (FName)Variation;
    params.OutDisplayName = (FString)OutDisplayName;
    params.OutIconName = (FString)OutIconName;
    params.OutIsNameTranslatable = (bool)OutIsNameTranslatable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutDisplayName = params.OutDisplayName;
    OutIconName = params.OutIconName;
    OutIsNameTranslatable = params.OutIsNameTranslatable;
    return (bool)params.ReturnValue;
}
void UUIBlueprintFunctionLibrary::ShowInspectableWithCallback(FString InspectableID) {}
bool UUIBlueprintFunctionLibrary::RunningWithEpicGamesStore() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.RunningWithEpicGamesStore"));
    struct Params_RunningWithEpicGamesStore {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_RunningWithEpicGamesStore params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIBlueprintFunctionLibrary::IsSpellOrToolBlacklisted(FString ItemName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.IsSpellOrToolBlacklisted"));
    struct Params_IsSpellOrToolBlacklisted {
        FString ItemName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsSpellOrToolBlacklisted params{};
    params.ItemName = (FString)ItemName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIBlueprintFunctionLibrary::RevertToDefaultInputMappings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.RevertToDefaultInputMappings"));
    struct Params_RevertToDefaultInputMappings {
    }; // Size: 0x0
    Params_RevertToDefaultInputMappings params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UUIBlueprintFunctionLibrary::NotEqual_MenuReaderVoiceMenuReaderVoice(FMenuReaderVoice& arg1, FMenuReaderVoice& arg2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.NotEqual_MenuReaderVoiceMenuReaderVoice"));
    struct Params_NotEqual_MenuReaderVoiceMenuReaderVoice {
        FMenuReaderVoice arg1; // 0x0
        FMenuReaderVoice arg2; // 0x30
        bool ReturnValue; // 0x60
    }; // Size: 0x61
    Params_NotEqual_MenuReaderVoiceMenuReaderVoice params{};
    params.arg1 = (FMenuReaderVoice)arg1;
    params.arg2 = (FMenuReaderVoice)arg2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    arg1 = params.arg1;
    arg2 = params.arg2;
    return (bool)params.ReturnValue;
}
bool UUIBlueprintFunctionLibrary::CanUseBroom(bool bIncludeAvatarState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.CanUseBroom"));
    struct Params_CanUseBroom {
        bool bIncludeAvatarState; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_CanUseBroom params{};
    params.bIncludeAvatarState = (bool)bIncludeAvatarState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FVector2D UUIBlueprintFunctionLibrary::MeasureStringLength(FString TextString, FSlateFontInfo FontInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.MeasureStringLength"));
    struct Params_MeasureStringLength {
        FString TextString; // 0x0
        FSlateFontInfo FontInfo; // 0x10
        FVector2D ReturnValue; // 0x68
    }; // Size: 0x70
    Params_MeasureStringLength params{};
    params.TextString = (FString)TextString;
    params.FontInfo = (FSlateFontInfo)FontInfo;
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
int32_t UUIBlueprintFunctionLibrary::GetHousePoints(FString HouseName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetHousePoints"));
    struct Params_GetHousePoints {
        FString HouseName; // 0x0
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetHousePoints params{};
    params.HouseName = (FString)HouseName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UUIBlueprintFunctionLibrary::LogIntroMessage(UObject* WorldContextObject) {}
FVector UUIBlueprintFunctionLibrary::GetNPCCharacterDamageNumberOffset(ANPC_Character* NPCCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetNPCCharacterDamageNumberOffset"));
    struct Params_GetNPCCharacterDamageNumberOffset {
        ANPC_Character* NPCCharacter; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetNPCCharacterDamageNumberOffset params{};
    params.NPCCharacter = (ANPC_Character*)NPCCharacter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
bool UUIBlueprintFunctionLibrary::IsSteamRunningOnSteamDeck() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.IsSteamRunningOnSteamDeck"));
    struct Params_IsSteamRunningOnSteamDeck {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSteamRunningOnSteamDeck params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UUIBlueprintFunctionLibrary::KeyToString(FKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.KeyToString"));
    struct Params_KeyToString {
        FKey Key; // 0x0
        FString ReturnValue; // 0x18
    }; // Size: 0x28
    Params_KeyToString params{};
    params.Key = (FKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
float UUIBlueprintFunctionLibrary::GetPotionDuration(FName& PotionName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetPotionDuration"));
    struct Params_GetPotionDuration {
        FName PotionName; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetPotionDuration params{};
    params.PotionName = (FName)PotionName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PotionName = params.PotionName;
    return (float)params.ReturnValue;
}
bool UUIBlueprintFunctionLibrary::IsSteamInBigPictureMode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.IsSteamInBigPictureMode"));
    struct Params_IsSteamInBigPictureMode {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsSteamInBigPictureMode params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIBlueprintFunctionLibrary::IsGameInForeground() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.IsGameInForeground"));
    struct Params_IsGameInForeground {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsGameInForeground params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIBlueprintFunctionLibrary::IsPCPlatform(bool bIsSteamDeckAlsoPC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.IsPCPlatform"));
    struct Params_IsPCPlatform {
        bool bIsSteamDeckAlsoPC; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsPCPlatform params{};
    params.bIsSteamDeckAlsoPC = (bool)bIsSteamDeckAlsoPC;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIBlueprintFunctionLibrary::IconExistsInTable(FString IconTextureName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.IconExistsInTable"));
    struct Params_IconExistsInTable {
        FString IconTextureName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IconExistsInTable params{};
    params.IconTextureName = (FString)IconTextureName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UUserWidget* UUIBlueprintFunctionLibrary::GetWidgetParentOfClass(UWidget* ChildWidget, UClass* WidgetClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetWidgetParentOfClass"));
    struct Params_GetWidgetParentOfClass {
        UWidget* ChildWidget; // 0x0
        UClass* WidgetClass; // 0x8
        UUserWidget* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetWidgetParentOfClass params{};
    params.ChildWidget = (UWidget*)ChildWidget;
    params.WidgetClass = (UClass*)WidgetClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UUserWidget*)params.ReturnValue;
}
void UUIBlueprintFunctionLibrary::HideOutlines(APlayerController* PC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.HideOutlines"));
    struct Params_HideOutlines {
        APlayerController* PC; // 0x0
    }; // Size: 0x8
    Params_HideOutlines params{};
    params.PC = (APlayerController*)PC;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
FName UUIBlueprintFunctionLibrary::GetCurrentGamePadControlScheme() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetCurrentGamePadControlScheme"));
    struct Params_GetCurrentGamePadControlScheme {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCurrentGamePadControlScheme params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UUIBlueprintFunctionLibrary::GotoScreenFromCode(UObject* WorldContextObject, UUserWidget* OldScreenReference, UClass* NewScreenClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GotoScreenFromCode"));
    struct Params_GotoScreenFromCode {
        UObject* WorldContextObject; // 0x0
        UUserWidget* OldScreenReference; // 0x8
        UClass* NewScreenClass; // 0x10
    }; // Size: 0x18
    Params_GotoScreenFromCode params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.OldScreenReference = (UUserWidget*)OldScreenReference;
    params.NewScreenClass = (UClass*)NewScreenClass;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UUIBlueprintFunctionLibrary::GetDisplayedPlayTime(FString TotalPlayTimeString) {}
void UUIBlueprintFunctionLibrary::GetLocalizedDateTimeText(FDateTime& InDateTime) {}
void UUIBlueprintFunctionLibrary::GetTimespanTextWithMilliseconds(FTimespan Timespan) {}
bool UUIBlueprintFunctionLibrary::GetTimeSinceLastSave(FTimespan& OutTimespan) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetTimeSinceLastSave"));
    struct Params_GetTimeSinceLastSave {
        FTimespan OutTimespan; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetTimeSinceLastSave params{};
    params.OutTimespan = (FTimespan)OutTimespan;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutTimespan = params.OutTimespan;
    return (bool)params.ReturnValue;
}
int32_t UUIBlueprintFunctionLibrary::GetSalonChangeCost() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetSalonChangeCost"));
    struct Params_GetSalonChangeCost {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSalonChangeCost params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FTransform UUIBlueprintFunctionLibrary::GetPlayerSpawnLocation(AController* PlayerController) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetPlayerSpawnLocation"));
    struct Params_GetPlayerSpawnLocation {
        AController* PlayerController; // 0x0
        char pad_8[0x8];
        FTransform ReturnValue; // 0x10
    }; // Size: 0x40
    Params_GetPlayerSpawnLocation params{};
    params.PlayerController = (AController*)PlayerController;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
void UUIBlueprintFunctionLibrary::AsyncLoadUITexture() {}
void UUIBlueprintFunctionLibrary::FloatToFractionalText(float Value, int32_t Precision) {}
float UUIBlueprintFunctionLibrary::GetGamma() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetGamma"));
    struct Params_GetGamma {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetGamma params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
FString UUIBlueprintFunctionLibrary::GetDisplayedMissionIcon(FName MissionID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetDisplayedMissionIcon"));
    struct Params_GetDisplayedMissionIcon {
        FName MissionID; // 0x0
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetDisplayedMissionIcon params{};
    params.MissionID = (FName)MissionID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FString UUIBlueprintFunctionLibrary::GetCurrentLanguage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetCurrentLanguage"));
    struct Params_GetCurrentLanguage {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetCurrentLanguage params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
FVector UUIBlueprintFunctionLibrary::GetActorCalloutComponentOffset(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetActorCalloutComponentOffset"));
    struct Params_GetActorCalloutComponentOffset {
        AActor* Actor; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetActorCalloutComponentOffset params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
TArray<FIntPoint> UUIBlueprintFunctionLibrary::GetAvailableResolutions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetAvailableResolutions"));
    struct Params_GetAvailableResolutions {
        TArray<FIntPoint> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAvailableResolutions params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FIntPoint>)params.ReturnValue;
}
float UUIBlueprintFunctionLibrary::GetAbilityDurationRemaining(AActor* AbilityOwner, FName& AbilityName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetAbilityDurationRemaining"));
    struct Params_GetAbilityDurationRemaining {
        AActor* AbilityOwner; // 0x0
        FName AbilityName; // 0x8
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetAbilityDurationRemaining params{};
    params.AbilityOwner = (AActor*)AbilityOwner;
    params.AbilityName = (FName)AbilityName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    AbilityName = params.AbilityName;
    return (float)params.ReturnValue;
}
void UUIBlueprintFunctionLibrary::AsyncLoadActionSelectionUI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.AsyncLoadActionSelectionUI"));
    struct Params_AsyncLoadActionSelectionUI {
    }; // Size: 0x0
    Params_AsyncLoadActionSelectionUI params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UUIBlueprintFunctionLibrary::GetAbilityActive(AActor* AbilityOwner, FName& AbilityName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.GetAbilityActive"));
    struct Params_GetAbilityActive {
        AActor* AbilityOwner; // 0x0
        FName AbilityName; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetAbilityActive params{};
    params.AbilityOwner = (AActor*)AbilityOwner;
    params.AbilityName = (FName)AbilityName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    AbilityName = params.AbilityName;
    return (bool)params.ReturnValue;
}
void UUIBlueprintFunctionLibrary::AddPlayerHousePoints(int32_t Points) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.AddPlayerHousePoints"));
    struct Params_AddPlayerHousePoints {
        int32_t Points; // 0x0
    }; // Size: 0x4
    Params_AddPlayerHousePoints params{};
    params.Points = (int32_t)Points;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UTexture2D* UUIBlueprintFunctionLibrary::FindIconTexture2D(FString IconTextureName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.FindIconTexture2D"));
    struct Params_FindIconTexture2D {
        FString IconTextureName; // 0x0
        UTexture2D* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_FindIconTexture2D params{};
    params.IconTextureName = (FString)IconTextureName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTexture2D*)params.ReturnValue;
}
bool UUIBlueprintFunctionLibrary::EqualEqual_MenuReaderVoiceMenuReaderVoice(FMenuReaderVoice& arg1, FMenuReaderVoice& arg2) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.EqualEqual_MenuReaderVoiceMenuReaderVoice"));
    struct Params_EqualEqual_MenuReaderVoiceMenuReaderVoice {
        FMenuReaderVoice arg1; // 0x0
        FMenuReaderVoice arg2; // 0x30
        bool ReturnValue; // 0x60
    }; // Size: 0x61
    Params_EqualEqual_MenuReaderVoiceMenuReaderVoice params{};
    params.arg1 = (FMenuReaderVoice)arg1;
    params.arg2 = (FMenuReaderVoice)arg2;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    arg1 = params.arg1;
    arg2 = params.arg2;
    return (bool)params.ReturnValue;
}
bool UUIBlueprintFunctionLibrary::CopyToClipboard(FString StringToCopy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.CopyToClipboard"));
    struct Params_CopyToClipboard {
        FString StringToCopy; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_CopyToClipboard params{};
    params.StringToCopy = (FString)StringToCopy;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UUIBlueprintFunctionLibrary::CanUseHippogriff() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.CanUseHippogriff"));
    struct Params_CanUseHippogriff {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanUseHippogriff params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUIBlueprintFunctionLibrary::AsyncFindIconTexWithCallback(FString IconTextureName) {}
void UUIBlueprintFunctionLibrary::AsyncCreateSpellMiniGame(FName GameName, bool UseDefaultCamera) {}
void UUIBlueprintFunctionLibrary::AddHousePoints(FString HouseName, int32_t Points) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIBlueprintFunctionLibrary.AddHousePoints"));
    struct Params_AddHousePoints {
        FString HouseName; // 0x0
        int32_t Points; // 0x10
    }; // Size: 0x14
    Params_AddHousePoints params{};
    params.HouseName = (FString)HouseName;
    params.Points = (int32_t)Points;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
