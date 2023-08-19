#include "ESlateVisibility.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_CreatureNurturingHUD_Socket_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_CreatureNurturingHUD_Socket_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_CreatureNurturingHUD_Socket.UI_BP_CreatureNurturingHUD_Socket_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
UUI_BP_CreatureNurturingHUD_Socket_C* UUI_BP_CreatureNurturingHUD_Socket_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/Nurture/UI_BP_CreatureNurturingHUD_Socket.UI_BP_CreatureNurturingHUD_Socket_C");
    return (UUI_BP_CreatureNurturingHUD_Socket_C*)res;
}
void UUI_BP_CreatureNurturingHUD_Socket_C::ForceHide(bool Hide, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_CreatureNurturingHUD_Socket.UI_BP_CreatureNurturingHUD_Socket_C.ForceHide"));
    struct Params_ForceHide {
        bool Hide; // 0x0
        bool Temp_bool_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable; // 0x2
        ESlateVisibility Temp_byte_Variable_1; // 0x3
        ESlateVisibility K2Node_Select_Default; // 0x4
    }; // Size: 0x5
    Params_ForceHide params{};
    params.Hide = (bool)Hide;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureNurturingHUD_Socket_C::ExecuteUbergraph_UI_BP_CreatureNurturingHUD_Socket(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/Nurture/UI_BP_CreatureNurturingHUD_Socket.UI_BP_CreatureNurturingHUD_Socket_C.ExecuteUbergraph_UI_BP_CreatureNurturingHUD_Socket"));
    struct Params_ExecuteUbergraph_UI_BP_CreatureNurturingHUD_Socket {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_UI_BP_CreatureNurturingHUD_Socket params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
