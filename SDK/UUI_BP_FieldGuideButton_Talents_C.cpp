#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UFieldGuideButton_Talents.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UI_E_FieldGuideLabelPositions\Type.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UTutorialSystem.hpp"
#include "UUI_BP_FieldGuideButton_Talents_C.hpp"
#include "UUI_BP_NewIndicator_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_FieldGuideButton_Talents_C* UUI_BP_FieldGuideButton_Talents_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Talents.UI_BP_FieldGuideButton_Talents_C");
    return (UUI_BP_FieldGuideButton_Talents_C*)res;
}
void UUI_BP_FieldGuideButton_Talents_C::SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Talents_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Talents.UI_BP_FieldGuideButton_Talents_C.SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Talents_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Talents_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Talents_0 params{};
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_FieldGuideButton_Talents_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_FieldGuideButton_Talents_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Talents.UI_BP_FieldGuideButton_Talents_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Talents_C::Play_Button_Loop_Animation() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Talents.UI_BP_FieldGuideButton_Talents_C.Play Button Loop Animation"));
    struct Params_Play_Button_Loop_Animation {
    }; // Size: 0x0
    Params_Play_Button_Loop_Animation params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Talents_C::BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Talents.UI_BP_FieldGuideButton_Talents_C.BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Talents_C::BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Talents.UI_BP_FieldGuideButton_Talents_C.BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Talents_C::BndEvt__iconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Talents.UI_BP_FieldGuideButton_Talents_C.BndEvt__iconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Talents_C::OnSetItemIndicatorVisibility(ESlateVisibility InVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Talents.UI_BP_FieldGuideButton_Talents_C.OnSetItemIndicatorVisibility"));
    struct Params_OnSetItemIndicatorVisibility {
        ESlateVisibility InVisibility; // 0x0
    }; // Size: 0x1
    Params_OnSetItemIndicatorVisibility params{};
    params.InVisibility = (ESlateVisibility)InVisibility;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Talents_C::SetLockedState(bool IsLocked) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Talents.UI_BP_FieldGuideButton_Talents_C.SetLockedState"));
    struct Params_SetLockedState {
        bool IsLocked; // 0x0
    }; // Size: 0x1
    Params_SetLockedState params{};
    params.IsLocked = (bool)IsLocked;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Talents_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Talents.UI_BP_FieldGuideButton_Talents_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Talents_C::SetIsTutorialHighlighted(bool bIsTutorialHighlighted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Talents.UI_BP_FieldGuideButton_Talents_C.SetIsTutorialHighlighted"));
    struct Params_SetIsTutorialHighlighted {
        bool bIsTutorialHighlighted; // 0x0
    }; // Size: 0x1
    Params_SetIsTutorialHighlighted params{};
    params.bIsTutorialHighlighted = (bool)bIsTutorialHighlighted;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Talents_C::ExecuteUbergraph_UI_BP_FieldGuideButton_Talents(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, ESlateVisibility K2Node_Event_InVisibility, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsLocked, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsTutorialHighlighted, UTutorialSystem* CallFunc_Get_ReturnValue, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Talents.UI_BP_FieldGuideButton_Talents_C.ExecuteUbergraph_UI_BP_FieldGuideButton_Talents"));
    struct Params_ExecuteUbergraph_UI_BP_FieldGuideButton_Talents {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x8
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x10
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x14
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x18
        ESlateVisibility K2Node_Event_InVisibility; // 0x20
        char pad_21[0x7];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x28
        bool K2Node_SwitchEnum_CmpSuccess; // 0x30
        bool K2Node_Event_IsLocked; // 0x31
        bool K2Node_Event_IsDesignTime; // 0x32
        bool K2Node_Event_bIsTutorialHighlighted; // 0x33
        char pad_34[0x4];
        UTutorialSystem* CallFunc_Get_ReturnValue; // 0x38
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue; // 0x40
    }; // Size: 0x41
    Params_ExecuteUbergraph_UI_BP_FieldGuideButton_Talents params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.K2Node_Event_InVisibility = (ESlateVisibility)K2Node_Event_InVisibility;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.K2Node_Event_IsLocked = (bool)K2Node_Event_IsLocked;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.K2Node_Event_bIsTutorialHighlighted = (bool)K2Node_Event_bIsTutorialHighlighted;
    params.CallFunc_Get_ReturnValue = (UTutorialSystem*)CallFunc_Get_ReturnValue;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue;
    ProcessEvent(func, &params);
}
