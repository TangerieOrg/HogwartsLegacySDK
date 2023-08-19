#include "ABiped_Player.hpp"
#include "ESlateVisibility.hpp"
#include "FLockManagerLock.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UActionDiamondRing.hpp"
#include "UBorder.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_ActionHUD_PC_C.hpp"
#include "UUI_BP_ActionHUD_PC_MiniHUD_C.hpp"
#include "UUI_BP_ActionRingItem_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_ActionHUD_PC_C::NewDiamondSelected0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.NewDiamondSelected"));
    struct Params_NewDiamondSelected {
    }; // Size: 0x0
    Params_NewDiamondSelected params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::SetButtonVisibility(UPhoenixRichTextBlock* Button, bool Show, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, bool CallFunc_GetShouldShowButtonGraphics_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.SetButtonVisibility"));
    struct Params_SetButtonVisibility {
        UPhoenixRichTextBlock* Button; // 0x0
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
    params.Button = (UPhoenixRichTextBlock*)Button;
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
void UUI_BP_ActionHUD_PC_C::SetSpellSelectionVisibility(bool IgnoreLocks, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32_t CallFunc_GetConsoleVariableAsInt_Value, bool CallFunc_GetConsoleVariableAsInt_bExists, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsUnlockedPure_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.SetSpellSelectionVisibility"));
    struct Params_SetSpellSelectionVisibility {
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
    Params_SetSpellSelectionVisibility params{};
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
void UUI_BP_ActionHUD_PC_C::BndEvt__UI_BP_ActionHUD_PC_actionItem_1_K2Node_ComponentBoundEvent_0_Blacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_1_K2Node_ComponentBoundEvent_0_Blacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_1_K2Node_ComponentBoundEvent_0_Blacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_1_K2Node_ComponentBoundEvent_0_Blacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
UUI_BP_ActionHUD_PC_C* UUI_BP_ActionHUD_PC_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C");
    return (UUI_BP_ActionHUD_PC_C*)res;
}
void UUI_BP_ActionHUD_PC_C::SetGroupNotificationVisibility(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, int32_t CallFunc_GetBonusSpellLoadouts_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.SetGroupNotificationVisibility"));
    struct Params_SetGroupNotificationVisibility {
        bool Temp_bool_Variable; // 0x0
        ESlateVisibility Temp_byte_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable_1; // 0x2
        char pad_3[0x5];
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x8
        int32_t CallFunc_GetBonusSpellLoadouts_ReturnValue; // 0x10
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x14
        ESlateVisibility K2Node_Select_Default; // 0x15
    }; // Size: 0x16
    Params_SetGroupNotificationVisibility params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetBonusSpellLoadouts_ReturnValue = (int32_t)CallFunc_GetBonusSpellLoadouts_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::HideDiamondFX(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.HideDiamondFX"));
    struct Params_HideDiamondFX {
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_HideDiamondFX params{};
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::SetActionBarVisibility(bool IgnoreLocks, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32_t CallFunc_GetConsoleVariableAsInt_Value, bool CallFunc_GetConsoleVariableAsInt_bExists, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsUnlockedPure_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.SetActionBarVisibility"));
    struct Params_SetActionBarVisibility {
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
    Params_SetActionBarVisibility params{};
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
void UUI_BP_ActionHUD_PC_C::ShowDiamondFX(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.ShowDiamondFX"));
    struct Params_ShowDiamondFX {
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ShowDiamondFX params{};
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::OnHideHUDElement0(ESlateVisibility HiddenState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.OnHideHUDElement"));
    struct Params_OnHideHUDElement {
        ESlateVisibility HiddenState; // 0x0
    }; // Size: 0x1
    Params_OnHideHUDElement params{};
    params.HiddenState = (ESlateVisibility)HiddenState;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::SetRevelioVisibility(bool IgnoreLocks, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, int32_t CallFunc_GetConsoleVariableAsInt_Value, bool CallFunc_GetConsoleVariableAsInt_bExists, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsUnlockedPure_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.SetRevelioVisibility"));
    struct Params_SetRevelioVisibility {
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
    Params_SetRevelioVisibility params{};
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
void UUI_BP_ActionHUD_PC_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::UpdateMiniDiamond0(int32_t GroupIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.UpdateMiniDiamond"));
    struct Params_UpdateMiniDiamond {
        int32_t GroupIndex; // 0x0
    }; // Size: 0x4
    Params_UpdateMiniDiamond params{};
    params.GroupIndex = (int32_t)GroupIndex;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::PassiveSpellLockChanged(UObject* Caller, FLockManagerLock& Lock) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.PassiveSpellLockChanged"));
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
void UUI_BP_ActionHUD_PC_C::OnShowHUDElement0(bool IgnoreLocks) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.OnShowHUDElement"));
    struct Params_OnShowHUDElement {
        bool IgnoreLocks; // 0x0
    }; // Size: 0x1
    Params_OnShowHUDElement params{};
    params.IgnoreLocks = (bool)IgnoreLocks;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::ShowMiniDiamond0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.ShowMiniDiamond"));
    struct Params_ShowMiniDiamond {
    }; // Size: 0x0
    Params_ShowMiniDiamond params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::BndEvt__UI_BP_ActionHUD_PC_actionItem_2_K2Node_ComponentBoundEvent_3_UnBlacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_2_K2Node_ComponentBoundEvent_3_UnBlacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_2_K2Node_ComponentBoundEvent_3_UnBlacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_2_K2Node_ComponentBoundEvent_3_UnBlacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::BndEvt__UI_BP_ActionHUD_PC_actionItem_1_K2Node_ComponentBoundEvent_1_UnBlacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_1_K2Node_ComponentBoundEvent_1_UnBlacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_1_K2Node_ComponentBoundEvent_1_UnBlacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_1_K2Node_ComponentBoundEvent_1_UnBlacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::BndEvt__UI_BP_ActionHUD_PC_actionItem_2_K2Node_ComponentBoundEvent_2_Blacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_2_K2Node_ComponentBoundEvent_2_Blacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_2_K2Node_ComponentBoundEvent_2_Blacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_2_K2Node_ComponentBoundEvent_2_Blacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::BndEvt__UI_BP_ActionHUD_PC_actionItem_3_K2Node_ComponentBoundEvent_4_Blacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_3_K2Node_ComponentBoundEvent_4_Blacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_3_K2Node_ComponentBoundEvent_4_Blacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_3_K2Node_ComponentBoundEvent_4_Blacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::BndEvt__UI_BP_ActionHUD_PC_actionItem_3_K2Node_ComponentBoundEvent_5_UnBlacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_3_K2Node_ComponentBoundEvent_5_UnBlacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_3_K2Node_ComponentBoundEvent_5_UnBlacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_3_K2Node_ComponentBoundEvent_5_UnBlacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::ExecuteUbergraph_UI_BP_ActionHUD_PC(int32_t EntryPoint, ESlateVisibility Temp_byte_Variable) {}
void UUI_BP_ActionHUD_PC_C::BndEvt__UI_BP_ActionHUD_PC_actionItem_4_K2Node_ComponentBoundEvent_6_Blacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_4_K2Node_ComponentBoundEvent_6_Blacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_4_K2Node_ComponentBoundEvent_6_Blacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_4_K2Node_ComponentBoundEvent_6_Blacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::BndEvt__UI_BP_ActionHUD_PC_actionItem_4_K2Node_ComponentBoundEvent_7_UnBlacklisted__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.BndEvt__UI_BP_ActionHUD_PC_actionItem_4_K2Node_ComponentBoundEvent_7_UnBlacklisted__DelegateSignature"));
    struct Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_4_K2Node_ComponentBoundEvent_7_UnBlacklisted__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__UI_BP_ActionHUD_PC_actionItem_4_K2Node_ComponentBoundEvent_7_UnBlacklisted__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::OnShowButtonsChanged0(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.OnShowButtonsChanged"));
    struct Params_OnShowButtonsChanged {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_OnShowButtonsChanged params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::EnableAllSpellsChanged(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.EnableAllSpellsChanged"));
    struct Params_EnableAllSpellsChanged {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_EnableAllSpellsChanged params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void UUI_BP_ActionHUD_PC_C::MenuSpellSelectionLockChanged(UObject* Caller, FLockManagerLock& Lock) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionHUD/UI_BP_ActionHUD_PC.UI_BP_ActionHUD_PC_C.MenuSpellSelectionLockChanged"));
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
