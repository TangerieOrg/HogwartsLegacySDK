#pragma once
#include <cstdint>
#include "EUIAsyncLoadPriority.hpp"
#include "FIntPoint.hpp"
#include "FKey.hpp"
#include "FSlateFontInfo.hpp"
#include "FSoftObjectPath.hpp"
#include "FTimespan.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UUserWidget;
struct FMenuReaderVoice;
class APlayerController;
class UWidget;
class AActor;
class UObject;
class UClass;
class AController;
class ANPC_Character;
struct FDateTime;
class UImage;
class UPanelWidget;
class UTexture2D;
#pragma pack(push, 1)
class UUIBlueprintFunctionLibrary : public UBlueprintFunctionLibrary {
public:
    static UUIBlueprintFunctionLibrary* StaticClass();
    static bool WorldToViewport(FVector WorldPos, FVector2D& o_Point, bool LockToViewableSpace);
    static FString UnicodeFilter(FString InputStr);
    static void SwitchToGamePadControlScheme(FName ControlSchemeName);
    static void ShowOutlines(APlayerController* PC);
    static void ShowInspectableWithCallback(FString InspectableID);
    static void ShowInspectable(FString InspectableID);
    static bool SetInventoryIconOverride(FString ItemId, FName Variation, FString& OutDisplayName, FString& OutIconName, bool& OutIsNameTranslatable);
    static bool RunningWithEpicGamesStore();
    static void RotateMenuActors(float AxisValue, float rotateSpeedMultiplier, TArray<AActor*> Actors);
    static void RevertToDefaultInputMappings();
    static void RestartApplication();
    static int32_t PlayOwlMailDialog(UObject* WorldContextObj, FString MailID);
    static bool NotEqual_MenuReaderVoiceMenuReaderVoice(FMenuReaderVoice& arg1, FMenuReaderVoice& arg2);
    FVector2D MeasureStringLength(FString TextString, FSlateFontInfo FontInfo);
    static void LogIntroMessage(UObject* WorldContextObject);
    static FString KeyToString(FKey Key);
    static bool IsSteamRunningOnSteamDeck();
    static bool IsSteamInBigPictureMode();
    static bool IsSpellOrToolBlacklisted(FString ItemName);
    static bool IsPCPlatform(bool bIsSteamDeckAlsoPC);
    static bool IsGameInForeground();
    static bool IsBeastMeshReady(AActor* Actor);
    static bool IconExistsInTable(FString IconTextureName);
    static void HideOutlines(APlayerController* PC);
    static void GotoScreenFromCode(UObject* WorldContextObject, UUserWidget* OldScreenReference, UClass* NewScreenClass);
    static UUserWidget* GetWidgetParentOfClass(UWidget* ChildWidget, UClass* WidgetClass);
    static void GetTimespanTextWithMilliseconds(FTimespan Timespan);
    static bool GetTimeSinceLastSave(FTimespan& OutTimespan);
    static int32_t GetSalonChangeCost();
    static float GetPotionDuration(FName& PotionName);
    static FTransform GetPlayerSpawnLocation(AController* PlayerController);
    static FVector GetNPCCharacterDamageNumberOffset(ANPC_Character* NPCCharacter);
    static void GetLocalizedDateTimeText(FDateTime& InDateTime);
    static int32_t GetHousePoints(FString HouseName);
    static float GetGamma();
    static void GetDisplayedPlayTime(FString TotalPlayTimeString);
    static FString GetDisplayedMissionIcon(FName MissionID);
    static FString GetCurrentLanguage();
    static FName GetCurrentGamePadControlScheme();
    static TArray<FIntPoint> GetAvailableResolutions();
    static void GetAllPanelChildrenOfWidgetClass(UPanelWidget* PanelWidgetParent, UClass* WidgetClass, TArray<UWidget*>& FoundWidgets);
    static FVector GetActorCalloutComponentOffset(AActor* Actor);
    static float GetAbilityDurationRemaining(AActor* AbilityOwner, FName& AbilityName);
    static bool GetAbilityActive(AActor* AbilityOwner, FName& AbilityName);
    static void FloatToFractionalText(float Value, int32_t Precision);
    static UTexture2D* FindIconTexture2D(FString IconTextureName);
    static bool EqualEqual_MenuReaderVoiceMenuReaderVoice(FMenuReaderVoice& arg1, FMenuReaderVoice& arg2);
    static bool CopyToClipboard(FString StringToCopy);
    static bool CanUseHippogriff();
    static bool CanUseGraphorn();
    static bool CanUseBroom(bool bIncludeAvatarState);
    static void AsyncLoadUITexture();
    static void AsyncLoadFont(FSoftObjectPath FontPath);
    static void AsyncLoadActionSelectionUI();
    static void AsyncFindIconTexWithCallback(FString IconTextureName);
    static bool AsyncFindIconTexture2D(FString IconTextureName, UImage* InImage, bool MatchSize, EUIAsyncLoadPriority Priority, bool bIsLoadingScreen);
    static void AsyncCreateSpellMiniGame(FName GameName, bool UseDefaultCamera);
    static void AddPlayerHousePoints(int32_t Points);
    static void AddHousePoints(FString HouseName, int32_t Points);
}; // Size: 0x28
#pragma pack(pop)
