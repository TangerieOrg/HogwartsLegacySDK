#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UButton.hpp"
#include "UCanvasPanel.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMultiLineEditableText.hpp"
#include "UPrintWindowWidget_C.hpp"
#include "UScrollBox.hpp"
#include "UTextBlock.hpp"
#include "UUserWidget.hpp"
UPrintWindowWidget_C* UPrintWindowWidget_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C");
    return (UPrintWindowWidget_C*)res;
}
void UPrintWindowWidget_C::StartScalingTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.StartScalingTimer"));
    struct Params_StartScalingTimer {
    }; // Size: 0x0
    Params_StartScalingTimer params{};
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::BndEvt__Button_41_K2Node_ComponentBoundEvent_161_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.BndEvt__Button_41_K2Node_ComponentBoundEvent_161_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_41_K2Node_ComponentBoundEvent_161_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_41_K2Node_ComponentBoundEvent_161_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::PrintText(FString TextToAdd) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.PrintText"));
    struct Params_PrintText {
        FString TextToAdd; // 0x0
    }; // Size: 0x10
    Params_PrintText params{};
    params.TextToAdd = (FString)TextToAdd;
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::StopPositionTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.StopPositionTimer"));
    struct Params_StopPositionTimer {
    }; // Size: 0x0
    Params_StopPositionTimer params{};
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::StartPositionTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.StartPositionTimer"));
    struct Params_StartPositionTimer {
    }; // Size: 0x0
    Params_StartPositionTimer params{};
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::BndEvt__Button_41_K2Node_ComponentBoundEvent_174_OnButtonReleasedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.BndEvt__Button_41_K2Node_ComponentBoundEvent_174_OnButtonReleasedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_41_K2Node_ComponentBoundEvent_174_OnButtonReleasedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_41_K2Node_ComponentBoundEvent_174_OnButtonReleasedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::StopScalingTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.StopScalingTimer"));
    struct Params_StopScalingTimer {
    }; // Size: 0x0
    Params_StopScalingTimer params{};
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::BndEvt__ScalingButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.BndEvt__ScalingButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature"));
    struct Params_BndEvt__ScalingButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__ScalingButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::BndEvt__ScalingButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.BndEvt__ScalingButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__ScalingButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__ScalingButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::Tick0(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::Construct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::BndEvt__PauseButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.BndEvt__PauseButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__PauseButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__PauseButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/PrintWindowWidget.PrintWindowWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UPrintWindowWidget_C::ExecuteUbergraph_PrintWindowWidget(int32_t EntryPoint, bool Temp_bool_Variable, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FVector2D CallFunc_GetSize_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1) {}
