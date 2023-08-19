#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UButton.hpp"
#include "UFloatingModloaderMainWidget_C.hpp"
#include "UFunction.hpp"
#include "ULevelStreamingDynamic.hpp"
#include "UModloaderChildWidget_C.hpp"
#include "UTextBlock.hpp"
#include "UUserWidget.hpp"
void UModloaderChildWidget_C::SetVersionText() {}
UModloaderChildWidget_C* UModloaderChildWidget_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/CustomContent/ModloaderAssets/ModloaderChildWidget.ModloaderChildWidget_C");
    return (UModloaderChildWidget_C*)res;
}
void UModloaderChildWidget_C::SetText() {}
void UModloaderChildWidget_C::BndEvt__RemoveButton_K2Node_ComponentBoundEvent_62_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModloaderChildWidget.ModloaderChildWidget_C.BndEvt__RemoveButton_K2Node_ComponentBoundEvent_62_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_62_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__RemoveButton_K2Node_ComponentBoundEvent_62_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UModloaderChildWidget_C::BndEvt__Button_75_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModloaderChildWidget.ModloaderChildWidget_C.BndEvt__Button_75_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_75_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_75_K2Node_ComponentBoundEvent_80_OnButtonClickedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UModloaderChildWidget_C::BndEvt__Button_75_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModloaderChildWidget.ModloaderChildWidget_C.BndEvt__Button_75_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__Button_75_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_75_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UModloaderChildWidget_C::ExecuteUbergraph_ModloaderChildWidget(int32_t EntryPoint) {}
