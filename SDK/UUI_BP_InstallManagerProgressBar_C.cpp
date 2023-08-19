#include "EInstallManagerState.hpp"
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UInstallManagerProgressBar.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UProgressBar.hpp"
#include "UUI_BP_InstallManagerProgressBar_C.hpp"
#include "UUI_BP_MenuTextButton_C.hpp"
UUI_BP_InstallManagerProgressBar_C* UUI_BP_InstallManagerProgressBar_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Widgets/UI_BP_InstallManagerProgressBar.UI_BP_InstallManagerProgressBar_C");
    return (UUI_BP_InstallManagerProgressBar_C*)res;
}
void UUI_BP_InstallManagerProgressBar_C::BndEvt__UI_BP_InstallManagerProgressBar_StartInstallButton_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature(UUI_BP_MenuTextButton_C* Button) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Widgets/UI_BP_InstallManagerProgressBar.UI_BP_InstallManagerProgressBar_C.BndEvt__UI_BP_InstallManagerProgressBar_StartInstallButton_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature"));
    struct Params_BndEvt__UI_BP_InstallManagerProgressBar_StartInstallButton_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature {
        UUI_BP_MenuTextButton_C* Button; // 0x0
    }; // Size: 0x8
    Params_BndEvt__UI_BP_InstallManagerProgressBar_StartInstallButton_K2Node_ComponentBoundEvent_4_MenuTextButtonClicked__DelegateSignature params{};
    params.Button = (UUI_BP_MenuTextButton_C*)Button;
    ProcessEvent(func, &params);
}
void UUI_BP_InstallManagerProgressBar_C::Tick(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Widgets/UI_BP_InstallManagerProgressBar.UI_BP_InstallManagerProgressBar_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UUI_BP_InstallManagerProgressBar_C::ExecuteUbergraph_UI_BP_InstallManagerProgressBar(int32_t EntryPoint, float CallFunc_GetInstallPercentage_ReturnValue, FString CallFunc_GetInstallMessageText_ReturnValue, EInstallManagerState CallFunc_GetInstallManagerState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Widgets/UI_BP_InstallManagerProgressBar.UI_BP_InstallManagerProgressBar_C.ExecuteUbergraph_UI_BP_InstallManagerProgressBar"));
    struct Params_ExecuteUbergraph_UI_BP_InstallManagerProgressBar {
        int32_t EntryPoint; // 0x0
        float CallFunc_GetInstallPercentage_ReturnValue; // 0x4
        FString CallFunc_GetInstallMessageText_ReturnValue; // 0x8
        EInstallManagerState CallFunc_GetInstallManagerState_ReturnValue; // 0x18
        bool K2Node_SwitchEnum_CmpSuccess; // 0x19
        char pad_1a[0x6];
        UUI_BP_MenuTextButton_C* K2Node_ComponentBoundEvent_Button; // 0x20
        FGeometry K2Node_Event_MyGeometry; // 0x28
        float K2Node_Event_InDeltaTime; // 0x60
    }; // Size: 0x64
    Params_ExecuteUbergraph_UI_BP_InstallManagerProgressBar params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetInstallPercentage_ReturnValue = (float)CallFunc_GetInstallPercentage_ReturnValue;
    params.CallFunc_GetInstallMessageText_ReturnValue = (FString)CallFunc_GetInstallMessageText_ReturnValue;
    params.CallFunc_GetInstallManagerState_ReturnValue = (EInstallManagerState)CallFunc_GetInstallManagerState_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.K2Node_ComponentBoundEvent_Button = (UUI_BP_MenuTextButton_C*)K2Node_ComponentBoundEvent_Button;
    params.K2Node_Event_MyGeometry = (FGeometry)K2Node_Event_MyGeometry;
    params.K2Node_Event_InDeltaTime = (float)K2Node_Event_InDeltaTime;
    ProcessEvent(func, &params);
}
