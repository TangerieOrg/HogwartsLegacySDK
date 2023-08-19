#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ACharacter.hpp"
#include "APawn.hpp"
#include "EAvatarPresetType.hpp"
#include "EGenderEnum.hpp"
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FGearItemID.hpp"
#include "FGeometry.hpp"
#include "FLegendItemData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UAsyncLoadWrapper.hpp"
#include "UAsyncWidgetSwitcher.hpp"
#include "UAvatarCreatorPage.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UCustomizableCharacterComponent.hpp"
#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
#include "ULegendItem.hpp"
#include "UObject.hpp"
#include "UPanelWidget.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UScaleBox.hpp"
#include "UScreen.hpp"
#include "USizeBoxSlot.hpp"
#include "UUI_BP_AsyncLoadWrapper_C.hpp"
#include "UUI_BP_BackgroundSmoke_C.hpp"
#include "UUI_BP_FG_CategoryNavBarHorizontal_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUI_BP_MoneyBar_C.hpp"
#include "UUI_BP_Salon_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_Salon_C::OnInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.OnInitialized"));
    struct Params_OnInitialized {
    }; // Size: 0x0
    Params_OnInitialized params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::VO_OnExitMenu(FString CallFunc_MakeLiteralString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.VO_OnExitMenu"));
    struct Params_VO_OnExitMenu {
        FString CallFunc_MakeLiteralString_ReturnValue; // 0x0
        AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_VO_OnExitMenu params{};
    params.CallFunc_MakeLiteralString_ReturnValue = (FString)CallFunc_MakeLiteralString_ReturnValue;
    params.CallFunc_GetActorFromEntityNameBP_ReturnValue = (AActor*)CallFunc_GetActorFromEntityNameBP_ReturnValue;
    ProcessEvent(func, &params);
}
UUI_BP_Salon_C* UUI_BP_Salon_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C");
    return (UUI_BP_Salon_C*)res;
}
void UUI_BP_Salon_C::SequenceEvent__ENTRYPOINTUI_BP_Salon_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.SequenceEvent__ENTRYPOINTUI_BP_Salon_1"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Salon_1 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Salon_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::AdjustForViewportWidth(float CurrentWidth, float CurrentRatio, float IdealWidth, float IdealRatio, FMargin K2Node_MakeStruct_Margin, FMargin K2Node_MakeStruct_Margin_1, FMargin K2Node_MakeStruct_Margin_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, FMargin K2Node_MakeStruct_Margin_3, float K2Node_MathExpression_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, FMargin K2Node_MakeStruct_Margin_4, FMargin K2Node_MakeStruct_Margin_5, FMargin K2Node_MakeStruct_Margin_6, float CallFunc_Add_FloatFloat_ReturnValue, FMargin K2Node_MakeStruct_Margin_7, USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue, float K2Node_MathExpression_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, FVector2D CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.AdjustForViewportWidth"));
    struct Params_AdjustForViewportWidth {
        float CurrentWidth; // 0x0
        float CurrentRatio; // 0x4
        float IdealWidth; // 0x8
        float IdealRatio; // 0xc
        FMargin K2Node_MakeStruct_Margin; // 0x10
        FMargin K2Node_MakeStruct_Margin_1; // 0x20
        FMargin K2Node_MakeStruct_Margin_2; // 0x30
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue; // 0x40
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1; // 0x48
        FMargin K2Node_MakeStruct_Margin_3; // 0x50
        float K2Node_MathExpression_ReturnValue; // 0x60
        char pad_64[0x4];
        UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2; // 0x68
        FMargin K2Node_MakeStruct_Margin_4; // 0x70
        FMargin K2Node_MakeStruct_Margin_5; // 0x80
        FMargin K2Node_MakeStruct_Margin_6; // 0x90
        float CallFunc_Add_FloatFloat_ReturnValue; // 0xa0
        FMargin K2Node_MakeStruct_Margin_7; // 0xa4
        char pad_b4[0x4];
        USizeBoxSlot* CallFunc_SlotAsSizeBoxSlot_ReturnValue; // 0xb8
        float K2Node_MathExpression_ReturnValue_1; // 0xc0
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0xc4
        char pad_c5[0x3];
        FVector2D CallFunc_GetViewportSize_ReturnValue; // 0xc8
        float CallFunc_BreakVector2D_X; // 0xd0
        float CallFunc_BreakVector2D_Y; // 0xd4
        float CallFunc_Divide_FloatFloat_ReturnValue; // 0xd8
    }; // Size: 0xdc
    Params_AdjustForViewportWidth params{};
    params.CurrentWidth = (float)CurrentWidth;
    params.CurrentRatio = (float)CurrentRatio;
    params.IdealWidth = (float)IdealWidth;
    params.IdealRatio = (float)IdealRatio;
    params.K2Node_MakeStruct_Margin = (FMargin)K2Node_MakeStruct_Margin;
    params.K2Node_MakeStruct_Margin_1 = (FMargin)K2Node_MakeStruct_Margin_1;
    params.K2Node_MakeStruct_Margin_2 = (FMargin)K2Node_MakeStruct_Margin_2;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_1 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_1;
    params.K2Node_MakeStruct_Margin_3 = (FMargin)K2Node_MakeStruct_Margin_3;
    params.K2Node_MathExpression_ReturnValue = (float)K2Node_MathExpression_ReturnValue;
    params.CallFunc_SlotAsCanvasSlot_ReturnValue_2 = (UCanvasPanelSlot*)CallFunc_SlotAsCanvasSlot_ReturnValue_2;
    params.K2Node_MakeStruct_Margin_4 = (FMargin)K2Node_MakeStruct_Margin_4;
    params.K2Node_MakeStruct_Margin_5 = (FMargin)K2Node_MakeStruct_Margin_5;
    params.K2Node_MakeStruct_Margin_6 = (FMargin)K2Node_MakeStruct_Margin_6;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.K2Node_MakeStruct_Margin_7 = (FMargin)K2Node_MakeStruct_Margin_7;
    params.CallFunc_SlotAsSizeBoxSlot_ReturnValue = (USizeBoxSlot*)CallFunc_SlotAsSizeBoxSlot_ReturnValue;
    params.K2Node_MathExpression_ReturnValue_1 = (float)K2Node_MathExpression_ReturnValue_1;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_GetViewportSize_ReturnValue = (FVector2D)CallFunc_GetViewportSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_Divide_FloatFloat_ReturnValue = (float)CallFunc_Divide_FloatFloat_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::ChangesConfirmed__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.ChangesConfirmed__DelegateSignature"));
    struct Params_ChangesConfirmed__DelegateSignature {
    }; // Size: 0x0
    Params_ChangesConfirmed__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::ConfirmChanges(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue) {}
