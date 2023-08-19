#include "ABiped_Player.hpp"
#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UButton.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTexture2D.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_GadgetWheelItem_C.hpp"
#include "UUI_BP_NewIndicator_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_GadgetWheelItem_C::SetNewItemIndicatorVisibility(bool IsUnlocked, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_IsItemNew_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.SetNewItemIndicatorVisibility"));
    struct Params_SetNewItemIndicatorVisibility {
        bool IsUnlocked; // 0x0
        char pad_1[0x7];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x8
        bool CallFunc_IsItemNew_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetNewItemIndicatorVisibility params{};
    params.IsUnlocked = (bool)IsUnlocked;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_IsItemNew_ReturnValue = (bool)CallFunc_IsItemNew_ReturnValue;
    ProcessEvent(func, &params);
}
UUI_BP_GadgetWheelItem_C* UUI_BP_GadgetWheelItem_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/GadgetWheel/UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C");
    return (UUI_BP_GadgetWheelItem_C*)res;
}
TArray<FString> UUI_BP_GadgetWheelItem_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue) {}
void UUI_BP_GadgetWheelItem_C::SetActiveHighlightColor(bool Temp_bool_Variable, FSlateColor CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FSlateColor K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.SetActiveHighlightColor"));
    struct Params_SetActiveHighlightColor {
        bool Temp_bool_Variable; // 0x0
        char pad_1[0x7];
        FSlateColor CallFunc_Map_Find_Value; // 0x8
        bool CallFunc_Map_Find_ReturnValue; // 0x30
        char pad_31[0x7];
        FSlateColor K2Node_Select_Default; // 0x38
    }; // Size: 0x60
    Params_SetActiveHighlightColor params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_Map_Find_Value = (FSlateColor)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    params.K2Node_Select_Default = (FSlateColor)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheelItem_C::OnClickEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.OnClickEvent__DelegateSignature"));
    struct Params_OnClickEvent__DelegateSignature {
    }; // Size: 0x0
    Params_OnClickEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheelItem_C::ToggleHighlight(bool isHighlighted, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.ToggleHighlight"));
    struct Params_ToggleHighlight {
        bool isHighlighted; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_ToggleHighlight params{};
    params.isHighlighted = (bool)isHighlighted;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheelItem_C::ItemMeterIconLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.ItemMeterIconLoaded"));
    struct Params_ItemMeterIconLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_ItemMeterIconLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheelItem_C::UpdateFillMeter(float FillPercentage, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_GetPotionDuration_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, float CallFunc_GetAbilityDurationRemaining_ReturnValue, bool CallFunc_GetAbilityActive_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.UpdateFillMeter"));
    struct Params_UpdateFillMeter {
        float FillPercentage; // 0x0
        char pad_4[0x4];
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x8
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1; // 0x10
        float CallFunc_GetPotionDuration_ReturnValue; // 0x18
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x1c
        char pad_1d[0x3];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x20
        float CallFunc_GetAbilityDurationRemaining_ReturnValue; // 0x28
        bool CallFunc_GetAbilityActive_ReturnValue; // 0x2c
        char pad_2d[0x3];
        float CallFunc_MapRangeClamped_ReturnValue; // 0x30
        char pad_34[0x4];
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2; // 0x38
    }; // Size: 0x40
    Params_UpdateFillMeter params{};
    params.FillPercentage = (float)FillPercentage;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_1;
    params.CallFunc_GetPotionDuration_ReturnValue = (float)CallFunc_GetPotionDuration_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetAbilityDurationRemaining_ReturnValue = (float)CallFunc_GetAbilityDurationRemaining_ReturnValue;
    params.CallFunc_GetAbilityActive_ReturnValue = (bool)CallFunc_GetAbilityActive_ReturnValue;
    params.CallFunc_MapRangeClamped_ReturnValue = (float)CallFunc_MapRangeClamped_ReturnValue;
    params.CallFunc_GetDynamicMaterial_ReturnValue_2 = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue_2;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheelItem_C::SetItemData(FName ItemName, int32_t Count, bool IsUnlocked, ESlateVisibility Temp_byte_Variable) {}
void UUI_BP_GadgetWheelItem_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheelItem_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheelItem_C::BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheelItem_C::BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheelItem_C::BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_GadgetWheelItem_BoundingBox_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheelItem_C::UpdateToolMeter(float Percentage) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.UpdateToolMeter"));
    struct Params_UpdateToolMeter {
        float Percentage; // 0x0
    }; // Size: 0x4
    Params_UpdateToolMeter params{};
    params.Percentage = (float)Percentage;
    ProcessEvent(func, &params);
}
void UUI_BP_GadgetWheelItem_C::ExecuteUbergraph_UI_BP_GadgetWheelItem(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, float CallFunc_GetRenderTransformAngle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, UTexture2D* K2Node_CustomEvent_LoadedTexture, UObject* K2Node_CustomEvent_CallbackParam, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_CustomEvent_Percentage) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/GadgetWheel/UI_BP_GadgetWheelItem.UI_BP_GadgetWheelItem_C.ExecuteUbergraph_UI_BP_GadgetWheelItem"));
    struct Params_ExecuteUbergraph_UI_BP_GadgetWheelItem {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
        char pad_5[0x3];
        float CallFunc_GetRenderTransformAngle_ReturnValue; // 0x8
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0xc
        UTexture2D* K2Node_CustomEvent_LoadedTexture; // 0x10
        UObject* K2Node_CustomEvent_CallbackParam; // 0x18
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x20
        float K2Node_CustomEvent_Percentage; // 0x28
    }; // Size: 0x2c
    Params_ExecuteUbergraph_UI_BP_GadgetWheelItem params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_GetRenderTransformAngle_ReturnValue = (float)CallFunc_GetRenderTransformAngle_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.K2Node_CustomEvent_LoadedTexture = (UTexture2D*)K2Node_CustomEvent_LoadedTexture;
    params.K2Node_CustomEvent_CallbackParam = (UObject*)K2Node_CustomEvent_CallbackParam;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    params.K2Node_CustomEvent_Percentage = (float)K2Node_CustomEvent_Percentage;
    ProcessEvent(func, &params);
}
