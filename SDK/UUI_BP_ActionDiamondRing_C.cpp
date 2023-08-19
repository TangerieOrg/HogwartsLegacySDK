#include "ABiped_Player.hpp"
#include "ESlateVisibility.hpp"
#include "EUIPlatformInputDevice.hpp"
#include "FLockManagerLock.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UActionDiamondRing.hpp"
#include "UBorder.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_ActionDiamondRing_C.hpp"
#include "UUI_BP_ActionRingItem_C.hpp"
#include "UUI_BP_MiniSelectionDiamond_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_ActionDiamondRing_C::HideDiamondFX(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.HideDiamondFX"));
    struct Params_HideDiamondFX {
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_HideDiamondFX params{};
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
UUI_BP_ActionDiamondRing_C* UUI_BP_ActionDiamondRing_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C");
    return (UUI_BP_ActionDiamondRing_C*)res;
}
void UUI_BP_ActionDiamondRing_C::SetMiniDiamondElementsVisibility(int32_t GroupIndex, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_MiniSelectionDiamond_C* CallFunc_Array_Get_Item, UUI_BP_MiniSelectionDiamond_C* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, int32_t CallFunc_GetBonusSpellLoadouts_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.SetMiniDiamondElementsVisibility"));
    struct Params_SetMiniDiamondElementsVisibility {
        int32_t GroupIndex; // 0x0
        int32_t Temp_int_Array_Index_Variable; // 0x4
        int32_t Temp_int_Loop_Counter_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        UUI_BP_MiniSelectionDiamond_C* CallFunc_Array_Get_Item; // 0x10
        UUI_BP_MiniSelectionDiamond_C* CallFunc_Array_Get_Item_1; // 0x18
        int32_t CallFunc_Array_Length_ReturnValue; // 0x20
        bool CallFunc_Less_IntInt_ReturnValue; // 0x24
        char pad_25[0x3];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x28
        int32_t CallFunc_GetBonusSpellLoadouts_ReturnValue; // 0x30
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x34
        bool CallFunc_LessEqual_IntInt_ReturnValue; // 0x35
    }; // Size: 0x36
    Params_SetMiniDiamondElementsVisibility params{};
    params.GroupIndex = (int32_t)GroupIndex;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (UUI_BP_MiniSelectionDiamond_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (UUI_BP_MiniSelectionDiamond_C*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetBonusSpellLoadouts_ReturnValue = (int32_t)CallFunc_GetBonusSpellLoadouts_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_LessEqual_IntInt_ReturnValue = (bool)CallFunc_LessEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::AdjustButtonGraphicsForSwitch(bool UseSwitchGraphics, bool Temp_bool_Variable, FString Temp_string_Variable, FString Temp_string_Variable_1, bool Temp_bool_Variable_1, FString Temp_string_Variable_2, FString Temp_string_Variable_3, bool Temp_bool_Variable_2, FString Temp_string_Variable_4, FString Temp_string_Variable_5, bool Temp_bool_Variable_3, FString Temp_string_Variable_6, FString Temp_string_Variable_7, FString K2Node_Select_Default, FString K2Node_Select_Default_1, FString K2Node_Select_Default_2, FString K2Node_Select_Default_3, EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.AdjustButtonGraphicsForSwitch"));
    struct Params_AdjustButtonGraphicsForSwitch {
        bool UseSwitchGraphics; // 0x0
        bool Temp_bool_Variable; // 0x1
        char pad_2[0x6];
        FString Temp_string_Variable; // 0x8
        FString Temp_string_Variable_1; // 0x18
        bool Temp_bool_Variable_1; // 0x28
        char pad_29[0x7];
        FString Temp_string_Variable_2; // 0x30
        FString Temp_string_Variable_3; // 0x40
        bool Temp_bool_Variable_2; // 0x50
        char pad_51[0x7];
        FString Temp_string_Variable_4; // 0x58
        FString Temp_string_Variable_5; // 0x68
        bool Temp_bool_Variable_3; // 0x78
        char pad_79[0x7];
        FString Temp_string_Variable_6; // 0x80
        FString Temp_string_Variable_7; // 0x90
        FString K2Node_Select_Default; // 0xa0
        FString K2Node_Select_Default_1; // 0xb0
        FString K2Node_Select_Default_2; // 0xc0
        FString K2Node_Select_Default_3; // 0xd0
        EUIPlatformInputDevice CallFunc_GetUIPlatformInputDevice_ReturnValue; // 0xe0
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0xe1
    }; // Size: 0xe2
    Params_AdjustButtonGraphicsForSwitch params{};
    params.UseSwitchGraphics = (bool)UseSwitchGraphics;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_string_Variable = (FString)Temp_string_Variable;
    params.Temp_string_Variable_1 = (FString)Temp_string_Variable_1;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_string_Variable_2 = (FString)Temp_string_Variable_2;
    params.Temp_string_Variable_3 = (FString)Temp_string_Variable_3;
    params.Temp_bool_Variable_2 = (bool)Temp_bool_Variable_2;
    params.Temp_string_Variable_4 = (FString)Temp_string_Variable_4;
    params.Temp_string_Variable_5 = (FString)Temp_string_Variable_5;
    params.Temp_bool_Variable_3 = (bool)Temp_bool_Variable_3;
    params.Temp_string_Variable_6 = (FString)Temp_string_Variable_6;
    params.Temp_string_Variable_7 = (FString)Temp_string_Variable_7;
    params.K2Node_Select_Default = (FString)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (FString)K2Node_Select_Default_1;
    params.K2Node_Select_Default_2 = (FString)K2Node_Select_Default_2;
    params.K2Node_Select_Default_3 = (FString)K2Node_Select_Default_3;
    params.CallFunc_GetUIPlatformInputDevice_ReturnValue = (EUIPlatformInputDevice)CallFunc_GetUIPlatformInputDevice_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::ToggleRevelioSpellSelectionPrompts(bool InSouthpaw) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.ToggleRevelioSpellSelectionPrompts"));
    struct Params_ToggleRevelioSpellSelectionPrompts {
        bool InSouthpaw; // 0x0
    }; // Size: 0x1
    Params_ToggleRevelioSpellSelectionPrompts params{};
    params.InSouthpaw = (bool)InSouthpaw;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::ShowMiniDiamond0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.ShowMiniDiamond"));
    struct Params_ShowMiniDiamond {
    }; // Size: 0x0
    Params_ShowMiniDiamond params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::UpdateBackAndFill(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.UpdateBackAndFill"));
    struct Params_UpdateBackAndFill {
        bool CallFunc_IsValid_ReturnValue; // 0x0
        bool CallFunc_IsValid_ReturnValue_1; // 0x1
    }; // Size: 0x2
    Params_UpdateBackAndFill params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::SetActionRingVisibility(bool IgnoreLocks, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32_t CallFunc_GetConsoleVariableAsInt_Value, bool CallFunc_GetConsoleVariableAsInt_bExists, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsUnlockedPure_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.SetActionRingVisibility"));
    struct Params_SetActionRingVisibility {
        bool IgnoreLocks; // 0x0
        bool Temp_bool_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_1; // 0x3
        int32_t CallFunc_GetConsoleVariableAsInt_Value; // 0x4
        bool CallFunc_GetConsoleVariableAsInt_bExists; // 0x8
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x9
        bool CallFunc_IsUnlockedPure_ReturnValue; // 0xa
        bool CallFunc_BooleanAND_ReturnValue; // 0xb
        bool CallFunc_BooleanOR_ReturnValue; // 0xc
        bool CallFunc_BooleanOR_ReturnValue_1; // 0xd
        ESlateVisibility K2Node_Select_Default; // 0xe
    }; // Size: 0xf
    Params_SetActionRingVisibility params{};
    params.IgnoreLocks = (bool)IgnoreLocks;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.CallFunc_GetConsoleVariableAsInt_Value = (int32_t)CallFunc_GetConsoleVariableAsInt_Value;
    params.CallFunc_GetConsoleVariableAsInt_bExists = (bool)CallFunc_GetConsoleVariableAsInt_bExists;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_IsUnlockedPure_ReturnValue = (bool)CallFunc_IsUnlockedPure_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::BndEvt__UI_BP_ActionDiamondRing_actionItem_Left_K2Node_ComponentBoundEvent_7_UnBlacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Left_K2Node_ComponentBoundEvent_7_UnBlacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Left_K2Node_ComponentBoundEvent_7_UnBlacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Left_K2Node_ComponentBoundEvent_7_UnBlacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::SetSpellSelectionVisibility(bool IgnoreLocks, int32_t CallFunc_GetConsoleVariableAsInt_Value, bool CallFunc_GetConsoleVariableAsInt_bExists, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsUnlockedPure_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.SetSpellSelectionVisibility"));
    struct Params_SetSpellSelectionVisibility {
        bool IgnoreLocks; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_GetConsoleVariableAsInt_Value; // 0x4
        bool CallFunc_GetConsoleVariableAsInt_bExists; // 0x8
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x9
        bool CallFunc_BooleanAND_ReturnValue; // 0xa
        bool CallFunc_IsUnlockedPure_ReturnValue; // 0xb
        bool CallFunc_BooleanOR_ReturnValue; // 0xc
        bool CallFunc_BooleanOR_ReturnValue_1; // 0xd
    }; // Size: 0xe
    Params_SetSpellSelectionVisibility params{};
    params.IgnoreLocks = (bool)IgnoreLocks;
    params.CallFunc_GetConsoleVariableAsInt_Value = (int32_t)CallFunc_GetConsoleVariableAsInt_Value;
    params.CallFunc_GetConsoleVariableAsInt_bExists = (bool)CallFunc_GetConsoleVariableAsInt_bExists;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_IsUnlockedPure_ReturnValue = (bool)CallFunc_IsUnlockedPure_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::ToggleMiniDiamondPrompts(bool InSouthpaw) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.ToggleMiniDiamondPrompts"));
    struct Params_ToggleMiniDiamondPrompts {
        bool InSouthpaw; // 0x0
    }; // Size: 0x1
    Params_ToggleMiniDiamondPrompts params{};
    params.InSouthpaw = (bool)InSouthpaw;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::ShowDiamondFX(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.ShowDiamondFX"));
    struct Params_ShowDiamondFX {
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ShowDiamondFX params{};
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::SetButtonVisibility(UWidget* Button, bool Show, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_GetShouldShowButtonGraphics_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.SetButtonVisibility"));
    struct Params_SetButtonVisibility {
        UWidget* Button; // 0x0
        bool Show; // 0x8
        bool Temp_bool_Variable; // 0x9
        ESlateVisibility Temp_byte_Variable; // 0xa
        ESlateVisibility Temp_byte_Variable_1; // 0xb
        char pad_c[0x4];
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x10
        bool CallFunc_GetShouldShowButtonGraphics_ReturnValue; // 0x18
        bool CallFunc_BooleanAND_ReturnValue; // 0x19
        ESlateVisibility K2Node_Select_Default; // 0x1a
    }; // Size: 0x1b
    Params_SetButtonVisibility params{};
    params.Button = (UWidget*)Button;
    params.Show = (bool)Show;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_GetShouldShowButtonGraphics_ReturnValue = (bool)CallFunc_GetShouldShowButtonGraphics_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::SetRevelioVisibility(bool IgnoreLocks, int32_t CallFunc_GetConsoleVariableAsInt_Value, bool CallFunc_GetConsoleVariableAsInt_bExists, bool CallFunc_IsUnlockedPure_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.SetRevelioVisibility"));
    struct Params_SetRevelioVisibility {
        bool IgnoreLocks; // 0x0
        char pad_1[0x3];
        int32_t CallFunc_GetConsoleVariableAsInt_Value; // 0x4
        bool CallFunc_GetConsoleVariableAsInt_bExists; // 0x8
        bool CallFunc_IsUnlockedPure_ReturnValue; // 0x9
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0xa
        bool CallFunc_BooleanOR_ReturnValue; // 0xb
        bool CallFunc_BooleanAND_ReturnValue; // 0xc
        bool CallFunc_BooleanOR_ReturnValue_1; // 0xd
    }; // Size: 0xe
    Params_SetRevelioVisibility params{};
    params.IgnoreLocks = (bool)IgnoreLocks;
    params.CallFunc_GetConsoleVariableAsInt_Value = (int32_t)CallFunc_GetConsoleVariableAsInt_Value;
    params.CallFunc_GetConsoleVariableAsInt_bExists = (bool)CallFunc_GetConsoleVariableAsInt_bExists;
    params.CallFunc_IsUnlockedPure_ReturnValue = (bool)CallFunc_IsUnlockedPure_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::UpdateMiniDiamond0(int32_t GroupIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.UpdateMiniDiamond"));
    struct Params_UpdateMiniDiamond {
        int32_t GroupIndex; // 0x0
    }; // Size: 0x4
    Params_UpdateMiniDiamond params{};
    params.GroupIndex = (int32_t)GroupIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::BndEvt__UI_BP_ActionDiamondRing_actionItem_Bottom_K2Node_ComponentBoundEvent_5_UnBlacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Bottom_K2Node_ComponentBoundEvent_5_UnBlacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Bottom_K2Node_ComponentBoundEvent_5_UnBlacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Bottom_K2Node_ComponentBoundEvent_5_UnBlacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::ShowButtonCallouts0(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.ShowButtonCallouts"));
    struct Params_ShowButtonCallouts {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_ShowButtonCallouts params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::EnableAllSpellsChanged(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.EnableAllSpellsChanged"));
    struct Params_EnableAllSpellsChanged {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_EnableAllSpellsChanged params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::NewDiamondSelected0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.NewDiamondSelected"));
    struct Params_NewDiamondSelected {
    }; // Size: 0x0
    Params_NewDiamondSelected params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::PassiveSpellLockChanged(UObject* Caller, FLockManagerLock& Lock) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.PassiveSpellLockChanged"));
    struct Params_PassiveSpellLockChanged {
        UObject* Caller; // 0x0
        FLockManagerLock Lock; // 0x8
    }; // Size: 0x14
    Params_PassiveSpellLockChanged params{};
    params.Caller = (UObject*)Caller;
    params.Lock = (FLockManagerLock)Lock;
    ProcessEvent(func, &params);
    Lock = params.Lock;
}
void UUI_BP_ActionDiamondRing_C::BndEvt__UI_BP_ActionDiamondRing_actionItem_Top_K2Node_ComponentBoundEvent_0_Blacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Top_K2Node_ComponentBoundEvent_0_Blacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Top_K2Node_ComponentBoundEvent_0_Blacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Top_K2Node_ComponentBoundEvent_0_Blacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::BndEvt__UI_BP_ActionDiamondRing_actionItem_Top_K2Node_ComponentBoundEvent_1_UnBlacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Top_K2Node_ComponentBoundEvent_1_UnBlacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Top_K2Node_ComponentBoundEvent_1_UnBlacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Top_K2Node_ComponentBoundEvent_1_UnBlacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::BndEvt__UI_BP_ActionDiamondRing_actionItem_Right_K2Node_ComponentBoundEvent_2_Blacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Right_K2Node_ComponentBoundEvent_2_Blacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Right_K2Node_ComponentBoundEvent_2_Blacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Right_K2Node_ComponentBoundEvent_2_Blacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::OnShowHUDElement0(bool IgnoreLocks) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.OnShowHUDElement"));
    struct Params_OnShowHUDElement {
        bool IgnoreLocks; // 0x0
    }; // Size: 0x1
    Params_OnShowHUDElement params{};
    params.IgnoreLocks = (bool)IgnoreLocks;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::BndEvt__UI_BP_ActionDiamondRing_actionItem_Right_K2Node_ComponentBoundEvent_3_UnBlacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Right_K2Node_ComponentBoundEvent_3_UnBlacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Right_K2Node_ComponentBoundEvent_3_UnBlacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Right_K2Node_ComponentBoundEvent_3_UnBlacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::BeginChannelingWingardiumLeviosa(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BeginChannelingWingardiumLeviosa"));
    struct Params_BeginChannelingWingardiumLeviosa {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_BeginChannelingWingardiumLeviosa params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::BndEvt__UI_BP_ActionDiamondRing_actionItem_Bottom_K2Node_ComponentBoundEvent_4_Blacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Bottom_K2Node_ComponentBoundEvent_4_Blacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Bottom_K2Node_ComponentBoundEvent_4_Blacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Bottom_K2Node_ComponentBoundEvent_4_Blacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::BndEvt__UI_BP_ActionDiamondRing_actionItem_Left_K2Node_ComponentBoundEvent_6_Blacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.BndEvt__UI_BP_ActionDiamondRing_actionItem_Left_K2Node_ComponentBoundEvent_6_Blacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Left_K2Node_ComponentBoundEvent_6_Blacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionDiamondRing_actionItem_Left_K2Node_ComponentBoundEvent_6_Blacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::OnShowButtonsChanged0(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.OnShowButtonsChanged"));
    struct Params_OnShowButtonsChanged {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_OnShowButtonsChanged params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::Settings_SouthpawToggled(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.Settings_SouthpawToggled"));
    struct Params_Settings_SouthpawToggled {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_Settings_SouthpawToggled params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::OnHideHUDElement0(ESlateVisibility HiddenState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.OnHideHUDElement"));
    struct Params_OnHideHUDElement {
        ESlateVisibility HiddenState; // 0x0
    }; // Size: 0x1
    Params_OnHideHUDElement params{};
    params.HiddenState = (ESlateVisibility)HiddenState;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::MenuSpellSelectionLockChanged(UObject* Caller, FLockManagerLock& Lock) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.MenuSpellSelectionLockChanged"));
    struct Params_MenuSpellSelectionLockChanged {
        UObject* Caller; // 0x0
        FLockManagerLock Lock; // 0x8
    }; // Size: 0x14
    Params_MenuSpellSelectionLockChanged params{};
    params.Caller = (UObject*)Caller;
    params.Lock = (FLockManagerLock)Lock;
    ProcessEvent(func, &params);
    Lock = params.Lock;
}
void UUI_BP_ActionDiamondRing_C::LockedDiamondSelected(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.LockedDiamondSelected"));
    struct Params_LockedDiamondSelected {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_LockedDiamondSelected params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::EndChannelingWidgardiumLeviosa(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.EndChannelingWidgardiumLeviosa"));
    struct Params_EndChannelingWidgardiumLeviosa {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_EndChannelingWidgardiumLeviosa params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::RefreshButtonCallouts(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/UI_BP_ActionDiamondRing.UI_BP_ActionDiamondRing_C.RefreshButtonCallouts"));
    struct Params_RefreshButtonCallouts {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_RefreshButtonCallouts params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionDiamondRing_C::ExecuteUbergraph_UI_BP_ActionDiamondRing(int32_t EntryPoint) {}
