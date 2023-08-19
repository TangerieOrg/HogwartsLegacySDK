#include "ESlateVisibility.hpp"
#include "ESpellCategory.hpp"
#include "EUIQActionBarType.hpp"
#include "FDataTableRowHandle.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UActionRingItem.hpp"
#include "UBorder.hpp"
#include "UButton.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_ActionRingItem_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_ActionRingItem_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::I_SetImage(FString ImageName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.I_SetImage"));
    struct Params_I_SetImage {
        FString ImageName; // 0x0
    }; // Size: 0x10
    Params_I_SetImage params{};
    params.ImageName = (FString)ImageName;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::FillMeter(float NewPct, bool IsASpell, bool CallFunc_LessEqual_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.FillMeter"));
    struct Params_FillMeter {
        float NewPct; // 0x0
        bool IsASpell; // 0x4
        bool CallFunc_LessEqual_FloatFloat_ReturnValue; // 0x5
        char pad_6[0x2];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x8
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x10
        char pad_11[0x7];
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x18
        bool CallFunc_BooleanAND_ReturnValue; // 0x20
        char pad_21[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x28
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1; // 0x30
        bool CallFunc_IsAnimationPlaying_ReturnValue; // 0x38
    }; // Size: 0x39
    Params_FillMeter params{};
    params.NewPct = (float)NewPct;
    params.IsASpell = (bool)IsASpell;
    params.CallFunc_LessEqual_FloatFloat_ReturnValue = (bool)CallFunc_LessEqual_FloatFloat_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_1;
    params.CallFunc_IsAnimationPlaying_ReturnValue = (bool)CallFunc_IsAnimationPlaying_ReturnValue;
    ProcessEvent(func, &params);
}
UUI_BP_ActionRingItem_C* UUI_BP_ActionRingItem_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C");
    return (UUI_BP_ActionRingItem_C*)res;
}
void UUI_BP_ActionRingItem_C::OnItemIconTextureLoaded(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnItemIconTextureLoaded"));
    struct Params_OnItemIconTextureLoaded {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_OnItemIconTextureLoaded params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::ToggleEmptyItem(bool IsEmptySlot, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.ToggleEmptyItem"));
    struct Params_ToggleEmptyItem {
        bool IsEmptySlot; // 0x0
        bool Temp_bool_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_1; // 0x3
        bool Temp_bool_Variable_1; // 0x4
        ESlateVisibility Temp_byte_Variable_2; // 0x5
        ESlateVisibility Temp_byte_Variable_3; // 0x6
        ESlateVisibility K2Node_Select_Default; // 0x7
        ESlateVisibility K2Node_Select_Default_1; // 0x8
    }; // Size: 0x9
    Params_ToggleEmptyItem params{};
    params.IsEmptySlot = (bool)IsEmptySlot;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::I_GetIconName(FString& IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.I_GetIconName"));
    struct Params_I_GetIconName {
        FString IconName; // 0x0
    }; // Size: 0x10
    Params_I_GetIconName params{};
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
    IconName = params.IconName;
}
void UUI_BP_ActionRingItem_C::UnBlacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.UnBlacklisted__DelegateSignature"));
    struct Params_UnBlacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_UnBlacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::SetSpellMeterColor(ESpellCategory SpellCategory, FDataTableRowHandle TempColorTag, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, bool K2Node_SwitchEnum_CmpSuccess, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_2, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_3, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_4, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_5, FLinearColor CallFunc_GetColorByTag_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.SetSpellMeterColor"));
    struct Params_SetSpellMeterColor {
        ESpellCategory SpellCategory; // 0x0
        char pad_1[0x7];
        FDataTableRowHandle TempColorTag; // 0x8
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle; // 0x18
        bool K2Node_SwitchEnum_CmpSuccess; // 0x28
        char pad_29[0x7];
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1; // 0x30
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_2; // 0x40
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_3; // 0x50
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_4; // 0x60
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_5; // 0x70
        FLinearColor CallFunc_GetColorByTag_ReturnValue; // 0x80
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x90
    }; // Size: 0x98
    Params_SetSpellMeterColor params{};
    params.SpellCategory = (ESpellCategory)SpellCategory;
    params.TempColorTag = (FDataTableRowHandle)TempColorTag;
    params.K2Node_MakeStruct_DataTableRowHandle = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.K2Node_MakeStruct_DataTableRowHandle_1 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_1;
    params.K2Node_MakeStruct_DataTableRowHandle_2 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_2;
    params.K2Node_MakeStruct_DataTableRowHandle_3 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_3;
    params.K2Node_MakeStruct_DataTableRowHandle_4 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_4;
    params.K2Node_MakeStruct_DataTableRowHandle_5 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_5;
    params.CallFunc_GetColorByTag_ReturnValue = (FLinearColor)CallFunc_GetColorByTag_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::I_SetIconSize(FVector2D Size) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.I_SetIconSize"));
    struct Params_I_SetIconSize {
        FVector2D Size; // 0x0
    }; // Size: 0x8
    Params_I_SetIconSize params{};
    params.Size = (FVector2D)Size;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::OnSpellCastFailed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnSpellCastFailed"));
    struct Params_OnSpellCastFailed {
    }; // Size: 0x0
    Params_OnSpellCastFailed params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::OnIconTextureLoaded(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnIconTextureLoaded"));
    struct Params_OnIconTextureLoaded {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_OnIconTextureLoaded params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::I_AddExtraContent(UWidget* NewContent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.I_AddExtraContent"));
    struct Params_I_AddExtraContent {
        UWidget* NewContent; // 0x0
    }; // Size: 0x8
    Params_I_AddExtraContent params{};
    params.NewContent = (UWidget*)NewContent;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::I_SetIconName(FString IconName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.I_SetIconName"));
    struct Params_I_SetIconName {
        FString IconName; // 0x0
    }; // Size: 0x10
    Params_I_SetIconName params{};
    params.IconName = (FString)IconName;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::SetSubWidgetVisibility(EUIQActionBarType ItemType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.SetSubWidgetVisibility"));
    struct Params_SetSubWidgetVisibility {
        EUIQActionBarType ItemType; // 0x0
    }; // Size: 0x1
    Params_SetSubWidgetVisibility params{};
    params.ItemType = (EUIQActionBarType)ItemType;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::OnUpdateMeter(float pct, bool IsASpell) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnUpdateMeter"));
    struct Params_OnUpdateMeter {
        float pct; // 0x0
        bool IsASpell; // 0x4
    }; // Size: 0x5
    Params_OnUpdateMeter params{};
    params.pct = (float)pct;
    params.IsASpell = (bool)IsASpell;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::Blacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.Blacklisted__DelegateSignature"));
    struct Params_Blacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_Blacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::OnSetItemInventoryData(bool IsConsumable, int32_t ItemCount) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnSetItemInventoryData"));
    struct Params_OnSetItemInventoryData {
        bool IsConsumable; // 0x0
        char pad_1[0x3];
        int32_t ItemCount; // 0x4
    }; // Size: 0x8
    Params_OnSetItemInventoryData params{};
    params.IsConsumable = (bool)IsConsumable;
    params.ItemCount = (int32_t)ItemCount;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::WidgetAnimationEvt_ShowSpellFull_K2Node_WidgetAnimationEvent_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.WidgetAnimationEvt_ShowSpellFull_K2Node_WidgetAnimationEvent_0"));
    struct Params_WidgetAnimationEvt_ShowSpellFull_K2Node_WidgetAnimationEvent_0 {
    }; // Size: 0x0
    Params_WidgetAnimationEvt_ShowSpellFull_K2Node_WidgetAnimationEvent_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::OnToggleEmptyItem(bool IsEmpty) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnToggleEmptyItem"));
    struct Params_OnToggleEmptyItem {
        bool IsEmpty; // 0x0
    }; // Size: 0x1
    Params_OnToggleEmptyItem params{};
    params.IsEmpty = (bool)IsEmpty;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::OnHideItemCount() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnHideItemCount"));
    struct Params_OnHideItemCount {
    }; // Size: 0x0
    Params_OnHideItemCount params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::OnOverlayTextureLoaded(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.OnOverlayTextureLoaded"));
    struct Params_OnOverlayTextureLoaded {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_OnOverlayTextureLoaded params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::ExecuteUbergraph_UI_BP_ActionRingItem(int32_t EntryPoint, ESpellCategory CallFunc_GetSpellCategory_ReturnValue, bool K2Node_Event_IsDesignTime, UTexture2D* K2Node_Event_Texture_2, UWidget* K2Node_Event_NewContent, FString K2Node_Event_IconName, FVector2D K2Node_Event_Size, EUIQActionBarType K2Node_Event_ItemType, float K2Node_Event_pct, bool K2Node_Event_IsASpell, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsConsumable, int32_t K2Node_Event_ItemCount, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsEmpty, UTexture2D* K2Node_Event_Texture_1) {}
void UUI_BP_ActionRingItem_C::ToggleSelectionHighlight(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.ToggleSelectionHighlight"));
    struct Params_ToggleSelectionHighlight {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_ToggleSelectionHighlight params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::MarkSpellAsBlacklisted() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.MarkSpellAsBlacklisted"));
    struct Params_MarkSpellAsBlacklisted {
    }; // Size: 0x0
    Params_MarkSpellAsBlacklisted params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::ClearSpellAsBlacklisted() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.ClearSpellAsBlacklisted"));
    struct Params_ClearSpellAsBlacklisted {
    }; // Size: 0x0
    Params_ClearSpellAsBlacklisted params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionRingItem_C::SetColorBlindMode(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionRingItem.UI_BP_ActionRingItem_C.SetColorBlindMode"));
    struct Params_SetColorBlindMode {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_SetColorBlindMode params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
