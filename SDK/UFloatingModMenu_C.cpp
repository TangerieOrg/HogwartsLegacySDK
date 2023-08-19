#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FKey.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UButton.hpp"
#include "UCanvasPanel.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UEditableText.hpp"
#include "UFloatingModMenuModEntry_C.hpp"
#include "UFloatingModMenu_C.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UModloaderChildWidget_C.hpp"
#include "UPanelSlot.hpp"
#include "UScrollBox.hpp"
#include "UTextBlock.hpp"
#include "UUserWidget.hpp"
#include "UVerticalBox.hpp"
void UFloatingModMenu_C::BndEvt__Button_41_K2Node_ComponentBoundEvent_174_OnButtonReleasedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.BndEvt__Button_41_K2Node_ComponentBoundEvent_174_OnButtonReleasedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_41_K2Node_ComponentBoundEvent_174_OnButtonReleasedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_41_K2Node_ComponentBoundEvent_174_OnButtonReleasedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::PrintToModLoader(FString Message) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.PrintToModLoader"));
    struct Params_PrintToModLoader {
        FString Message; // 0x0
    }; // Size: 0x10
    Params_PrintToModLoader params{};
    params.Message = (FString)Message;
    ProcessEvent(func, &params);
}
UFloatingModMenu_C* UFloatingModMenu_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C");
    return (UFloatingModMenu_C*)res;
}
void UFloatingModMenu_C::OnModUnloaded(FString Mod) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.OnModUnloaded"));
    struct Params_OnModUnloaded {
        FString Mod; // 0x0
    }; // Size: 0x10
    Params_OnModUnloaded params{};
    params.Mod = (FString)Mod;
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::AddChildFunc(FString Mod, UFloatingModMenuModEntry_C* CallFunc_Create_ReturnValue, UFloatingModMenuModEntry_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, UPanelSlot* CallFunc_AddChild_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.AddChildFunc"));
    struct Params_AddChildFunc {
        FString Mod; // 0x0
        UFloatingModMenuModEntry_C* CallFunc_Create_ReturnValue; // 0x10
        UFloatingModMenuModEntry_C* CallFunc_Map_Find_Value; // 0x18
        bool CallFunc_Map_Find_ReturnValue; // 0x20
        char pad_21[0x7];
        UPanelSlot* CallFunc_AddChild_ReturnValue; // 0x28
    }; // Size: 0x30
    Params_AddChildFunc params{};
    params.Mod = (FString)Mod;
    params.CallFunc_Create_ReturnValue = (UFloatingModMenuModEntry_C*)CallFunc_Create_ReturnValue;
    params.CallFunc_Map_Find_Value = (UFloatingModMenuModEntry_C*)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    params.CallFunc_AddChild_ReturnValue = (UPanelSlot*)CallFunc_AddChild_ReturnValue;
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::StartPositionTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.StartPositionTimer"));
    struct Params_StartPositionTimer {
    }; // Size: 0x0
    Params_StartPositionTimer params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::StopPositionTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.StopPositionTimer"));
    struct Params_StopPositionTimer {
    }; // Size: 0x0
    Params_StopPositionTimer params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::BndEvt__Button_41_K2Node_ComponentBoundEvent_161_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.BndEvt__Button_41_K2Node_ComponentBoundEvent_161_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_41_K2Node_ComponentBoundEvent_161_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_41_K2Node_ComponentBoundEvent_161_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::StopScalingTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.StopScalingTimer"));
    struct Params_StopScalingTimer {
    }; // Size: 0x0
    Params_StopScalingTimer params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::VisibilityToggleEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.VisibilityToggleEvent"));
    struct Params_VisibilityToggleEvent {
    }; // Size: 0x0
    Params_VisibilityToggleEvent params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::StartScalingTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.StartScalingTimer"));
    struct Params_StartScalingTimer {
    }; // Size: 0x0
    Params_StartScalingTimer params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::BndEvt__ScalingButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.BndEvt__ScalingButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature"));
    struct Params_BndEvt__ScalingButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__ScalingButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::Construct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::BndEvt__ScalingButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.BndEvt__ScalingButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__ScalingButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__ScalingButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::Tick0(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::BndEvt__PauseButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.BndEvt__PauseButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__PauseButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__PauseButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::LoadEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.LoadEvent"));
    struct Params_LoadEvent {
    }; // Size: 0x0
    Params_LoadEvent params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::ShowEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.ShowEvent"));
    struct Params_ShowEvent {
    }; // Size: 0x0
    Params_ShowEvent params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::KeyboardFocusEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.KeyboardFocusEvent"));
    struct Params_KeyboardFocusEvent {
    }; // Size: 0x0
    Params_KeyboardFocusEvent params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::BndEvt__TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature() {}
void UFloatingModMenu_C::Destruct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::OnModLoaded(FString Mod) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModMenu.FloatingModMenu_C.OnModLoaded"));
    struct Params_OnModLoaded {
        FString Mod; // 0x0
    }; // Size: 0x10
    Params_OnModLoaded params{};
    params.Mod = (FString)Mod;
    ProcessEvent(func, &params);
}
void UFloatingModMenu_C::ExecuteUbergraph_FloatingModMenu(int32_t EntryPoint, FString K2Node_CustomEvent_Mod, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FVector2D CallFunc_GetPosition_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4, FVector2D CallFunc_GetSize_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_5, FVector2D CallFunc_GetSize_ReturnValue_1, FVector2D CallFunc_GetPosition_ReturnValue_1, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue_2, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_6, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue_2, FVector2D CallFunc_GetSize_ReturnValue_2, FVector2D CallFunc_GetPosition_ReturnValue_2, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue_3, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue_2, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue_3, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, FString K2Node_CustomEvent_Message, ESlateVisibility Temp_byte_Variable) {}
