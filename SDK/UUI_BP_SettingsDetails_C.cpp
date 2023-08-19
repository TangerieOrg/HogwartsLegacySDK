#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_FG_DetailsPanelBack_C.hpp"
#include "UUI_BP_SettingsDetails_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_SettingsDetails_C* UUI_BP_SettingsDetails_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/Settings/UI_BP_SettingsDetails.UI_BP_SettingsDetails_C");
    return (UUI_BP_SettingsDetails_C*)res;
}
void UUI_BP_SettingsDetails_C::PlaySettingsDetailsCollapseAnim() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_SettingsDetails.UI_BP_SettingsDetails_C.PlaySettingsDetailsCollapseAnim"));
    struct Params_PlaySettingsDetailsCollapseAnim {
    }; // Size: 0x0
    Params_PlaySettingsDetailsCollapseAnim params{};
    ProcessEvent(func, &params);
}
TArray<FString> UUI_BP_SettingsDetails_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_SettingsDetails_C::SetupTooltipDescription(FString NewDescription) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_SettingsDetails.UI_BP_SettingsDetails_C.SetupTooltipDescription"));
    struct Params_SetupTooltipDescription {
        FString NewDescription; // 0x0
    }; // Size: 0x10
    Params_SetupTooltipDescription params{};
    params.NewDescription = (FString)NewDescription;
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDetails_C::SettingsDetailCollapseDispatch__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_SettingsDetails.UI_BP_SettingsDetails_C.SettingsDetailCollapseDispatch__DelegateSignature"));
    struct Params_SettingsDetailCollapseDispatch__DelegateSignature {
    }; // Size: 0x0
    Params_SettingsDetailCollapseDispatch__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDetails_C::PlaySettingsDetailsAppearAnim() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_SettingsDetails.UI_BP_SettingsDetails_C.PlaySettingsDetailsAppearAnim"));
    struct Params_PlaySettingsDetailsAppearAnim {
    }; // Size: 0x0
    Params_PlaySettingsDetailsAppearAnim params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SettingsDetails_C::ExecuteUbergraph_UI_BP_SettingsDetails(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/Settings/UI_BP_SettingsDetails.UI_BP_SettingsDetails_C.ExecuteUbergraph_UI_BP_SettingsDetails"));
    struct Params_ExecuteUbergraph_UI_BP_SettingsDetails {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ExecuteUbergraph_UI_BP_SettingsDetails params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PlayAnimationReverse_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationReverse_ReturnValue;
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
