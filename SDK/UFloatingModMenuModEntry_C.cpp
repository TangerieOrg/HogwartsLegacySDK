#include "APhoenixGameMode.hpp"
#include "APhoenix_Game_Mode_C.hpp"
#include "FModData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UButton.hpp"
#include "UCheckBox.hpp"
#include "UFloatingModMenuModEntry_C.hpp"
#include "UFunction.hpp"
#include "UTextBlock.hpp"
#include "UUserWidget.hpp"
UFloatingModMenuModEntry_C* UFloatingModMenuModEntry_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/CustomContent/ModloaderAssets/FloatingModMenuModEntry.FloatingModMenuModEntry_C");
    return (UFloatingModMenuModEntry_C*)res;
}
void UFloatingModMenuModEntry_C::BndEvt__Button_75_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenuModEntry.FloatingModMenuModEntry_C.BndEvt__Button_75_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_75_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_75_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenuModEntry_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_62_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenuModEntry.FloatingModMenuModEntry_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_62_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_62_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_62_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenuModEntry_C::Construct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenuModEntry.FloatingModMenuModEntry_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenuModEntry_C::BndEvt__Button_75_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenuModEntry.FloatingModMenuModEntry_C.BndEvt__Button_75_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__Button_75_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_75_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenuModEntry_C::UpdateState() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenuModEntry.FloatingModMenuModEntry_C.UpdateState"));
    struct Params_UpdateState {
    }; // Size: 0x0
    Params_UpdateState params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenuModEntry_C::BndEvt__FloatingModMenuModEntry_ModToggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenuModEntry.FloatingModMenuModEntry_C.BndEvt__FloatingModMenuModEntry_ModToggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature"));
    struct Params_BndEvt__FloatingModMenuModEntry_ModToggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature {
        bool bIsChecked; // 0x0
    }; // Size: 0x1
    Params_BndEvt__FloatingModMenuModEntry_ModToggle_K2Node_ComponentBoundEvent_0_OnCheckBoxComponentStateChanged__DelegateSignature params{};
    params.bIsChecked = (bool)bIsChecked;
    ProcessEvent(func, &params);
}
void UFloatingModMenuModEntry_C::ExecuteUbergraph_FloatingModMenuModEntry(int32_t EntryPoint, APhoenixGameMode* CallFunc_GetPhoenixGameMode_ReturnValue, APhoenix_Game_Mode_C* K2Node_DynamicCast_AsPhoenix_Game_Mode, bool K2Node_DynamicCast_bSuccess, FModData CallFunc_GetModData_ModData, bool CallFunc_GetModData_Exists, bool K2Node_ComponentBoundEvent_bIsChecked, APhoenixGameMode* CallFunc_GetPhoenixGameMode_ReturnValue_1, APhoenix_Game_Mode_C* K2Node_DynamicCast_AsPhoenix_Game_Mode_1, bool K2Node_DynamicCast_bSuccess_1, APhoenixGameMode* CallFunc_GetPhoenixGameMode_ReturnValue_2, APhoenix_Game_Mode_C* K2Node_DynamicCast_AsPhoenix_Game_Mode_2, bool K2Node_DynamicCast_bSuccess_2) {}