void UUI_BP_Salon_C::SequenceEvent__ENTRYPOINTUI_BP_Salon_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.SequenceEvent__ENTRYPOINTUI_BP_Salon_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_Salon_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_Salon_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::ScrollSelectedItemIntoView(int32_t PageIndex, bool K2Node_SwitchInteger_CmpSuccess, UAvatarCreatorPage* K2Node_DynamicCast_AsAvatar_Creator_Page, bool K2Node_DynamicCast_bSuccess) {}
void UUI_BP_Salon_C::RestoreInitialGearAppearances(APawn* BipedPlayer, FGearItemID CallFunc_GetActorEquippedGearItemID_ReturnValue, bool CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue, bool CallFunc_RemoveGearAppearanceOverride_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, FGearItemID CallFunc_GetActorEquippedGearItemID_ReturnValue_1, bool CallFunc_RemoveGearAppearanceOverride_ReturnValue_1, bool CallFunc_IsEmpty_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, bool CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.RestoreInitialGearAppearances"));
    struct Params_RestoreInitialGearAppearances {
        APawn* BipedPlayer; // 0x0
        FGearItemID CallFunc_GetActorEquippedGearItemID_ReturnValue; // 0x8
        bool CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue; // 0x1c
        bool CallFunc_RemoveGearAppearanceOverride_ReturnValue; // 0x1d
        char pad_1e[0x2];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x20
        FGearItemID CallFunc_GetActorEquippedGearItemID_ReturnValue_1; // 0x28
        bool CallFunc_RemoveGearAppearanceOverride_ReturnValue_1; // 0x3c
        bool CallFunc_IsEmpty_ReturnValue; // 0x3d
        bool CallFunc_IsEmpty_ReturnValue_1; // 0x3e
        bool CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue_1; // 0x3f
    }; // Size: 0x40
    Params_RestoreInitialGearAppearances params{};
    params.BipedPlayer = (APawn*)BipedPlayer;
    params.CallFunc_GetActorEquippedGearItemID_ReturnValue = (FGearItemID)CallFunc_GetActorEquippedGearItemID_ReturnValue;
    params.CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue = (bool)CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue;
    params.CallFunc_RemoveGearAppearanceOverride_ReturnValue = (bool)CallFunc_RemoveGearAppearanceOverride_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetActorEquippedGearItemID_ReturnValue_1 = (FGearItemID)CallFunc_GetActorEquippedGearItemID_ReturnValue_1;
    params.CallFunc_RemoveGearAppearanceOverride_ReturnValue_1 = (bool)CallFunc_RemoveGearAppearanceOverride_ReturnValue_1;
    params.CallFunc_IsEmpty_ReturnValue = (bool)CallFunc_IsEmpty_ReturnValue;
    params.CallFunc_IsEmpty_ReturnValue_1 = (bool)CallFunc_IsEmpty_ReturnValue_1;
    params.CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue_1 = (bool)CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::EquipInvisibleGearAppearances(bool CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue, bool CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue_1, FString CallFunc_GetEquippedGearAppearanceOverrideID_ReturnValue, FString CallFunc_GetEquippedGearAppearanceOverrideID_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.EquipInvisibleGearAppearances"));
    struct Params_EquipInvisibleGearAppearances {
        bool CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue; // 0x0
        bool CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue_1; // 0x1
        char pad_2[0x6];
        FString CallFunc_GetEquippedGearAppearanceOverrideID_ReturnValue; // 0x8
        FString CallFunc_GetEquippedGearAppearanceOverrideID_ReturnValue_1; // 0x18
    }; // Size: 0x28
    Params_EquipInvisibleGearAppearances params{};
    params.CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue = (bool)CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue;
    params.CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue_1 = (bool)CallFunc_SetEquippedGearAppearanceOverrideID_ReturnValue_1;
    params.CallFunc_GetEquippedGearAppearanceOverrideID_ReturnValue = (FString)CallFunc_GetEquippedGearAppearanceOverrideID_ReturnValue;
    params.CallFunc_GetEquippedGearAppearanceOverrideID_ReturnValue_1 = (FString)CallFunc_GetEquippedGearAppearanceOverrideID_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::ConfirmButtonHoldReleased(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.ConfirmButtonHoldReleased"));
    struct Params_ConfirmButtonHoldReleased {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_ConfirmButtonHoldReleased params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::ChildPageLoaded(UAsyncLoadWrapper* Child) {}
void UUI_BP_Salon_C::UpdatePreviewActor(EAvatarPresetType PresetType, FName PresetName) {}
void UUI_BP_Salon_C::InitLegend(TArray<FLegendItemData> TempLegendItems) {}
void UUI_BP_Salon_C::UpdateCurrentPreset(EAvatarPresetType PresetType, FName PresetId) {}
void UUI_BP_Salon_C::RefreshTitleKey(FString CallFunc_Array_Get_Item) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.RefreshTitleKey"));
    struct Params_RefreshTitleKey {
        FString CallFunc_Array_Get_Item; // 0x0
    }; // Size: 0x10
    Params_RefreshTitleKey params{};
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_Salon_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, FString CallFunc_Array_Get_Item) {}
void UUI_BP_Salon_C::VO_OnItemPurchasedFailedNoMoney(FString CallFunc_MakeLiteralString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.VO_OnItemPurchasedFailedNoMoney"));
    struct Params_VO_OnItemPurchasedFailedNoMoney {
        FString CallFunc_MakeLiteralString_ReturnValue; // 0x0
        AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_VO_OnItemPurchasedFailedNoMoney params{};
    params.CallFunc_MakeLiteralString_ReturnValue = (FString)CallFunc_MakeLiteralString_ReturnValue;
    params.CallFunc_GetActorFromEntityNameBP_ReturnValue = (AActor*)CallFunc_GetActorFromEntityNameBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::VO_OnLeavePreview(FString CallFunc_MakeLiteralString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.VO_OnLeavePreview"));
    struct Params_VO_OnLeavePreview {
        FString CallFunc_MakeLiteralString_ReturnValue; // 0x0
        AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_VO_OnLeavePreview params{};
    params.CallFunc_MakeLiteralString_ReturnValue = (FString)CallFunc_MakeLiteralString_ReturnValue;
    params.CallFunc_GetActorFromEntityNameBP_ReturnValue = (AActor*)CallFunc_GetActorFromEntityNameBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::VO_OnGearPreview(FString CallFunc_MakeLiteralString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.VO_OnGearPreview"));
    struct Params_VO_OnGearPreview {
        FString CallFunc_MakeLiteralString_ReturnValue; // 0x0
        AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_VO_OnGearPreview params{};
    params.CallFunc_MakeLiteralString_ReturnValue = (FString)CallFunc_MakeLiteralString_ReturnValue;
    params.CallFunc_GetActorFromEntityNameBP_ReturnValue = (AActor*)CallFunc_GetActorFromEntityNameBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::BndEvt__UI_BP_Salon_creatorSwitcher_K2Node_ComponentBoundEvent_4_WidgetActiveEvent__DelegateSignature(UUserWidget* ActiveWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.BndEvt__UI_BP_Salon_creatorSwitcher_K2Node_ComponentBoundEvent_4_WidgetActiveEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Salon_creatorSwitcher_K2Node_ComponentBoundEvent_4_WidgetActiveEvent__DelegateSignature {
        UUserWidget* ActiveWidget; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Salon_creatorSwitcher_K2Node_ComponentBoundEvent_4_WidgetActiveEvent__DelegateSignature params{};
    params.ActiveWidget = (UUserWidget*)ActiveWidget;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::BndEvt__UI_BP_Salon_AsyncEyebrows_K2Node_ComponentBoundEvent_2_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.BndEvt__UI_BP_Salon_AsyncEyebrows_K2Node_ComponentBoundEvent_2_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Salon_AsyncEyebrows_K2Node_ComponentBoundEvent_2_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Salon_AsyncEyebrows_K2Node_ComponentBoundEvent_2_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::VO_OnItemPurchased(FString CallFunc_MakeLiteralString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.VO_OnItemPurchased"));
    struct Params_VO_OnItemPurchased {
        FString CallFunc_MakeLiteralString_ReturnValue; // 0x0
        AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_VO_OnItemPurchased params{};
    params.CallFunc_MakeLiteralString_ReturnValue = (FString)CallFunc_MakeLiteralString_ReturnValue;
    params.CallFunc_GetActorFromEntityNameBP_ReturnValue = (AActor*)CallFunc_GetActorFromEntityNameBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::VO_OnEnterVendor(FString CallFunc_MakeLiteralString_ReturnValue, AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.VO_OnEnterVendor"));
    struct Params_VO_OnEnterVendor {
        FString CallFunc_MakeLiteralString_ReturnValue; // 0x0
        AActor* CallFunc_GetActorFromEntityNameBP_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_VO_OnEnterVendor params{};
    params.CallFunc_MakeLiteralString_ReturnValue = (FString)CallFunc_MakeLiteralString_ReturnValue;
    params.CallFunc_GetActorFromEntityNameBP_ReturnValue = (AActor*)CallFunc_GetActorFromEntityNameBP_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::BndEvt__UI_BP_Salon_AsyncComplexion_K2Node_ComponentBoundEvent_3_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.BndEvt__UI_BP_Salon_AsyncComplexion_K2Node_ComponentBoundEvent_3_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Salon_AsyncComplexion_K2Node_ComponentBoundEvent_3_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Salon_AsyncComplexion_K2Node_ComponentBoundEvent_3_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
bool UUI_BP_Salon_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x1];
        int32_t CallFunc_Array_LastIndex_ReturnValue; // 0x4
        bool CallFunc_IsVisible_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x9
        bool CallFunc_IsVisible_ReturnValue_1; // 0xa
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0xb
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0xc
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0xd
        char pad_e[0x2];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x10
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x14
        bool CallFunc_Less_IntInt_ReturnValue; // 0x18
        char pad_19[0x3];
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x1c
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x20
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x21
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x22
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0x23
    }; // Size: 0x24
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_Array_LastIndex_ReturnValue = (int32_t)CallFunc_Array_LastIndex_ReturnValue;
    params.CallFunc_IsVisible_ReturnValue = (bool)CallFunc_IsVisible_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_IsVisible_ReturnValue_1 = (bool)CallFunc_IsVisible_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_Salon_C::DiscardChanges(UPanelWidget* CallFunc_GetParent_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.DiscardChanges"));
    struct Params_DiscardChanges {
        UPanelWidget* CallFunc_GetParent_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_DiscardChanges params{};
    params.CallFunc_GetParent_ReturnValue = (UPanelWidget*)CallFunc_GetParent_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::BndEvt__UI_BP_Salon_NavBarHorizontal_K2Node_ComponentBoundEvent_5_ChangedCategory__DelegateSignature(int32_t NewCategoryIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.BndEvt__UI_BP_Salon_NavBarHorizontal_K2Node_ComponentBoundEvent_5_ChangedCategory__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Salon_NavBarHorizontal_K2Node_ComponentBoundEvent_5_ChangedCategory__DelegateSignature {
        int32_t NewCategoryIndex; // 0x0
    }; // Size: 0x4
    Params_BndEvt__UI_BP_Salon_NavBarHorizontal_K2Node_ComponentBoundEvent_5_ChangedCategory__DelegateSignature params{};
    params.NewCategoryIndex = (int32_t)NewCategoryIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::BndEvt__UI_BP_Salon_AsyncHair_K2Node_ComponentBoundEvent_0_AsyncWrapperClassLoadEvent__DelegateSignature(UAsyncLoadWrapper* SelfReference) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.BndEvt__UI_BP_Salon_AsyncHair_K2Node_ComponentBoundEvent_0_AsyncWrapperClassLoadEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Salon_AsyncHair_K2Node_ComponentBoundEvent_0_AsyncWrapperClassLoadEvent__DelegateSignature {
        UAsyncLoadWrapper* SelfReference; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_Salon_AsyncHair_K2Node_ComponentBoundEvent_0_AsyncWrapperClassLoadEvent__DelegateSignature params{};
    params.SelfReference = (UAsyncLoadWrapper*)SelfReference;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::On_Preset_Selected(EAvatarPresetType PresetType, FString PrestName, FName CallFunc_Conv_StringToName_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.On Preset Selected"));
    struct Params_On_Preset_Selected {
        EAvatarPresetType PresetType; // 0x0
        char pad_1[0x7];
        FString PrestName; // 0x8
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x18
    }; // Size: 0x20
    Params_On_Preset_Selected params{};
    params.PresetType = (EAvatarPresetType)PresetType;
    params.PrestName = (FString)PrestName;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::AvatarPresetDefinitionsMapToStringMaps() {}
void UUI_BP_Salon_C::Category_Switch(int32_t NewIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.Category Switch"));
    struct Params_Category_Switch {
        int32_t NewIndex; // 0x0
    }; // Size: 0x4
    Params_Category_Switch params{};
    params.NewIndex = (int32_t)NewIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::GoToPage(int32_t PageIndex, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_GoToCategory_CategoryChanged) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.GoToPage"));
    struct Params_GoToPage {
        int32_t PageIndex; // 0x0
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x4
        bool CallFunc_GoToCategory_CategoryChanged; // 0x5
    }; // Size: 0x6
    Params_GoToPage params{};
    params.PageIndex = (int32_t)PageIndex;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    params.CallFunc_GoToCategory_CategoryChanged = (bool)CallFunc_GoToCategory_CategoryChanged;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::StartBackgroundSmokeOutro() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.StartBackgroundSmokeOutro"));
    struct Params_StartBackgroundSmokeOutro {
    }; // Size: 0x0
    Params_StartBackgroundSmokeOutro params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::ChangesDiscarded__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.ChangesDiscarded__DelegateSignature"));
    struct Params_ChangesDiscarded__DelegateSignature {
    }; // Size: 0x0
    Params_ChangesDiscarded__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::PresetButtonClicked(UObject* Caller, FString String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.PresetButtonClicked"));
    struct Params_PresetButtonClicked {
        UObject* Caller; // 0x0
        FString String; // 0x8
    }; // Size: 0x18
    Params_PresetButtonClicked params{};
    params.Caller = (UObject*)Caller;
    params.String = (FString)String;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::BndEvt__UI_BP_Salon_NavBarHorizontal_K2Node_ComponentBoundEvent_1_HoveredCategory__DelegateSignature(int32_t ButtonIndex, UIconButtonWidget* CategoryButton) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.BndEvt__UI_BP_Salon_NavBarHorizontal_K2Node_ComponentBoundEvent_1_HoveredCategory__DelegateSignature"));
    struct Params_BndEvt__UI_BP_Salon_NavBarHorizontal_K2Node_ComponentBoundEvent_1_HoveredCategory__DelegateSignature {
        int32_t ButtonIndex; // 0x0
        char pad_4[0x4];
        UIconButtonWidget* CategoryButton; // 0x8
    }; // Size: 0x10
    Params_BndEvt__UI_BP_Salon_NavBarHorizontal_K2Node_ComponentBoundEvent_1_HoveredCategory__DelegateSignature params{};
    params.ButtonIndex = (int32_t)ButtonIndex;
    params.CategoryButton = (UIconButtonWidget*)CategoryButton;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::StartBackgroundSmokeIntro() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.StartBackgroundSmokeIntro"));
    struct Params_StartBackgroundSmokeIntro {
    }; // Size: 0x0
    Params_StartBackgroundSmokeIntro params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Salon_C::ExecuteUbergraph_UI_BP_Salon(int32_t EntryPoint, UObject* K2Node_CustomEvent_Caller, FString K2Node_CustomEvent_String, FString CallFunc_Split_LeftS, FString CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, EAvatarPresetType CallFunc_StringToPresetType_ReturnValue, TArray<UUI_BP_AsyncLoadWrapper_C*>& K2Node_MakeArray_Array, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32_t K2Node_Event_IntroType, float K2Node_Event_IntroDuration, int32_t K2Node_Event_OutroType_1, float K2Node_Event_OutroDuration, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t K2Node_Event_OutroType, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, UCustomizableCharacterComponent* CallFunc_GetComponentByClass_ReturnValue) {}
void UUI_BP_Salon_C::PresetSelected__DelegateSignature(EAvatarPresetType PresetType, FString PresetName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/CharacterCreator/UI_BP_Salon.UI_BP_Salon_C.PresetSelected__DelegateSignature"));
    struct Params_PresetSelected__DelegateSignature {
        EAvatarPresetType PresetType; // 0x0
        char pad_1[0x7];
        FString PresetName; // 0x8
    }; // Size: 0x18
    Params_PresetSelected__DelegateSignature params{};
    params.PresetType = (EAvatarPresetType)PresetType;
    params.PresetName = (FString)PresetName;
    ProcessEvent(func, &params);
}
