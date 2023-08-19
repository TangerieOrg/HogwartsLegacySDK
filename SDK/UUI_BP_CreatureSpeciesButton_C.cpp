#include "FPointerToUberGraphFrame.hpp"
#include "UButton.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixImage.hpp"
#include "UUI_BP_CreatureSpeciesButton_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_CreatureSpeciesButton_C::BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__TheButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
UUI_BP_CreatureSpeciesButton_C* UUI_BP_CreatureSpeciesButton_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Creatures/UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C");
    return (UUI_BP_CreatureSpeciesButton_C*)res;
}
void UUI_BP_CreatureSpeciesButton_C::SetEnabled(bool Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.SetEnabled"));
    struct Params_SetEnabled {
        bool Enabled; // 0x0
    }; // Size: 0x1
    Params_SetEnabled params{};
    params.Enabled = (bool)Enabled;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureSpeciesButton_C::SetEmptyButton(bool IsEmpty) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.SetEmptyButton"));
    struct Params_SetEmptyButton {
        bool IsEmpty; // 0x0
    }; // Size: 0x1
    Params_SetEmptyButton params{};
    params.IsEmpty = (bool)IsEmpty;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureSpeciesButton_C::SetIsSelected(bool buttonSelected, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.SetIsSelected"));
    struct Params_SetIsSelected {
        bool buttonSelected; // 0x0
        char pad_1[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_SetIsSelected params{};
    params.buttonSelected = (bool)buttonSelected;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureSpeciesButton_C::InitSpeciesButton(FName TypeID, int32_t Count, bool CallFunc_NotEqual_NameName_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.InitSpeciesButton"));
    struct Params_InitSpeciesButton {
        FName TypeID; // 0x0
        int32_t Count; // 0x8
        bool CallFunc_NotEqual_NameName_ReturnValue; // 0xc
        char pad_d[0x3];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x10
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x20
    }; // Size: 0x21
    Params_InitSpeciesButton params{};
    params.TypeID = (FName)TypeID;
    params.Count = (int32_t)Count;
    params.CallFunc_NotEqual_NameName_ReturnValue = (bool)CallFunc_NotEqual_NameName_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureSpeciesButton_C::OnHovered__DelegateSignature(UUI_BP_CreatureSpeciesButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.OnHovered__DelegateSignature"));
    struct Params_OnHovered__DelegateSignature {
        UUI_BP_CreatureSpeciesButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnHovered__DelegateSignature params{};
    params.Button = (UUI_BP_CreatureSpeciesButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureSpeciesButton_C::SetHighlighted(bool NewHighlighted, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.SetHighlighted"));
    struct Params_SetHighlighted {
        bool NewHighlighted; // 0x0
        bool CallFunc_NotEqual_BoolBool_ReturnValue; // 0x1
        bool CallFunc_BooleanAND_ReturnValue; // 0x2
    }; // Size: 0x3
    Params_SetHighlighted params{};
    params.NewHighlighted = (bool)NewHighlighted;
    params.CallFunc_NotEqual_BoolBool_ReturnValue = (bool)CallFunc_NotEqual_BoolBool_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureSpeciesButton_C::GetSpeciesID(FName& TypeID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.GetSpeciesID"));
    struct Params_GetSpeciesID {
        FName TypeID; // 0x0
    }; // Size: 0x8
    Params_GetSpeciesID params{};
    params.TypeID = (FName)TypeID;
    ProcessEvent(func, &params);
    TypeID = params.TypeID;
}
void UUI_BP_CreatureSpeciesButton_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__ClickButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureSpeciesButton_C::BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__ClickButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureSpeciesButton_C::CustomEvent(bool bIsTutorialHighlighted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.CustomEvent"));
    struct Params_CustomEvent {
        bool bIsTutorialHighlighted; // 0x0
    }; // Size: 0x1
    Params_CustomEvent params{};
    params.bIsTutorialHighlighted = (bool)bIsTutorialHighlighted;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureSpeciesButton_C::ExecuteUbergraph_UI_BP_CreatureSpeciesButton(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_Event_bIsTutorialHighlighted, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.ExecuteUbergraph_UI_BP_CreatureSpeciesButton"));
    struct Params_ExecuteUbergraph_UI_BP_CreatureSpeciesButton {
        int32_t EntryPoint; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x8
        char pad_c[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x18
        bool K2Node_Event_bIsTutorialHighlighted; // 0x20
        char pad_21[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x28
    }; // Size: 0x30
    Params_ExecuteUbergraph_UI_BP_CreatureSpeciesButton params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.K2Node_Event_bIsTutorialHighlighted = (bool)K2Node_Event_bIsTutorialHighlighted;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureSpeciesButton_C::OnClicked__DelegateSignature(UUI_BP_CreatureSpeciesButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.OnClicked__DelegateSignature"));
    struct Params_OnClicked__DelegateSignature {
        UUI_BP_CreatureSpeciesButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnClicked__DelegateSignature params{};
    params.Button = (UUI_BP_CreatureSpeciesButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureSpeciesButton_C::OnUnhovered__DelegateSignature(UUI_BP_CreatureSpeciesButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureSpeciesButton.UI_BP_CreatureSpeciesButton_C.OnUnhovered__DelegateSignature"));
    struct Params_OnUnhovered__DelegateSignature {
        UUI_BP_CreatureSpeciesButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_OnUnhovered__DelegateSignature params{};
    params.Button = (UUI_BP_CreatureSpeciesButton_C*)Button;
    ProcessEvent(func, &params);
}
