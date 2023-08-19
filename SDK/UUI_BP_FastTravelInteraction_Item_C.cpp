#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UAvaUserWidget.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_FastTravelInteraction_Item_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_FastTravelInteraction_Item_C::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
UUI_BP_FastTravelInteraction_Item_C* UUI_BP_FastTravelInteraction_Item_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C");
    return (UUI_BP_FastTravelInteraction_Item_C*)res;
}
void UUI_BP_FastTravelInteraction_Item_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelInteraction_Item_C::IsEnabled(bool& Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.IsEnabled"));
    struct Params_IsEnabled {
        bool Enabled; // 0x0
    }; // Size: 0x1
    Params_IsEnabled params{};
    params.Enabled = (bool)Enabled;
    ProcessEvent(func, &params);
    Enabled = params.Enabled;
}
void UUI_BP_FastTravelInteraction_Item_C::SetEnable(bool Enable, FSlateColor K2Node_MakeStruct_SlateColor, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_MakeStruct_SlateColor_2, FSlateColor K2Node_MakeStruct_SlateColor_3, FSlateColor K2Node_MakeStruct_SlateColor_4, FSlateColor K2Node_MakeStruct_SlateColor_5) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.SetEnable"));
    struct Params_SetEnable {
        bool Enable; // 0x0
        char pad_1[0x7];
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x8
        FSlateColor K2Node_MakeStruct_SlateColor_1; // 0x30
        FSlateColor K2Node_MakeStruct_SlateColor_2; // 0x58
        FSlateColor K2Node_MakeStruct_SlateColor_3; // 0x80
        FSlateColor K2Node_MakeStruct_SlateColor_4; // 0xa8
        FSlateColor K2Node_MakeStruct_SlateColor_5; // 0xd0
    }; // Size: 0xf8
    Params_SetEnable params{};
    params.Enable = (bool)Enable;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    params.K2Node_MakeStruct_SlateColor_1 = (FSlateColor)K2Node_MakeStruct_SlateColor_1;
    params.K2Node_MakeStruct_SlateColor_2 = (FSlateColor)K2Node_MakeStruct_SlateColor_2;
    params.K2Node_MakeStruct_SlateColor_3 = (FSlateColor)K2Node_MakeStruct_SlateColor_3;
    params.K2Node_MakeStruct_SlateColor_4 = (FSlateColor)K2Node_MakeStruct_SlateColor_4;
    params.K2Node_MakeStruct_SlateColor_5 = (FSlateColor)K2Node_MakeStruct_SlateColor_5;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelInteraction_Item_C::SetItemData(int32_t ItemIndex, FString ItemId, bool K2Node_SwitchInteger_CmpSuccess, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.SetItemData"));
    struct Params_SetItemData {
        int32_t ItemIndex; // 0x0
        char pad_4[0x4];
        FString ItemId; // 0x8
        bool K2Node_SwitchInteger_CmpSuccess; // 0x18
        char pad_19[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x20
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x30
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x40
    }; // Size: 0x41
    Params_SetItemData params{};
    params.ItemIndex = (int32_t)ItemIndex;
    params.ItemId = (FString)ItemId;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelInteraction_Item_C::SetItemState(bool IsActive, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.SetItemState"));
    struct Params_SetItemState {
        bool IsActive; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        bool CallFunc_IsAnimationPlaying_ReturnValue; // 0x10
        bool CallFunc_IsAnimationPlaying_ReturnValue_1; // 0x11
        char pad_12[0x6];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1; // 0x18
    }; // Size: 0x20
    Params_SetItemState params{};
    params.IsActive = (bool)IsActive;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_IsAnimationPlaying_ReturnValue = (bool)CallFunc_IsAnimationPlaying_ReturnValue;
    params.CallFunc_IsAnimationPlaying_ReturnValue_1 = (bool)CallFunc_IsAnimationPlaying_ReturnValue_1;
    params.CallFunc_PlayAnimationForward_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelInteraction_Item_C::BndEvt__itemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.BndEvt__itemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__itemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__itemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelInteraction_Item_C::BndEvt__UI_BP_FastTravelInteraction_Item_itemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.BndEvt__UI_BP_FastTravelInteraction_Item_itemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_FastTravelInteraction_Item_itemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_FastTravelInteraction_Item_itemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelInteraction_Item_C::ExecuteUbergraph_UI_BP_FastTravelInteraction_Item(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.ExecuteUbergraph_UI_BP_FastTravelInteraction_Item"));
    struct Params_ExecuteUbergraph_UI_BP_FastTravelInteraction_Item {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_UI_BP_FastTravelInteraction_Item params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelInteraction_Item_C::OnFastTravelButtonHovered__DelegateSignature(UUI_BP_FastTravelInteraction_Item_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.OnFastTravelButtonHovered__DelegateSignature"));
    struct Params_OnFastTravelButtonHovered__DelegateSignature {
        UUI_BP_FastTravelInteraction_Item_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnFastTravelButtonHovered__DelegateSignature params{};
    params.Button = (UUI_BP_FastTravelInteraction_Item_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_FastTravelInteraction_Item_C::OnFastTravelButtonSelected__DelegateSignature(UUI_BP_FastTravelInteraction_Item_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_FastTravelInteraction_Item.UI_BP_FastTravelInteraction_Item_C.OnFastTravelButtonSelected__DelegateSignature"));
    struct Params_OnFastTravelButtonSelected__DelegateSignature {
        UUI_BP_FastTravelInteraction_Item_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnFastTravelButtonSelected__DelegateSignature params{};
    params.Button = (UUI_BP_FastTravelInteraction_Item_C*)Button;
    ProcessEvent(func, &params);
}
