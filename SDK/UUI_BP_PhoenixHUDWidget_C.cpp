#include "AActor.hpp"
#include "ACharacter.hpp"
#include "AFlyingBroom.hpp"
#include "AHUD.hpp"
#include "APhoenixHUD.hpp"
#include "APlayerController.hpp"
#include "EDifficulty.hpp"
#include "EInputDeviceUsed.hpp"
#include "ESlateVisibility.hpp"
#include "EUIHealthBarType.hpp"
#include "FExperienceChange.hpp"
#include "FHermesBPDelegateHandle.hpp"
#include "FMailEntry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTutorialLayoutData.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAsyncLoadWrapper.hpp"
#include "UCanvasPanel.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UClass.hpp"
#include "UCreature_MountComponent.hpp"
#include "UFunction.hpp"
#include "UHUDCompassIcon.hpp"
#include "UInvalidationBox.hpp"
#include "UMapSubSystem.hpp"
#include "UMinimapManager.hpp"
#include "UMissionBannerWidget.hpp"
#include "UObject.hpp"
#include "UPersistentData.hpp"
#include "UPhoenixGameInstance.hpp"
#include "UPhoenixHUDWidget.hpp"
#include "UScreen.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_ActionDiamondRing_C.hpp"
#include "UUI_BP_ActionHUD_PC_C.hpp"
#include "UUI_BP_AncientMagicCollectionHUD_C.hpp"
#include "UUI_BP_AsyncLoadWrapper_C.hpp"
#include "UUI_BP_BeaconHUDPanel_C.hpp"
#include "UUI_BP_BroomHUD_C.hpp"
#include "UUI_BP_BroomRaceHUD_C.hpp"
#include "UUI_BP_ChallengeComplete_C.hpp"
#include "UUI_BP_ChallengeHud_C.hpp"
#include "UUI_BP_CombatBreakout_C.hpp"
#include "UUI_BP_CombatParry_C.hpp"
#include "UUI_BP_ComboHUD_C.hpp"
#include "UUI_BP_CompassIcon_C.hpp"
#include "UUI_BP_CreatureNurturingHUD_Socket_C.hpp"
#include "UUI_BP_DamageIndicators_C.hpp"
#include "UUI_BP_DuelTechniques_C.hpp"
#include "UUI_BP_ErrorMessage_C.hpp"
#include "UUI_BP_FinisherMeter_C.hpp"
#include "UUI_BP_HUDHint_C.hpp"
#include "UUI_BP_HUD_BossMeter_C.hpp"
#include "UUI_BP_LookAtWidget_C.hpp"
#include "UUI_BP_MiniMap_C.hpp"
#include "UUI_BP_MissionBanner_New_C.hpp"
#include "UUI_BP_MountHUD_C.hpp"
#include "UUI_BP_NPCHealthMeter_C.hpp"
#include "UUI_BP_NoDismount_C.hpp"
#include "UUI_BP_NoFlyHud_C.hpp"
#include "UUI_BP_OutOfAreaNotification_C.hpp"
#include "UUI_BP_OwlMailNotification_C.hpp"
#include "UUI_BP_PhoenixHUDWidget_C.hpp"
#include "UUI_BP_QuickHealthActions_C.hpp"
#include "UUI_BP_QuickItemHUD_C.hpp"
#include "UUI_BP_SavingIcon_C.hpp"
#include "UUI_BP_SpecialChallengeNotification_C.hpp"
#include "UUI_BP_TextNotificationPanel_C.hpp"
#include "UUI_BP_UnreadMailIcon_C.hpp"
#include "UUI_BP_VaseCounter_C.hpp"
#include "UUI_BP_Wanted_C.hpp"
#include "UUI_BP_XPMeter_C.hpp"
#include "UUserWidget.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
#include "UWidgetSwitcher.hpp"
UUI_BP_PhoenixHUDWidget_C* UUI_BP_PhoenixHUDWidget_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C");
    return (UUI_BP_PhoenixHUDWidget_C*)res;
}
void UUI_BP_PhoenixHUDWidget_C::ShowCreatureNurturingHUD0(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowCreatureNurturingHUD"));
    struct Params_ShowCreatureNurturingHUD {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_ShowCreatureNurturingHUD params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::TranslateBreakout(ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Divide_FloatFloat_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FVector2D CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition, bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_MakeVector2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.TranslateBreakout"));
    struct Params_TranslateBreakout {
        ACharacter* CallFunc_GetPlayerCharacter_ReturnValue; // 0x0
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x8
        float CallFunc_BreakVector_X; // 0x14
        float CallFunc_BreakVector_Y; // 0x18
        float CallFunc_BreakVector_Z; // 0x1c
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0x20
        char pad_24[0x4];
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x28
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x30
        FVector CallFunc_MakeVector_ReturnValue; // 0x34
        FVector2D CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition; // 0x40
        bool CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue; // 0x48
        char pad_49[0x3];
        float CallFunc_BreakVector2D_X; // 0x4c
        float CallFunc_BreakVector2D_Y; // 0x50
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x54
    }; // Size: 0x5c
    Params_TranslateBreakout params{};
    params.CallFunc_GetPlayerCharacter_ReturnValue = (ACharacter*)CallFunc_GetPlayerCharacter_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition = (FVector2D)CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition;
    params.CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue = (bool)CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::ShowNoFlyHUD0(FName& ErrorMessageKey) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowNoFlyHUD"));
    struct Params_ShowNoFlyHUD {
        FName ErrorMessageKey; // 0x0
    }; // Size: 0x8
    Params_ShowNoFlyHUD params{};
    params.ErrorMessageKey = (FName)ErrorMessageKey;
    ProcessEvent(func, &params);
    ErrorMessageKey = params.ErrorMessageKey;
}
void UUI_BP_PhoenixHUDWidget_C::GetAsyncWrapperRenderSize(FVector2D& RenderSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.GetAsyncWrapperRenderSize"));
    struct Params_GetAsyncWrapperRenderSize {
        FVector2D RenderSize; // 0x0
    }; // Size: 0x8
    Params_GetAsyncWrapperRenderSize params{};
    params.RenderSize = (FVector2D)RenderSize;
    ProcessEvent(func, &params);
    RenderSize = params.RenderSize;
}
void UUI_BP_PhoenixHUDWidget_C::NurturingHUDSlideOutComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.NurturingHUDSlideOutComplete"));
    struct Params_NurturingHUDSlideOutComplete {
    }; // Size: 0x0
    Params_NurturingHUDSlideOutComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::TogglePersistentStepBanner0(bool IsPersistent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.TogglePersistentStepBanner"));
    struct Params_TogglePersistentStepBanner {
        bool IsPersistent; // 0x0
    }; // Size: 0x1
    Params_TogglePersistentStepBanner params{};
    params.IsPersistent = (bool)IsPersistent;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::AddBeaconToHUD0(UHUDCompassIcon* Beacon, UCanvasPanelSlot*& BeaconSlot, UCanvasPanelSlot* CallFunc_AddBeacon_NewSlot) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.AddBeaconToHUD"));
    struct Params_AddBeaconToHUD {
        UHUDCompassIcon* Beacon; // 0x0
        UCanvasPanelSlot* BeaconSlot; // 0x8
        UCanvasPanelSlot* CallFunc_AddBeacon_NewSlot; // 0x10
    }; // Size: 0x18
    Params_AddBeaconToHUD params{};
    params.Beacon = (UHUDCompassIcon*)Beacon;
    params.BeaconSlot = (UCanvasPanelSlot*)BeaconSlot;
    params.CallFunc_AddBeacon_NewSlot = (UCanvasPanelSlot*)CallFunc_AddBeacon_NewSlot;
    ProcessEvent(func, &params);
    BeaconSlot = params.BeaconSlot;
}
void UUI_BP_PhoenixHUDWidget_C::SetCurrentTargetActor0(AActor* Target, bool ShowName, bool ShowHealth) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SetCurrentTargetActor"));
    struct Params_SetCurrentTargetActor {
        AActor* Target; // 0x0
        bool ShowName; // 0x8
        bool ShowHealth; // 0x9
    }; // Size: 0xa
    Params_SetCurrentTargetActor params{};
    params.Target = (AActor*)Target;
    params.ShowName = (bool)ShowName;
    params.ShowHealth = (bool)ShowHealth;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::GameDifficultyChanged(EDifficulty NewDifficulty, EDifficulty Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.GameDifficultyChanged"));
    struct Params_GameDifficultyChanged {
        EDifficulty NewDifficulty; // 0x0
        EDifficulty Temp_byte_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable_1; // 0x2
        ESlateVisibility Temp_byte_Variable_2; // 0x3
        ESlateVisibility Temp_byte_Variable_3; // 0x4
        ESlateVisibility Temp_byte_Variable_4; // 0x5
        ESlateVisibility K2Node_Select_Default; // 0x6
    }; // Size: 0x7
    Params_GameDifficultyChanged params{};
    params.NewDifficulty = (EDifficulty)NewDifficulty;
    params.Temp_byte_Variable = (EDifficulty)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.Temp_byte_Variable_4 = (ESlateVisibility)Temp_byte_Variable_4;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::RemoveBeaconFromHUD0(UHUDCompassIcon* Beacon) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.RemoveBeaconFromHUD"));
    struct Params_RemoveBeaconFromHUD {
        UHUDCompassIcon* Beacon; // 0x0
    }; // Size: 0x8
    Params_RemoveBeaconFromHUD params{};
    params.Beacon = (UHUDCompassIcon*)Beacon;
    ProcessEvent(func, &params);
}
UMissionBannerWidget* UUI_BP_PhoenixHUDWidget_C::GetMissionBanner0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.GetMissionBanner"));
    struct Params_GetMissionBanner {
        UMissionBannerWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMissionBanner params{};
    ProcessEvent(func, &params);
    return (UMissionBannerWidget*)params.ReturnValue;
}
void UUI_BP_PhoenixHUDWidget_C::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::HideNoFlyHUD0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HideNoFlyHUD"));
    struct Params_HideNoFlyHUD {
    }; // Size: 0x0
    Params_HideNoFlyHUD params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::UpdateQuickActionsHUD(float Temp_float_Variable, int32_t Temp_int_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, int32_t Temp_int_Variable_1, float Temp_float_Variable_3, float Temp_float_Variable_4, int32_t Temp_int_Variable_2, float Temp_float_Variable_5, float Temp_float_Variable_6, bool Temp_bool_Variable, int32_t Temp_int_Variable_3, int32_t Temp_int_Variable_4, float Temp_float_Variable_7, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, int32_t Temp_int_Variable_5, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1, bool K2Node_DynamicCast_bSuccess_1, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_2, bool K2Node_DynamicCast_bSuccess_2, UUIManager* CallFunc_Get_ReturnValue, EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32_t K2Node_Select_Default, float K2Node_Select_Default_1, float K2Node_Select_Default_2, FVector2D CallFunc_MakeVector2D_ReturnValue, float K2Node_Select_Default_3, FVector2D CallFunc_MakeVector2D_ReturnValue_1, float K2Node_Select_Default_4, FVector2D CallFunc_MakeVector2D_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.UpdateQuickActionsHUD"));
    struct Params_UpdateQuickActionsHUD {
        float Temp_float_Variable; // 0x0
        int32_t Temp_int_Variable; // 0x4
        float Temp_float_Variable_1; // 0x8
        float Temp_float_Variable_2; // 0xc
        int32_t Temp_int_Variable_1; // 0x10
        float Temp_float_Variable_3; // 0x14
        float Temp_float_Variable_4; // 0x18
        int32_t Temp_int_Variable_2; // 0x1c
        float Temp_float_Variable_5; // 0x20
        float Temp_float_Variable_6; // 0x24
        bool Temp_bool_Variable; // 0x28
        char pad_29[0x3];
        int32_t Temp_int_Variable_3; // 0x2c
        int32_t Temp_int_Variable_4; // 0x30
        float Temp_float_Variable_7; // 0x34
        UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot; // 0x38
        bool K2Node_DynamicCast_bSuccess; // 0x40
        char pad_41[0x3];
        int32_t Temp_int_Variable_5; // 0x44
        UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_1; // 0x48
        bool K2Node_DynamicCast_bSuccess_1; // 0x50
        char pad_51[0x7];
        UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot_2; // 0x58
        bool K2Node_DynamicCast_bSuccess_2; // 0x60
        char pad_61[0x7];
        UUIManager* CallFunc_Get_ReturnValue; // 0x68
        EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue; // 0x70
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x71
        char pad_72[0x2];
        int32_t K2Node_Select_Default; // 0x74
        float K2Node_Select_Default_1; // 0x78
        float K2Node_Select_Default_2; // 0x7c
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x80
        float K2Node_Select_Default_3; // 0x88
        FVector2D CallFunc_MakeVector2D_ReturnValue_1; // 0x8c
        float K2Node_Select_Default_4; // 0x94
        FVector2D CallFunc_MakeVector2D_ReturnValue_2; // 0x98
    }; // Size: 0xa0
    Params_UpdateQuickActionsHUD params{};
    params.Temp_float_Variable = (float)Temp_float_Variable;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.Temp_float_Variable_1 = (float)Temp_float_Variable_1;
    params.Temp_float_Variable_2 = (float)Temp_float_Variable_2;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.Temp_float_Variable_3 = (float)Temp_float_Variable_3;
    params.Temp_float_Variable_4 = (float)Temp_float_Variable_4;
    params.Temp_int_Variable_2 = (int32_t)Temp_int_Variable_2;
    params.Temp_float_Variable_5 = (float)Temp_float_Variable_5;
    params.Temp_float_Variable_6 = (float)Temp_float_Variable_6;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_int_Variable_3 = (int32_t)Temp_int_Variable_3;
    params.Temp_int_Variable_4 = (int32_t)Temp_int_Variable_4;
    params.Temp_float_Variable_7 = (float)Temp_float_Variable_7;
    params.K2Node_DynamicCast_AsCanvas_Panel_Slot = (UCanvasPanelSlot*)K2Node_DynamicCast_AsCanvas_Panel_Slot;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.Temp_int_Variable_5 = (int32_t)Temp_int_Variable_5;
    params.K2Node_DynamicCast_AsCanvas_Panel_Slot_1 = (UCanvasPanelSlot*)K2Node_DynamicCast_AsCanvas_Panel_Slot_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.K2Node_DynamicCast_AsCanvas_Panel_Slot_2 = (UCanvasPanelSlot*)K2Node_DynamicCast_AsCanvas_Panel_Slot_2;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetLastUsedInputDevice_ReturnValue = (EInputDeviceUsed)CallFunc_GetLastUsedInputDevice_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.K2Node_Select_Default = (int32_t)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (float)K2Node_Select_Default_1;
    params.K2Node_Select_Default_2 = (float)K2Node_Select_Default_2;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    params.K2Node_Select_Default_3 = (float)K2Node_Select_Default_3;
    params.CallFunc_MakeVector2D_ReturnValue_1 = (FVector2D)CallFunc_MakeVector2D_ReturnValue_1;
    params.K2Node_Select_Default_4 = (float)K2Node_Select_Default_4;
    params.CallFunc_MakeVector2D_ReturnValue_2 = (FVector2D)CallFunc_MakeVector2D_ReturnValue_2;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::HasUnreadMailNotification(bool& bUnreadMail) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HasUnreadMailNotification"));
    struct Params_HasUnreadMailNotification {
        bool bUnreadMail; // 0x0
    }; // Size: 0x1
    Params_HasUnreadMailNotification params{};
    params.bUnreadMail = (bool)bUnreadMail;
    ProcessEvent(func, &params);
    bUnreadMail = params.bUnreadMail;
}
void UUI_BP_PhoenixHUDWidget_C::ClearHintMessage0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ClearHintMessage"));
    struct Params_ClearHintMessage {
    }; // Size: 0x0
    Params_ClearHintMessage params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::SetVisibilityPerWidget(bool ShouldShow, TArray<UWidget*> NoTickWidgets, TArray<UWidget*> TickWidgets) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SetVisibilityPerWidget"));
    struct Params_SetVisibilityPerWidget {
        bool ShouldShow; // 0x0
        char pad_1[0x7];
        TArray<UWidget*> NoTickWidgets; // 0x8
        TArray<UWidget*> TickWidgets; // 0x18
    }; // Size: 0x28
    Params_SetVisibilityPerWidget params{};
    params.ShouldShow = (bool)ShouldShow;
    params.NoTickWidgets = (TArray<UWidget*>)NoTickWidgets;
    params.TickWidgets = (TArray<UWidget*>)TickWidgets;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::AdjustHUDDisplayForDemoBuilds(bool IsPlayingDemoBuild, UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue, bool CallFunc_GetPlayingDemoBuild_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.AdjustHUDDisplayForDemoBuilds"));
    struct Params_AdjustHUDDisplayForDemoBuilds {
        bool IsPlayingDemoBuild; // 0x0
        char pad_1[0x7];
        UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue; // 0x8
        bool CallFunc_GetPlayingDemoBuild_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_AdjustHUDDisplayForDemoBuilds params{};
    params.IsPlayingDemoBuild = (bool)IsPlayingDemoBuild;
    params.CallFunc_GetPhoenixGameInstance_ReturnValue = (UPhoenixGameInstance*)CallFunc_GetPhoenixGameInstance_ReturnValue;
    params.CallFunc_GetPlayingDemoBuild_ReturnValue = (bool)CallFunc_GetPlayingDemoBuild_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::HandleSetElementVisibility(FString ElementName, ESlateVisibility Visibility, UObject* Provider, bool Temp_bool_Variable, bool K2Node_SwitchString_CmpSuccess, EDifficulty CallFunc_GetCurrentGameDifficulty_Difficulty, bool CallFunc_GetCurrentGameDifficulty_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, AHUD* CallFunc_GetHUD_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, ESlateVisibility Temp_byte_Variable, ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_3, UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, UMinimapManager* CallFunc_GetMiniMapManager_ReturnValue, UMinimapManager* CallFunc_GetMiniMapManager_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HandleSetElementVisibility"));
    struct Params_HandleSetElementVisibility {
        FString ElementName; // 0x0
        ESlateVisibility Visibility; // 0x10
        char pad_11[0x7];
        UObject* Provider; // 0x18
        bool Temp_bool_Variable; // 0x20
        bool K2Node_SwitchString_CmpSuccess; // 0x21
        EDifficulty CallFunc_GetCurrentGameDifficulty_Difficulty; // 0x22
        bool CallFunc_GetCurrentGameDifficulty_ReturnValue; // 0x23
        bool K2Node_SwitchEnum_CmpSuccess; // 0x24
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x25
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x26
        bool CallFunc_BooleanOR_ReturnValue; // 0x27
        bool CallFunc_BooleanAND_ReturnValue; // 0x28
        char pad_29[0x7];
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x30
        AHUD* CallFunc_GetHUD_ReturnValue; // 0x38
        bool K2Node_SwitchEnum_CmpSuccess_1; // 0x40
        char pad_41[0x7];
        APhoenixHUD* K2Node_DynamicCast_AsPhoenix_HUD; // 0x48
        bool K2Node_DynamicCast_bSuccess; // 0x50
        bool K2Node_SwitchEnum_CmpSuccess_2; // 0x51
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0x52
        ESlateVisibility Temp_byte_Variable; // 0x53
        ESlateVisibility K2Node_Select_Default; // 0x54
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x55
        bool K2Node_SwitchEnum_CmpSuccess_3; // 0x56
        char pad_57[0x1];
        UMapSubSystem* CallFunc_GetGameInstanceSubsystem_ReturnValue; // 0x58
        bool K2Node_SwitchEnum_CmpSuccess_4; // 0x60
        char pad_61[0x7];
        UMinimapManager* CallFunc_GetMiniMapManager_ReturnValue; // 0x68
        UMinimapManager* CallFunc_GetMiniMapManager_ReturnValue_1; // 0x70
    }; // Size: 0x78
    Params_HandleSetElementVisibility params{};
    params.ElementName = (FString)ElementName;
    params.Visibility = (ESlateVisibility)Visibility;
    params.Provider = (UObject*)Provider;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_SwitchString_CmpSuccess = (bool)K2Node_SwitchString_CmpSuccess;
    params.CallFunc_GetCurrentGameDifficulty_Difficulty = (EDifficulty)CallFunc_GetCurrentGameDifficulty_Difficulty;
    params.CallFunc_GetCurrentGameDifficulty_ReturnValue = (bool)CallFunc_GetCurrentGameDifficulty_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_GetHUD_ReturnValue = (AHUD*)CallFunc_GetHUD_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess_1 = (bool)K2Node_SwitchEnum_CmpSuccess_1;
    params.K2Node_DynamicCast_AsPhoenix_HUD = (APhoenixHUD*)K2Node_DynamicCast_AsPhoenix_HUD;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_SwitchEnum_CmpSuccess_2 = (bool)K2Node_SwitchEnum_CmpSuccess_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.K2Node_SwitchEnum_CmpSuccess_3 = (bool)K2Node_SwitchEnum_CmpSuccess_3;
    params.CallFunc_GetGameInstanceSubsystem_ReturnValue = (UMapSubSystem*)CallFunc_GetGameInstanceSubsystem_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess_4 = (bool)K2Node_SwitchEnum_CmpSuccess_4;
    params.CallFunc_GetMiniMapManager_ReturnValue = (UMinimapManager*)CallFunc_GetMiniMapManager_ReturnValue;
    params.CallFunc_GetMiniMapManager_ReturnValue_1 = (UMinimapManager*)CallFunc_GetMiniMapManager_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::ReadActiveOwlMail0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ReadActiveOwlMail"));
    struct Params_ReadActiveOwlMail {
    }; // Size: 0x0
    Params_ReadActiveOwlMail params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::HideBroomRaceHUD0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HideBroomRaceHUD"));
    struct Params_HideBroomRaceHUD {
    }; // Size: 0x0
    Params_HideBroomRaceHUD params{};
    ProcessEvent(func, &params);
}
UHUDCompassIcon* UUI_BP_PhoenixHUDWidget_C::MakeBeaconIcon0(FString IconName, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_CompassIcon_C* CallFunc_Create_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.MakeBeaconIcon"));
    struct Params_MakeBeaconIcon {
        FString IconName; // 0x0
        UHUDCompassIcon* ReturnValue; // 0x10
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x18
        UUI_BP_CompassIcon_C* CallFunc_Create_ReturnValue; // 0x20
    }; // Size: 0x28
    Params_MakeBeaconIcon params{};
    params.IconName = (FString)IconName;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_CompassIcon_C*)CallFunc_Create_ReturnValue;
    ProcessEvent(func, &params);
    return (UHUDCompassIcon*)params.ReturnValue;
}
void UUI_BP_PhoenixHUDWidget_C::LayoutLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.LayoutLoaded"));
    struct Params_LayoutLoaded {
    }; // Size: 0x0
    Params_LayoutLoaded params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::DisplayAutoSave() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.DisplayAutoSave"));
    struct Params_DisplayAutoSave {
    }; // Size: 0x0
    Params_DisplayAutoSave params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::GameLogicElementEvt_BreakoutRight_K2Node_GameLogicBoolResultEvent_1(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.GameLogicElementEvt_BreakoutRight_K2Node_GameLogicBoolResultEvent_1"));
    struct Params_GameLogicElementEvt_BreakoutRight_K2Node_GameLogicBoolResultEvent_1 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_BreakoutRight_K2Node_GameLogicBoolResultEvent_1 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::GameLogicElementEvt_BreakoutBottom_K2Node_GameLogicBoolResultEvent_3(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.GameLogicElementEvt_BreakoutBottom_K2Node_GameLogicBoolResultEvent_3"));
    struct Params_GameLogicElementEvt_BreakoutBottom_K2Node_GameLogicBoolResultEvent_3 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_BreakoutBottom_K2Node_GameLogicBoolResultEvent_3 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::GameLogicElementEvt_BreakoutLeft_K2Node_GameLogicBoolResultEvent_2(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.GameLogicElementEvt_BreakoutLeft_K2Node_GameLogicBoolResultEvent_2"));
    struct Params_GameLogicElementEvt_BreakoutLeft_K2Node_GameLogicBoolResultEvent_2 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_BreakoutLeft_K2Node_GameLogicBoolResultEvent_2 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::BndEvt__AsyncReticule_K2Node_ComponentBoundEvent_0_AsyncWrapperLoadComplete__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.BndEvt__AsyncReticule_K2Node_ComponentBoundEvent_0_AsyncWrapperLoadComplete__DelegateSignature"));
    struct Params_BndEvt__AsyncReticule_K2Node_ComponentBoundEvent_0_AsyncWrapperLoadComplete__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__AsyncReticule_K2Node_ComponentBoundEvent_0_AsyncWrapperLoadComplete__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::GameLogicElementEvt_BreakoutTop_K2Node_GameLogicBoolResultEvent_0(bool CachedResult) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.GameLogicElementEvt_BreakoutTop_K2Node_GameLogicBoolResultEvent_0"));
    struct Params_GameLogicElementEvt_BreakoutTop_K2Node_GameLogicBoolResultEvent_0 {
        bool CachedResult; // 0x0
    }; // Size: 0x1
    Params_GameLogicElementEvt_BreakoutTop_K2Node_GameLogicBoolResultEvent_0 params{};
    params.CachedResult = (bool)CachedResult;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::OnLoaded_34BC5BCD467F67EB9A5A9E95BA21BA69(UClass* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnLoaded_34BC5BCD467F67EB9A5A9E95BA21BA69"));
    struct Params_OnLoaded_34BC5BCD467F67EB9A5A9E95BA21BA69 {
        UClass* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_34BC5BCD467F67EB9A5A9E95BA21BA69 params{};
    params.Loaded = (UClass*)Loaded;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::OnShowEnemyInfo0(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnShowEnemyInfo"));
    struct Params_OnShowEnemyInfo {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_OnShowEnemyInfo params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::ShowTransformationUI0(bool Show, int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowTransformationUI"));
    struct Params_ShowTransformationUI {
        bool Show; // 0x0
        char pad_1[0x3];
        int32_t IntroType; // 0x4
    }; // Size: 0x8
    Params_ShowTransformationUI params{};
    params.Show = (bool)Show;
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::OnSetEnemyData0(FName& Name, float pct) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnSetEnemyData"));
    struct Params_OnSetEnemyData {
        FName Name; // 0x0
        float pct; // 0x8
    }; // Size: 0xc
    Params_OnSetEnemyData params{};
    params.Name = (FName)Name;
    params.pct = (float)pct;
    ProcessEvent(func, &params);
    Name = params.Name;
}
void UUI_BP_PhoenixHUDWidget_C::ExperienceChangedBP0(FExperienceChange ExperienceChangedData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ExperienceChangedBP"));
    struct Params_ExperienceChangedBP {
        FExperienceChange ExperienceChangedData; // 0x0
    }; // Size: 0x20
    Params_ExperienceChangedBP params{};
    params.ExperienceChangedData = (FExperienceChange)ExperienceChangedData;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::OnAddSpecialItemNotification0(FString Name, FString IconName, int32_t Count, FString UnlockMessage) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddSpecialItemNotification"));
    struct Params_OnAddSpecialItemNotification {
        FString Name; // 0x0
        FString IconName; // 0x10
        int32_t Count; // 0x20
        char pad_24[0x4];
        FString UnlockMessage; // 0x28
    }; // Size: 0x38
    Params_OnAddSpecialItemNotification params{};
    params.Name = (FString)Name;
    params.IconName = (FString)IconName;
    params.Count = (int32_t)Count;
    params.UnlockMessage = (FString)UnlockMessage;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::OnSetHUDVisibility0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnSetHUDVisibility"));
    struct Params_OnSetHUDVisibility {
    }; // Size: 0x0
    Params_OnSetHUDVisibility params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::OnAddTextTickerNotification0(FString NotificationText) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddTextTickerNotification"));
    struct Params_OnAddTextTickerNotification {
        FString NotificationText; // 0x0
    }; // Size: 0x10
    Params_OnAddTextTickerNotification params{};
    params.NotificationText = (FString)NotificationText;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::OnAddCollectionKnownNotification0(FName CollectionItemID, FName CollectionCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddCollectionKnownNotification"));
    struct Params_OnAddCollectionKnownNotification {
        FName CollectionItemID; // 0x0
        FName CollectionCategory; // 0x8
    }; // Size: 0x10
    Params_OnAddCollectionKnownNotification params{};
    params.CollectionItemID = (FName)CollectionItemID;
    params.CollectionCategory = (FName)CollectionCategory;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::ShowConjurationUI0(bool Show, int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowConjurationUI"));
    struct Params_ShowConjurationUI {
        bool Show; // 0x0
        char pad_1[0x3];
        int32_t IntroType; // 0x4
    }; // Size: 0x8
    Params_ShowConjurationUI params{};
    params.Show = (bool)Show;
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::AncMag_Pickup(UObject* Caller, float float) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.AncMag_Pickup"));
    struct Params_AncMag_Pickup {
        UObject* Caller; // 0x0
        float float; // 0x8
    }; // Size: 0xc
    Params_AncMag_Pickup params{};
    params.Caller = (UObject*)Caller;
    params.float = (float)float;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::SetHudElementVisibility0(FString ElementName, ESlateVisibility NewVisibility, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SetHudElementVisibility"));
    struct Params_SetHudElementVisibility {
        FString ElementName; // 0x0
        ESlateVisibility NewVisibility; // 0x10
        char pad_11[0x7];
        UObject* Provider; // 0x18
    }; // Size: 0x20
    Params_SetHudElementVisibility params{};
    params.ElementName = (FString)ElementName;
    params.NewVisibility = (ESlateVisibility)NewVisibility;
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::CreatureFirstTimeCapture(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.CreatureFirstTimeCapture"));
    struct Params_CreatureFirstTimeCapture {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_CreatureFirstTimeCapture params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::OnAddCompanionLevelUpNotification0(FString CompanionName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddCompanionLevelUpNotification"));
    struct Params_OnAddCompanionLevelUpNotification {
        FString CompanionName; // 0x0
    }; // Size: 0x10
    Params_OnAddCompanionLevelUpNotification params{};
    params.CompanionName = (FString)CompanionName;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::ShowBroomHUD0(AFlyingBroom* BroomActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowBroomHUD"));
    struct Params_ShowBroomHUD {
        AFlyingBroom* BroomActor; // 0x0
    }; // Size: 0x8
    Params_ShowBroomHUD params{};
    params.BroomActor = (AFlyingBroom*)BroomActor;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::HideMountHUD0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HideMountHUD"));
    struct Params_HideMountHUD {
    }; // Size: 0x0
    Params_HideMountHUD params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::ShowMountHUD0(UCreature_MountComponent* MountComponent, bool bIncludeCharge) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowMountHUD"));
    struct Params_ShowMountHUD {
        UCreature_MountComponent* MountComponent; // 0x0
        bool bIncludeCharge; // 0x8
    }; // Size: 0x9
    Params_ShowMountHUD params{};
    params.MountComponent = (UCreature_MountComponent*)MountComponent;
    params.bIncludeCharge = (bool)bIncludeCharge;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::ShowChallengeHUD(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowChallengeHUD"));
    struct Params_ShowChallengeHUD {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ShowChallengeHUD params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::HideChallengeHUD(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HideChallengeHUD"));
    struct Params_HideChallengeHUD {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HideChallengeHUD params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::AccessedTalentsPage(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.AccessedTalentsPage"));
    struct Params_AccessedTalentsPage {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_AccessedTalentsPage params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::ShowOutOfAreaAlert0(FName Message, float InitialTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowOutOfAreaAlert"));
    struct Params_ShowOutOfAreaAlert {
        FName Message; // 0x0
        float InitialTime; // 0x8
    }; // Size: 0xc
    Params_ShowOutOfAreaAlert params{};
    params.Message = (FName)Message;
    params.InitialTime = (float)InitialTime;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::SetAndShowHintMessage0(FString HintKey, FTutorialLayoutData HintPositionData, bool bIgnoreShowTutorialElementsFlag, float MaxDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SetAndShowHintMessage"));
    struct Params_SetAndShowHintMessage {
        FString HintKey; // 0x0
        FTutorialLayoutData HintPositionData; // 0x10
        bool bIgnoreShowTutorialElementsFlag; // 0x20
        char pad_21[0x3];
        float MaxDuration; // 0x24
    }; // Size: 0x28
    Params_SetAndShowHintMessage params{};
    params.HintKey = (FString)HintKey;
    params.HintPositionData = (FTutorialLayoutData)HintPositionData;
    params.bIgnoreShowTutorialElementsFlag = (bool)bIgnoreShowTutorialElementsFlag;
    params.MaxDuration = (float)MaxDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::ShowLookAtCallout(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowLookAtCallout"));
    struct Params_ShowLookAtCallout {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_ShowLookAtCallout params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::ConjurationScreenLoaded(UScreen* LoadedScreen) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ConjurationScreenLoaded"));
    struct Params_ConjurationScreenLoaded {
        UScreen* LoadedScreen; // 0x0
    }; // Size: 0x8
    Params_ConjurationScreenLoaded params{};
    params.LoadedScreen = (UScreen*)LoadedScreen;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::HideBroomHUD0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HideBroomHUD"));
    struct Params_HideBroomHUD {
    }; // Size: 0x0
    Params_HideBroomHUD params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::SetConjurationCategory(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SetConjurationCategory"));
    struct Params_SetConjurationCategory {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_SetConjurationCategory params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::SetGlobalHudVisibility0(bool ShouldShow, bool AllowTicking, bool ShouldAnimate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SetGlobalHudVisibility"));
    struct Params_SetGlobalHudVisibility {
        bool ShouldShow; // 0x0
        bool AllowTicking; // 0x1
        bool ShouldAnimate; // 0x2
    }; // Size: 0x3
    Params_SetGlobalHudVisibility params{};
    params.ShouldShow = (bool)ShouldShow;
    params.AllowTicking = (bool)AllowTicking;
    params.ShouldAnimate = (bool)ShouldAnimate;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::AnimateTrackingInfoWidget0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.AnimateTrackingInfoWidget"));
    struct Params_AnimateTrackingInfoWidget {
    }; // Size: 0x0
    Params_AnimateTrackingInfoWidget params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::SyncSettingsVisibilities0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SyncSettingsVisibilities"));
    struct Params_SyncSettingsVisibilities {
    }; // Size: 0x0
    Params_SyncSettingsVisibilities params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::OnMailRecieved0(FMailEntry Entry, int32_t DisplayPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnMailRecieved"));
    struct Params_OnMailRecieved {
        FMailEntry Entry; // 0x0
        int32_t DisplayPriority; // 0x58
    }; // Size: 0x5c
    Params_OnMailRecieved params{};
    params.Entry = (FMailEntry)Entry;
    params.DisplayPriority = (int32_t)DisplayPriority;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::OnAddChallengeUnlockedNotification0(FName ChallengeID, FName ChallengeCategory, int32_t TotalRequired) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddChallengeUnlockedNotification"));
    struct Params_OnAddChallengeUnlockedNotification {
        FName ChallengeID; // 0x0
        FName ChallengeCategory; // 0x8
        int32_t TotalRequired; // 0x10
    }; // Size: 0x14
    Params_OnAddChallengeUnlockedNotification params{};
    params.ChallengeID = (FName)ChallengeID;
    params.ChallengeCategory = (FName)ChallengeCategory;
    params.TotalRequired = (int32_t)TotalRequired;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::ShowBroomRaceHUD0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowBroomRaceHUD"));
    struct Params_ShowBroomRaceHUD {
    }; // Size: 0x0
    Params_ShowBroomRaceHUD params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::OnAddChallengeCompleteNotification0(FName ChallengeID, FName ChallengeCategory, int32_t CompletedLevel, int32_t TotalLevels, int32_t TotalInstancesForLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddChallengeCompleteNotification"));
    struct Params_OnAddChallengeCompleteNotification {
        FName ChallengeID; // 0x0
        FName ChallengeCategory; // 0x8
        int32_t CompletedLevel; // 0x10
        int32_t TotalLevels; // 0x14
        int32_t TotalInstancesForLevel; // 0x18
    }; // Size: 0x1c
    Params_OnAddChallengeCompleteNotification params{};
    params.ChallengeID = (FName)ChallengeID;
    params.ChallengeCategory = (FName)ChallengeCategory;
    params.CompletedLevel = (int32_t)CompletedLevel;
    params.TotalLevels = (int32_t)TotalLevels;
    params.TotalInstancesForLevel = (int32_t)TotalInstancesForLevel;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::HideOutOfAreaAlert0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HideOutOfAreaAlert"));
    struct Params_HideOutOfAreaAlert {
    }; // Size: 0x0
    Params_HideOutOfAreaAlert params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::UpdateOutOfAreaAlertTimer0(float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.UpdateOutOfAreaAlertTimer"));
    struct Params_UpdateOutOfAreaAlertTimer {
        float Time; // 0x0
    }; // Size: 0x4
    Params_UpdateOutOfAreaAlertTimer params{};
    params.Time = (float)Time;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::OnAddCollectionObtainedNotification0(FName CollectionItemID, FName CollectionCategory) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddCollectionObtainedNotification"));
    struct Params_OnAddCollectionObtainedNotification {
        FName CollectionItemID; // 0x0
        FName CollectionCategory; // 0x8
    }; // Size: 0x10
    Params_OnAddCollectionObtainedNotification params{};
    params.CollectionItemID = (FName)CollectionItemID;
    params.CollectionCategory = (FName)CollectionCategory;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::OnAddPickupNotification0(FString Name, FString IconName, int32_t Count, bool bSpecial, FName Variation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddPickupNotification"));
    struct Params_OnAddPickupNotification {
        FString Name; // 0x0
        FString IconName; // 0x10
        int32_t Count; // 0x20
        bool bSpecial; // 0x24
        char pad_25[0x3];
        FName Variation; // 0x28
    }; // Size: 0x30
    Params_OnAddPickupNotification params{};
    params.Name = (FString)Name;
    params.IconName = (FString)IconName;
    params.Count = (int32_t)Count;
    params.bSpecial = (bool)bSpecial;
    params.Variation = (FName)Variation;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::OnAddChallengeUpdatedNotification0(FName ChallengeID, FName ChallengeCategory, int32_t CompletedAmt, int32_t TotalRequired) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddChallengeUpdatedNotification"));
    struct Params_OnAddChallengeUpdatedNotification {
        FName ChallengeID; // 0x0
        FName ChallengeCategory; // 0x8
        int32_t CompletedAmt; // 0x10
        int32_t TotalRequired; // 0x14
    }; // Size: 0x18
    Params_OnAddChallengeUpdatedNotification params{};
    params.ChallengeID = (FName)ChallengeID;
    params.ChallengeCategory = (FName)ChallengeCategory;
    params.CompletedAmt = (int32_t)CompletedAmt;
    params.TotalRequired = (int32_t)TotalRequired;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::InEditorPostConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.InEditorPostConstruct"));
    struct Params_InEditorPostConstruct {
    }; // Size: 0x0
    Params_InEditorPostConstruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::FadeOutNoTick() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.FadeOutNoTick"));
    struct Params_FadeOutNoTick {
    }; // Size: 0x0
    Params_FadeOutNoTick params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::FadeOutAllowTick() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.FadeOutAllowTick"));
    struct Params_FadeOutAllowTick {
    }; // Size: 0x0
    Params_FadeOutAllowTick params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::RefreshButtonCallouts(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.RefreshButtonCallouts"));
    struct Params_RefreshButtonCallouts {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RefreshButtonCallouts params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::ToggleMissionDetailsHold0(bool IsHeld) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ToggleMissionDetailsHold"));
    struct Params_ToggleMissionDetailsHold {
        bool IsHeld; // 0x0
    }; // Size: 0x1
    Params_ToggleMissionDetailsHold params{};
    params.IsHeld = (bool)IsHeld;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::ShowNotificationsHUD0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.ShowNotificationsHUD"));
    struct Params_ShowNotificationsHUD {
    }; // Size: 0x0
    Params_ShowNotificationsHUD params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::HideNotificationsHUD0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.HideNotificationsHUD"));
    struct Params_HideNotificationsHUD {
    }; // Size: 0x0
    Params_HideNotificationsHUD params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::OnAddFastTravelUnlockedNotification0(FString Name, FString IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.OnAddFastTravelUnlockedNotification"));
    struct Params_OnAddFastTravelUnlockedNotification {
        FString Name; // 0x0
        FString IconName; // 0x10
    }; // Size: 0x20
    Params_OnAddFastTravelUnlockedNotification params{};
    params.Name = (FString)Name;
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::BndEvt__UI_BP_PhoenixHUDWidget_UI_BP_QuickItemHUD_K2Node_ComponentBoundEvent_1_OnFocusPotionApplied__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.BndEvt__UI_BP_PhoenixHUDWidget_UI_BP_QuickItemHUD_K2Node_ComponentBoundEvent_1_OnFocusPotionApplied__DelegateSignature"));
    struct Params_BndEvt__UI_BP_PhoenixHUDWidget_UI_BP_QuickItemHUD_K2Node_ComponentBoundEvent_1_OnFocusPotionApplied__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_PhoenixHUDWidget_UI_BP_QuickItemHUD_K2Node_ComponentBoundEvent_1_OnFocusPotionApplied__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::BndEvt__UI_BP_PhoenixHUDWidget_UI_BP_QuickItemHUD_K2Node_ComponentBoundEvent_2_OnFocusPotionExpired__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/UI_BP_PhoenixHUDWidget.UI_BP_PhoenixHUDWidget_C.BndEvt__UI_BP_PhoenixHUDWidget_UI_BP_QuickItemHUD_K2Node_ComponentBoundEvent_2_OnFocusPotionExpired__DelegateSignature"));
    struct Params_BndEvt__UI_BP_PhoenixHUDWidget_UI_BP_QuickItemHUD_K2Node_ComponentBoundEvent_2_OnFocusPotionExpired__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_PhoenixHUDWidget_UI_BP_QuickItemHUD_K2Node_ComponentBoundEvent_2_OnFocusPotionExpired__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_PhoenixHUDWidget_C::ExecuteUbergraph_UI_BP_PhoenixHUDWidget(int32_t EntryPoint, UPersistentData* CallFunc_GetInstance_ReturnValue) {}
