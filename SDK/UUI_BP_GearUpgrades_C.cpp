#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_GearUpgradeMarker_C.hpp"
#include "UUI_BP_GearUpgrades_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_GearUpgrades_C* UUI_BP_GearUpgrades_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Gear/UI_BP_GearUpgrades.UI_BP_GearUpgrades_C");
    return (UUI_BP_GearUpgrades_C*)res;
}
TArray<FString> UUI_BP_GearUpgrades_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue) {}
void UUI_BP_GearUpgrades_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_GearUpgrades.UI_BP_GearUpgrades_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_GearUpgrades_C::ShowAppliedAnimation(UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_GearUpgrades.UI_BP_GearUpgrades_C.ShowAppliedAnimation"));
    struct Params_ShowAppliedAnimation {
        UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ShowAppliedAnimation params{};
    params.CallFunc_PlayAnimationForward_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimationForward_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_GearUpgrades_C::InitUpgrades(int32_t CurrentUpgrade, bool K2Node_SwitchInteger_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_GearUpgrades.UI_BP_GearUpgrades_C.InitUpgrades"));
    struct Params_InitUpgrades {
        int32_t CurrentUpgrade; // 0x0
        bool K2Node_SwitchInteger_CmpSuccess; // 0x4
    }; // Size: 0x5
    Params_InitUpgrades params{};
    params.CurrentUpgrade = (int32_t)CurrentUpgrade;
    params.K2Node_SwitchInteger_CmpSuccess = (bool)K2Node_SwitchInteger_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_GearUpgrades_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_GearUpgrades.UI_BP_GearUpgrades_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_GearUpgrades_C::ExecuteUbergraph_UI_BP_GearUpgrades(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, TArray<UUI_BP_GearUpgradeMarker_C*>& K2Node_MakeArray_Array) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Gear/UI_BP_GearUpgrades.UI_BP_GearUpgrades_C.ExecuteUbergraph_UI_BP_GearUpgrades"));
    struct Params_ExecuteUbergraph_UI_BP_GearUpgrades {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
        char pad_5[0x3];
        TArray<UUI_BP_GearUpgradeMarker_C*> K2Node_MakeArray_Array; // 0x8
    }; // Size: 0x18
    Params_ExecuteUbergraph_UI_BP_GearUpgrades params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.K2Node_MakeArray_Array = (TArray<UUI_BP_GearUpgradeMarker_C*>)K2Node_MakeArray_Array;
    ProcessEvent(func, &params);
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
}
