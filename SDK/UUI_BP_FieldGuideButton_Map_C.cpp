#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UFieldGuideButtonBase.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UI_E_FieldGuideLabelPositions\Type.hpp"
#include "UImage.hpp"
#include "UMapSubSystem.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UTutorialSystem.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_FieldGuideButton_Map_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_FieldGuideButton_Map_C* UUI_BP_FieldGuideButton_Map_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Map.UI_BP_FieldGuideButton_Map_C");
    return (UUI_BP_FieldGuideButton_Map_C*)res;
}
void UUI_BP_FieldGuideButton_Map_C::SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Map_1() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Map.UI_BP_FieldGuideButton_Map_C.SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Map_1"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Map_1 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Map_1 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Map_C::SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Map_0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Map.UI_BP_FieldGuideButton_Map_C.SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Map_0"));
    struct Params_SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Map_0 {
    }; // Size: 0x0
    Params_SequenceEvent__ENTRYPOINTUI_BP_FieldGuideButton_Map_0 params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Map_C::PauseButtonLoopAnimation(float CallFunc_PauseAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Map.UI_BP_FieldGuideButton_Map_C.PauseButtonLoopAnimation"));
    struct Params_PauseButtonLoopAnimation {
        float CallFunc_PauseAnimation_ReturnValue; // 0x0
    }; // Size: 0x4
    Params_PauseButtonLoopAnimation params{};
    params.CallFunc_PauseAnimation_ReturnValue = (float)CallFunc_PauseAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Map_C::Play_Button_Loop_Animation(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Map.UI_BP_FieldGuideButton_Map_C.Play Button Loop Animation"));
    struct Params_Play_Button_Loop_Animation {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Play_Button_Loop_Animation params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_FieldGuideButton_Map_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_FieldGuideButton_Map_C::BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Map.UI_BP_FieldGuideButton_Map_C.BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Map_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Map.UI_BP_FieldGuideButton_Map_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Map_C::BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Map.UI_BP_FieldGuideButton_Map_C.BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Map_C::BndEvt__iconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Map.UI_BP_FieldGuideButton_Map_C.BndEvt__iconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__iconButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Map_C::SetLockedState(bool IsLocked) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Map.UI_BP_FieldGuideButton_Map_C.SetLockedState"));
    struct Params_SetLockedState {
        bool IsLocked; // 0x0
    }; // Size: 0x1
    Params_SetLockedState params{};
    params.IsLocked = (bool)IsLocked;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Map_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Map.UI_BP_FieldGuideButton_Map_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Map_C::SetIsTutorialHighlighted(bool bIsTutorialHighlighted) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Map.UI_BP_FieldGuideButton_Map_C.SetIsTutorialHighlighted"));
    struct Params_SetIsTutorialHighlighted {
        bool bIsTutorialHighlighted; // 0x0
    }; // Size: 0x1
    Params_SetIsTutorialHighlighted params{};
    params.bIsTutorialHighlighted = (bool)bIsTutorialHighlighted;
    ProcessEvent(func, &params);
}
void UUI_BP_FieldGuideButton_Map_C::ExecuteUbergraph_UI_BP_FieldGuideButton_Map(int32_t EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue, bool CallFunc_IsDungeon_ReturnValue, bool Temp_bool_Variable_2, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, bool K2Node_Event_IsLocked, float K2Node_Select_Default_2, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsTutorialHighlighted, UTutorialSystem* CallFunc_Get_ReturnValue_1, bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Index/UI_BP_FieldGuideButton_Map.UI_BP_FieldGuideButton_Map_C.ExecuteUbergraph_UI_BP_FieldGuideButton_Map"));
    struct Params_ExecuteUbergraph_UI_BP_FieldGuideButton_Map {
        int32_t EntryPoint; // 0x0
        ESlateVisibility Temp_byte_Variable; // 0x4
        ESlateVisibility Temp_byte_Variable_1; // 0x5
        bool Temp_bool_Variable; // 0x6
        ESlateVisibility Temp_byte_Variable_2; // 0x7
        ESlateVisibility Temp_byte_Variable_3; // 0x8
        bool Temp_bool_Variable_1; // 0x9
        char pad_a[0x2];
        float Temp_float_Variable; // 0xc
        float Temp_float_Variable_1; // 0x10
        char pad_14[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x18
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x20
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x28
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x2c
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x30
        UUIManager* CallFunc_Get_ReturnValue; // 0x38
        UMapSubSystem* CallFunc_GetMapSubSystem_ReturnValue; // 0x40
        bool CallFunc_IsDungeon_ReturnValue; // 0x48
        bool Temp_bool_Variable_2; // 0x49
        ESlateVisibility K2Node_Select_Default; // 0x4a
        ESlateVisibility K2Node_Select_Default_1; // 0x4b
        bool K2Node_Event_IsLocked; // 0x4c
        char pad_4d[0x3];
        float K2Node_Select_Default_2; // 0x50
        bool K2Node_Event_IsDesignTime; // 0x54
        bool K2Node_Event_bIsTutorialHighlighted; // 0x55
        char pad_56[0x2];
        UTutorialSystem* CallFunc_Get_ReturnValue_1; // 0x58
        bool CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue; // 0x60
    }; // Size: 0x61
    Params_ExecuteUbergraph_UI_BP_FieldGuideButton_Map params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_float_Variable = (float)Temp_float_Variable;
    params.Temp_float_Variable_1 = (float)Temp_float_Variable_1;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetMapSubSystem_ReturnValue = (UMapSubSystem*)CallFunc_GetMapSubSystem_ReturnValue;
    params.CallFunc_IsDungeon_ReturnValue = (bool)CallFunc_IsDungeon_ReturnValue;
    params.Temp_bool_Variable_2 = (bool)Temp_bool_Variable_2;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    params.K2Node_Event_IsLocked = (bool)K2Node_Event_IsLocked;
    params.K2Node_Select_Default_2 = (float)K2Node_Select_Default_2;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.K2Node_Event_bIsTutorialHighlighted = (bool)K2Node_Event_bIsTutorialHighlighted;
    params.CallFunc_Get_ReturnValue_1 = (UTutorialSystem*)CallFunc_Get_ReturnValue_1;
    params.CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue = (bool)CallFunc_IsTutorialActiveOrAboutToBe_ReturnValue;
    ProcessEvent(func, &params);
}
