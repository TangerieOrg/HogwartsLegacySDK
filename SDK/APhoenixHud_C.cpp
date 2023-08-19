#include "APhoenixHUD.hpp"
#include "APhoenixHud_C.hpp"
#include "APlayerController.hpp"
#include "EEndPlayReason\Type.hpp"
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBP_HUD_Audio_C.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_PhoenixHUDWidget_C.hpp"
#include "UUI_BP_Subtitle_HUD_C.hpp"
#include "UUserWidget.hpp"
void APhoenixHud_C::I_SetHudElementVisibility(FString HUDElementName, ESlateVisibility Visibility, FString Context, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/CallOuts/PhoenixHud.PhoenixHud_C.I_SetHudElementVisibility"));
    struct Params_I_SetHudElementVisibility {
        FString HUDElementName; // 0x0
        ESlateVisibility Visibility; // 0x10
        char pad_11[0x7];
        FString Context; // 0x18
        UObject* Provider; // 0x28
    }; // Size: 0x30
    Params_I_SetHudElementVisibility params{};
    params.HUDElementName = (FString)HUDElementName;
    params.Visibility = (ESlateVisibility)Visibility;
    params.Context = (FString)Context;
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void APhoenixHud_C::UserConstructionScript(UUIManager* CallFunc_GetUIManagerPure_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/CallOuts/PhoenixHud.PhoenixHud_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_UserConstructionScript params{};
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    ProcessEvent(func, &params);
}
APhoenixHud_C* APhoenixHud_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/CallOuts/PhoenixHud.PhoenixHud_C");
    return (APhoenixHud_C*)res;
}
void APhoenixHud_C::GetSubtitleHUD(UUserWidget*& SubtitleHUD) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/CallOuts/PhoenixHud.PhoenixHud_C.GetSubtitleHUD"));
    struct Params_GetSubtitleHUD {
        UUserWidget* SubtitleHUD; // 0x0
    }; // Size: 0x8
    Params_GetSubtitleHUD params{};
    params.SubtitleHUD = (UUserWidget*)SubtitleHUD;
    ProcessEvent(func, &params);
    SubtitleHUD = params.SubtitleHUD;
}
void APhoenixHud_C::MakeHudWidget(APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_PhoenixHUDWidget_C* CallFunc_Create_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/CallOuts/PhoenixHud.PhoenixHud_C.MakeHudWidget"));
    struct Params_MakeHudWidget {
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x0
        UUI_BP_PhoenixHUDWidget_C* CallFunc_Create_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_MakeHudWidget params{};
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_PhoenixHUDWidget_C*)CallFunc_Create_ReturnValue;
    ProcessEvent(func, &params);
}
void APhoenixHud_C::I_SetHudWidgetVisibility(ESlateVisibility Visibility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/CallOuts/PhoenixHud.PhoenixHud_C.I_SetHudWidgetVisibility"));
    struct Params_I_SetHudWidgetVisibility {
        ESlateVisibility Visibility; // 0x0
    }; // Size: 0x1
    Params_I_SetHudWidgetVisibility params{};
    params.Visibility = (ESlateVisibility)Visibility;
    ProcessEvent(func, &params);
}
void APhoenixHud_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/CallOuts/PhoenixHud.PhoenixHud_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void APhoenixHud_C::ToggleHUD(bool Show, bool AllowSelectiveTicking, bool AllowAnimation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/CallOuts/PhoenixHud.PhoenixHud_C.ToggleHUD"));
    struct Params_ToggleHUD {
        bool Show; // 0x0
        bool AllowSelectiveTicking; // 0x1
        bool AllowAnimation; // 0x2
    }; // Size: 0x3
    Params_ToggleHUD params{};
    params.Show = (bool)Show;
    params.AllowSelectiveTicking = (bool)AllowSelectiveTicking;
    params.AllowAnimation = (bool)AllowAnimation;
    ProcessEvent(func, &params);
}
void APhoenixHud_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Data/CallOuts/PhoenixHud.PhoenixHud_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void APhoenixHud_C::ExecuteUbergraph_PhoenixHud(int32_t EntryPoint, APlayerController* CallFunc_GetPlayerController_ReturnValue, EEndPlayReason::Type K2Node_Event_EndPlayReason, UUI_BP_Subtitle_HUD_C* CallFunc_Create_ReturnValue) {}
