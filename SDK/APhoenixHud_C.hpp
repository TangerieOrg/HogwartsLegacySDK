#pragma once
#include <cstdint>
#include "APhoenixHUD.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USceneComponent;
class UUserWidget;
class UBP_HUD_Audio_C;
class APlayerController;
class UUI_BP_PhoenixHUDWidget_C;
class UUIManager;
class UObject;
class UUI_BP_Subtitle_HUD_C;
#pragma pack(push, 1)
class APhoenixHud_C : public APhoenixHUD {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x610
    USceneComponent* DefaultSceneRoot; // 0x618
    UUserWidget* Subtitle_HUD; // 0x620
    bool HideHUD_Override; // 0x628
    bool LockVisibility; // 0x629
    char pad_62a[0x6];
    UBP_HUD_Audio_C* AudioHUD; // 0x630
    static APhoenixHud_C* StaticClass();
    void GetSubtitleHUD(UUserWidget*& SubtitleHUD);
    void MakeHudWidget(APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_PhoenixHUDWidget_C* CallFunc_Create_ReturnValue);
    void UserConstructionScript(UUIManager* CallFunc_GetUIManagerPure_ReturnValue);
    void I_SetHudWidgetVisibility(ESlateVisibility Visibility);
    void I_SetHudElementVisibility(FString HUDElementName, ESlateVisibility Visibility, FString Context, UObject* Provider);
    void ReceiveBeginPlay();
    void ToggleHUD(bool Show, bool AllowSelectiveTicking, bool AllowAnimation);
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void ExecuteUbergraph_PhoenixHud(int32_t EntryPoint, APlayerController* CallFunc_GetPlayerController_ReturnValue, EEndPlayReason::Type K2Node_Event_EndPlayReason, UUI_BP_Subtitle_HUD_C* CallFunc_Create_ReturnValue);
}; // Size: 0x638
#pragma pack(pop)
