#include "FPointerToUberGraphFrame.hpp"
#include "UButton.hpp"
#include "UFunction.hpp"
#include "UUI_BP_StoreScrollButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_StoreScrollButton_C::OnScrollButtonClicked__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StoreScrollButton.UI_BP_StoreScrollButton_C.OnScrollButtonClicked__DelegateSignature"));
    struct Params_OnScrollButtonClicked__DelegateSignature {
    }; // Size: 0x0
    Params_OnScrollButtonClicked__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_StoreScrollButton_C::BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StoreScrollButton.UI_BP_StoreScrollButton_C.BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
UUI_BP_StoreScrollButton_C* UUI_BP_StoreScrollButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/Store/UI_BP_StoreScrollButton.UI_BP_StoreScrollButton_C");
    return (UUI_BP_StoreScrollButton_C*)res;
}
void UUI_BP_StoreScrollButton_C::BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StoreScrollButton.UI_BP_StoreScrollButton_C.BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_StoreScrollButton_C::BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StoreScrollButton.UI_BP_StoreScrollButton_C.BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_StoreScrollButton_scrollButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_StoreScrollButton_C::ExecuteUbergraph_UI_BP_StoreScrollButton(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Store/UI_BP_StoreScrollButton.UI_BP_StoreScrollButton_C.ExecuteUbergraph_UI_BP_StoreScrollButton"));
    struct Params_ExecuteUbergraph_UI_BP_StoreScrollButton {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_ExecuteUbergraph_UI_BP_StoreScrollButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    ProcessEvent(func, &params);
}
