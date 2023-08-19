#include "ABiped_Player.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "FTimerHandle.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanel.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UCurveFloat.hpp"
#include "UExperienceManager.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UObjectStateInfo.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UProgressBar.hpp"
#include "UQuickHealthActions.hpp"
#include "USizeBox.hpp"
#include "UUI_BP_HealthIncrease_C.hpp"
#include "UUI_BP_QuickHealthActions_C.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_QuickHealthActions_C::TutorialSaysStopHealthHighlight(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.TutorialSaysStopHealthHighlight"));
    struct Params_TutorialSaysStopHealthHighlight {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_TutorialSaysStopHealthHighlight params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickHealthActions_C::SetLowHealthWarning(float HealthMax, float HealthPercent, float CallFunc_Multiply_FloatFloat_ReturnValue, UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, FVector2D CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_MakeVector2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.SetLowHealthWarning"));
    struct Params_SetLowHealthWarning {
        float HealthMax; // 0x0
        float HealthPercent; // 0x4
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0x8
        char pad_c[0x4];
        UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x3];
        FVector2D CallFunc_GetSize_ReturnValue; // 0x1c
        float CallFunc_BreakVector2D_X; // 0x24
        float CallFunc_BreakVector2D_Y; // 0x28
        FVector2D CallFunc_MakeVector2D_ReturnValue; // 0x2c
    }; // Size: 0x34
    Params_SetLowHealthWarning params{};
    params.HealthMax = (float)HealthMax;
    params.HealthPercent = (float)HealthPercent;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.K2Node_DynamicCast_AsCanvas_Panel_Slot = (UCanvasPanelSlot*)K2Node_DynamicCast_AsCanvas_Panel_Slot;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetSize_ReturnValue = (FVector2D)CallFunc_GetSize_ReturnValue;
    params.CallFunc_BreakVector2D_X = (float)CallFunc_BreakVector2D_X;
    params.CallFunc_BreakVector2D_Y = (float)CallFunc_BreakVector2D_Y;
    params.CallFunc_MakeVector2D_ReturnValue = (FVector2D)CallFunc_MakeVector2D_ReturnValue;
    ProcessEvent(func, &params);
}
UUI_BP_QuickHealthActions_C* UUI_BP_QuickHealthActions_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/QuickAction/UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C");
    return (UUI_BP_QuickHealthActions_C*)res;
}
void UUI_BP_QuickHealthActions_C::ShowLevelUpAnimation(int32_t NewHealthDelta) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.ShowLevelUpAnimation"));
    struct Params_ShowLevelUpAnimation {
        int32_t NewHealthDelta; // 0x0
    }; // Size: 0x4
    Params_ShowLevelUpAnimation params{};
    params.NewHealthDelta = (int32_t)NewHealthDelta;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickHealthActions_C::CheckCriticalHealth(ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsHealthCritical_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.CheckCriticalHealth"));
    struct Params_CheckCriticalHealth {
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x0
        UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x10
        bool CallFunc_IsHealthCritical_ReturnValue; // 0x11
    }; // Size: 0x12
    Params_CheckCriticalHealth params{};
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_GetObjectStateInfo_ReturnValue = (UObjectStateInfo*)CallFunc_GetObjectStateInfo_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsHealthCritical_ReturnValue = (bool)CallFunc_IsHealthCritical_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickHealthActions_C::OnSetMaxHealth(float NewHealthSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.OnSetMaxHealth"));
    struct Params_OnSetMaxHealth {
        float NewHealthSize; // 0x0
    }; // Size: 0x4
    Params_OnSetMaxHealth params{};
    params.NewHealthSize = (float)NewHealthSize;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickHealthActions_C::UpdateHealthBar(float NewPct) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.UpdateHealthBar"));
    struct Params_UpdateHealthBar {
        float NewPct; // 0x0
    }; // Size: 0x4
    Params_UpdateHealthBar params{};
    params.NewPct = (float)NewPct;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickHealthActions_C::TutorialSaysStartHealthHighlight(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.TutorialSaysStartHealthHighlight"));
    struct Params_TutorialSaysStartHealthHighlight {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_TutorialSaysStartHealthHighlight params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickHealthActions_C::OnInitialized() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.OnInitialized"));
    struct Params_OnInitialized {
    }; // Size: 0x0
    Params_OnInitialized params{};
    ProcessEvent(func, &params);
}
void UUI_BP_QuickHealthActions_C::LowHealthLoop() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.LowHealthLoop"));
    struct Params_LowHealthLoop {
    }; // Size: 0x0
    Params_LowHealthLoop params{};
    ProcessEvent(func, &params);
}
void UUI_BP_QuickHealthActions_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_QuickHealthActions_C::OnLowHealth() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.OnLowHealth"));
    struct Params_OnLowHealth {
    }; // Size: 0x0
    Params_OnLowHealth params{};
    ProcessEvent(func, &params);
}
void UUI_BP_QuickHealthActions_C::DisplayItemCount(int32_t Count) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/QuickAction/UI_BP_QuickHealthActions.UI_BP_QuickHealthActions_C.DisplayItemCount"));
    struct Params_DisplayItemCount {
        int32_t Count; // 0x0
    }; // Size: 0x4
    Params_DisplayItemCount params{};
    params.Count = (int32_t)Count;
    ProcessEvent(func, &params);
}
void UUI_BP_QuickHealthActions_C::ExecuteUbergraph_UI_BP_QuickHealthActions(int32_t EntryPoint, UExperienceManager* CallFunc_Get_ReturnValue, bool Temp_bool_Variable, int32_t CallFunc_GetExperienceLevel_ReturnValue, int32_t CallFunc_GetMaxHealthForLevel_ReturnValue) {}
