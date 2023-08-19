#include "FPointerToUberGraphFrame.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixImage.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UUI_BP_CombatBreakout_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_CombatBreakout_C::Breakout_State_Change(bool changed, FString ButtonStr, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatBreakout.UI_BP_CombatBreakout_C.Breakout State Change"));
    struct Params_Breakout_State_Change {
        bool changed; // 0x0
        char pad_1[0x7];
        FString ButtonStr; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x18
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1; // 0x20
    }; // Size: 0x28
    Params_Breakout_State_Change params{};
    params.changed = (bool)changed;
    params.ButtonStr = (FString)ButtonStr;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_1;
    ProcessEvent(func, &params);
}
UUI_BP_CombatBreakout_C* UUI_BP_CombatBreakout_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/CombatParry/UI_BP_CombatBreakout.UI_BP_CombatBreakout_C");
    return (UUI_BP_CombatBreakout_C*)res;
}
void UUI_BP_CombatBreakout_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatBreakout.UI_BP_CombatBreakout_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CombatBreakout_C::BreakoutTimeout(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatBreakout.UI_BP_CombatBreakout_C.BreakoutTimeout"));
    struct Params_BreakoutTimeout {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_BreakoutTimeout params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_CombatBreakout_C::AnimationComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatBreakout.UI_BP_CombatBreakout_C.AnimationComplete"));
    struct Params_AnimationComplete {
    }; // Size: 0x0
    Params_AnimationComplete params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CombatBreakout_C::BreakoutIconRamdomizer(FString Button, bool IsRandom, FString Temp_string_Variable, FString Temp_string_Variable_1, FString Temp_string_Variable_2, FString Temp_string_Variable_3, int32_t Temp_int_Variable, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32_t CallFunc_RandomInteger_ReturnValue, FString K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatBreakout.UI_BP_CombatBreakout_C.BreakoutIconRamdomizer"));
    struct Params_BreakoutIconRamdomizer {
        FString Button; // 0x0
        bool IsRandom; // 0x10
        char pad_11[0x7];
        FString Temp_string_Variable; // 0x18
        FString Temp_string_Variable_1; // 0x28
        FString Temp_string_Variable_2; // 0x38
        FString Temp_string_Variable_3; // 0x48
        int32_t Temp_int_Variable; // 0x58
        char pad_5c[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x60
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1; // 0x68
        int32_t CallFunc_RandomInteger_ReturnValue; // 0x70
        char pad_74[0x4];
        FString K2Node_Select_Default; // 0x78
    }; // Size: 0x88
    Params_BreakoutIconRamdomizer params{};
    params.Button = (FString)Button;
    params.IsRandom = (bool)IsRandom;
    params.Temp_string_Variable = (FString)Temp_string_Variable;
    params.Temp_string_Variable_1 = (FString)Temp_string_Variable_1;
    params.Temp_string_Variable_2 = (FString)Temp_string_Variable_2;
    params.Temp_string_Variable_3 = (FString)Temp_string_Variable_3;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_1;
    params.CallFunc_RandomInteger_ReturnValue = (int32_t)CallFunc_RandomInteger_ReturnValue;
    params.K2Node_Select_Default = (FString)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_CombatBreakout_C::Breakout_Success(UObject* Caller, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatBreakout.UI_BP_CombatBreakout_C.Breakout_Success"));
    struct Params_Breakout_Success {
        UObject* Caller; // 0x0
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Breakout_Success params{};
    params.Caller = (UObject*)Caller;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CombatBreakout_C::Breakout_Failure(UObject* Caller, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/CombatParry/UI_BP_CombatBreakout.UI_BP_CombatBreakout_C.Breakout_Failure"));
    struct Params_Breakout_Failure {
        UObject* Caller; // 0x0
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Breakout_Failure params{};
    params.Caller = (UObject*)Caller;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CombatBreakout_C::ExecuteUbergraph_UI_BP_CombatBreakout(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {}
