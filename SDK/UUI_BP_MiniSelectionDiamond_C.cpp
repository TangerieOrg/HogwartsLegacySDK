#include "ESlateVisibility.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMiniSelectionDiamondBase.hpp"
#include "UUI_BP_MiniSelectionDiamond_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_MiniSelectionDiamond_C* UUI_BP_MiniSelectionDiamond_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/ActionBar/SpellSelection/UI_BP_MiniSelectionDiamond.UI_BP_MiniSelectionDiamond_C");
    return (UUI_BP_MiniSelectionDiamond_C*)res;
}
void UUI_BP_MiniSelectionDiamond_C::OnSetState0(int32_t NewState) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/SpellSelection/UI_BP_MiniSelectionDiamond.UI_BP_MiniSelectionDiamond_C.OnSetState"));
    struct Params_OnSetState {
        int32_t NewState; // 0x0
    }; // Size: 0x4
    Params_OnSetState params{};
    params.NewState = (int32_t)NewState;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniSelectionDiamond_C::LockedDiamondSelected(int32_t CallFunc_PostEventAtLocation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/SpellSelection/UI_BP_MiniSelectionDiamond.UI_BP_MiniSelectionDiamond_C.LockedDiamondSelected"));
    struct Params_LockedDiamondSelected {
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_LockedDiamondSelected params{};
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniSelectionDiamond_C::SetGroupStatus(int32_t StatusIndex, int32_t Temp_int_Variable, FVector2D Temp_struct_Variable, FVector2D Temp_struct_Variable_1, FVector2D Temp_struct_Variable_2, int32_t Temp_int_Variable_1, FLinearColor Temp_struct_Variable_3, FLinearColor Temp_struct_Variable_4, FLinearColor Temp_struct_Variable_5, int32_t Temp_int_Variable_2, FLinearColor Temp_struct_Variable_6, FLinearColor Temp_struct_Variable_7, FLinearColor Temp_struct_Variable_8, int32_t Temp_int_Variable_3, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, FVector2D K2Node_Select_Default, FLinearColor K2Node_Select_Default_1, FLinearColor K2Node_Select_Default_2, ESlateVisibility K2Node_Select_Default_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/SpellSelection/UI_BP_MiniSelectionDiamond.UI_BP_MiniSelectionDiamond_C.SetGroupStatus"));
    struct Params_SetGroupStatus {
        int32_t StatusIndex; // 0x0
        int32_t Temp_int_Variable; // 0x4
        FVector2D Temp_struct_Variable; // 0x8
        FVector2D Temp_struct_Variable_1; // 0x10
        FVector2D Temp_struct_Variable_2; // 0x18
        int32_t Temp_int_Variable_1; // 0x20
        FLinearColor Temp_struct_Variable_3; // 0x24
        FLinearColor Temp_struct_Variable_4; // 0x34
        FLinearColor Temp_struct_Variable_5; // 0x44
        int32_t Temp_int_Variable_2; // 0x54
        FLinearColor Temp_struct_Variable_6; // 0x58
        FLinearColor Temp_struct_Variable_7; // 0x68
        FLinearColor Temp_struct_Variable_8; // 0x78
        int32_t Temp_int_Variable_3; // 0x88
        ESlateVisibility Temp_byte_Variable; // 0x8c
        ESlateVisibility Temp_byte_Variable_1; // 0x8d
        ESlateVisibility Temp_byte_Variable_2; // 0x8e
        char pad_8f[0x1];
        FVector2D K2Node_Select_Default; // 0x90
        FLinearColor K2Node_Select_Default_1; // 0x98
        FLinearColor K2Node_Select_Default_2; // 0xa8
        ESlateVisibility K2Node_Select_Default_3; // 0xb8
    }; // Size: 0xb9
    Params_SetGroupStatus params{};
    params.StatusIndex = (int32_t)StatusIndex;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.Temp_struct_Variable = (FVector2D)Temp_struct_Variable;
    params.Temp_struct_Variable_1 = (FVector2D)Temp_struct_Variable_1;
    params.Temp_struct_Variable_2 = (FVector2D)Temp_struct_Variable_2;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.Temp_struct_Variable_3 = (FLinearColor)Temp_struct_Variable_3;
    params.Temp_struct_Variable_4 = (FLinearColor)Temp_struct_Variable_4;
    params.Temp_struct_Variable_5 = (FLinearColor)Temp_struct_Variable_5;
    params.Temp_int_Variable_2 = (int32_t)Temp_int_Variable_2;
    params.Temp_struct_Variable_6 = (FLinearColor)Temp_struct_Variable_6;
    params.Temp_struct_Variable_7 = (FLinearColor)Temp_struct_Variable_7;
    params.Temp_struct_Variable_8 = (FLinearColor)Temp_struct_Variable_8;
    params.Temp_int_Variable_3 = (int32_t)Temp_int_Variable_3;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.K2Node_Select_Default = (FVector2D)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (FLinearColor)K2Node_Select_Default_1;
    params.K2Node_Select_Default_2 = (FLinearColor)K2Node_Select_Default_2;
    params.K2Node_Select_Default_3 = (ESlateVisibility)K2Node_Select_Default_3;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniSelectionDiamond_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/SpellSelection/UI_BP_MiniSelectionDiamond.UI_BP_MiniSelectionDiamond_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_MiniSelectionDiamond_C::ExecuteUbergraph_UI_BP_MiniSelectionDiamond(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, int32_t K2Node_Event_NewState, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/ActionBar/SpellSelection/UI_BP_MiniSelectionDiamond.UI_BP_MiniSelectionDiamond_C.ExecuteUbergraph_UI_BP_MiniSelectionDiamond"));
    struct Params_ExecuteUbergraph_UI_BP_MiniSelectionDiamond {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
        char pad_5[0x3];
        int32_t K2Node_Event_NewState; // 0x8
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0xc
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ExecuteUbergraph_UI_BP_MiniSelectionDiamond params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.K2Node_Event_NewState = (int32_t)K2Node_Event_NewState;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
