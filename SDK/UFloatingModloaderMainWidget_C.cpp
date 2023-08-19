#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FKey.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FRotator.hpp"
#include "FSlateColor.hpp"
#include "FSoftObjectPath.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UButton.hpp"
#include "UCanvasPanel.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UEditableText.hpp"
#include "UFloatingModloaderMainWidget_C.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "ULevelStreamingDynamic.hpp"
#include "UModLoaderSave_C.hpp"
#include "UModloaderChildWidget_C.hpp"
#include "UPDA_ApparateModManifest_C.hpp"
#include "USaveGame.hpp"
#include "UScrollBox.hpp"
#include "UTextBlock.hpp"
#include "UUserWidget.hpp"
#include "UVerticalBox.hpp"
#include "UWidget.hpp"
UFloatingModloaderMainWidget_C* UFloatingModloaderMainWidget_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C");
    return (UFloatingModloaderMainWidget_C*)res;
}
void UFloatingModloaderMainWidget_C::LoadManifestForMod(FString ModName, UPDA_ApparateModManifest_C*& Manifest, UPDA_ApparateModManifest_C* CallFunc_SpawnObject_ReturnValue, UPDA_ApparateModManifest_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FSoftObjectPath CallFunc_MakeSoftObjectPath_ReturnValue) {}
void UFloatingModloaderMainWidget_C::DoesSetContainArray(TArray<FString>& Array) {}
void UFloatingModloaderMainWidget_C::LoadModsByNames(TArray<void*>& Mods, TArray<FString> ModsStrings, TArray<FString> DisabledMods) {}
void UFloatingModloaderMainWidget_C::PrintToDebug(FString TextToPrint, bool NewWindow_) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.PrintToDebug"));
    struct Params_PrintToDebug {
        FString TextToPrint; // 0x0
        bool NewWindow_; // 0x10
    }; // Size: 0x11
    Params_PrintToDebug params{};
    params.TextToPrint = (FString)TextToPrint;
    params.NewWindow_ = (bool)NewWindow_;
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::ShowEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.ShowEvent"));
    struct Params_ShowEvent {
    }; // Size: 0x0
    Params_ShowEvent params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::PrintToModLoader(FString Message) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.PrintToModLoader"));
    struct Params_PrintToModLoader {
        FString Message; // 0x0
    }; // Size: 0x10
    Params_PrintToModLoader params{};
    params.Message = (FString)Message;
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::AddChildFunc() {}
void UFloatingModloaderMainWidget_C::Construct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::StopPositionTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.StopPositionTimer"));
    struct Params_StopPositionTimer {
    }; // Size: 0x0
    Params_StopPositionTimer params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::StartPositionTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.StartPositionTimer"));
    struct Params_StartPositionTimer {
    }; // Size: 0x0
    Params_StartPositionTimer params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::BndEvt__Button_41_K2Node_ComponentBoundEvent_174_OnButtonReleasedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.BndEvt__Button_41_K2Node_ComponentBoundEvent_174_OnButtonReleasedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_41_K2Node_ComponentBoundEvent_174_OnButtonReleasedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_41_K2Node_ComponentBoundEvent_174_OnButtonReleasedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::BndEvt__Button_41_K2Node_ComponentBoundEvent_161_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.BndEvt__Button_41_K2Node_ComponentBoundEvent_161_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__Button_41_K2Node_ComponentBoundEvent_161_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__Button_41_K2Node_ComponentBoundEvent_161_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::StopScalingTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.StopScalingTimer"));
    struct Params_StopScalingTimer {
    }; // Size: 0x0
    Params_StopScalingTimer params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::StartScalingTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.StartScalingTimer"));
    struct Params_StartScalingTimer {
    }; // Size: 0x0
    Params_StartScalingTimer params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::BndEvt__ScalingButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.BndEvt__ScalingButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature"));
    struct Params_BndEvt__ScalingButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__ScalingButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::ChildRemovedEvent(ULevelStreamingDynamic* LevelInstance, UModloaderChildWidget_C* CallingWidget) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.ChildRemovedEvent"));
    struct Params_ChildRemovedEvent {
        ULevelStreamingDynamic* LevelInstance; // 0x0
        UModloaderChildWidget_C* CallingWidget; // 0x8
    }; // Size: 0x10
    Params_ChildRemovedEvent params{};
    params.LevelInstance = (ULevelStreamingDynamic*)LevelInstance;
    params.CallingWidget = (UModloaderChildWidget_C*)CallingWidget;
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::BndEvt__ScalingButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.BndEvt__ScalingButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__ScalingButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__ScalingButton_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::Tick0(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::BndEvt__PauseButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.BndEvt__PauseButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature"));
    struct Params_BndEvt__PauseButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__PauseButton_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::VisibilityToggleEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.VisibilityToggleEvent"));
    struct Params_VisibilityToggleEvent {
    }; // Size: 0x0
    Params_VisibilityToggleEvent params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__MinimizeButton_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature"));
    struct Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature {
    }; // Size: 0x0
    Params_BndEvt__CloseButton_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::ChildrenCountTimer() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.ChildrenCountTimer"));
    struct Params_ChildrenCountTimer {
    }; // Size: 0x0
    Params_ChildrenCountTimer params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::LoadEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.LoadEvent"));
    struct Params_LoadEvent {
    }; // Size: 0x0
    Params_LoadEvent params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::CountChildrenEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.CountChildrenEvent"));
    struct Params_CountChildrenEvent {
    }; // Size: 0x0
    Params_CountChildrenEvent params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::SaveEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.SaveEvent"));
    struct Params_SaveEvent {
    }; // Size: 0x0
    Params_SaveEvent params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::KeyboardFocusEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.KeyboardFocusEvent"));
    struct Params_KeyboardFocusEvent {
    }; // Size: 0x0
    Params_KeyboardFocusEvent params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::BndEvt__TextBox_K2Node_ComponentBoundEvent_0_OnEditableTextCommittedEvent__DelegateSignature() {}
void UFloatingModloaderMainWidget_C::Destruct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/FloatingModloaderMainWidget.FloatingModloaderMainWidget_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UFloatingModloaderMainWidget_C::ExecuteUbergraph_FloatingModloaderMainWidget(int32_t EntryPoint, bool Temp_bool_Variable, int32_t CallFunc_RandomInteger_ReturnValue, int32_t CallFunc_RandomInteger_ReturnValue_1, FRandomStream CallFunc_MakeRandomStream_ReturnValue, FRandomStream CallFunc_MakeRandomStream_ReturnValue_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue_1, FString K2Node_CustomEvent_Message, FVector2D CallFunc_MakeVector2D_ReturnValue, FString K2Node_CustomEvent_TextToPrint, bool K2Node_CustomEvent_NewWindow_, int32_t Temp_int_Variable, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FVector2D CallFunc_GetSize_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_1, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue, FVector2D CallFunc_GetPosition_ReturnValue, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_2, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_3, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_4, FVector2D CallFunc_GetSize_ReturnValue_1, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_5, FVector2D CallFunc_GetSize_ReturnValue_2, FVector2D CallFunc_GetPosition_ReturnValue_1, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue_2, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue_6, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue_1, FVector2D CallFunc_GetSize_ReturnValue_3, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, FVector2D CallFunc_GetPosition_ReturnValue_2, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue_2, FVector2D CallFunc_Add_Vector2DVector2D_ReturnValue_2, FVector2D CallFunc_GetMousePositionOnViewport_ReturnValue_3, FVector2D CallFunc_Subtract_Vector2DVector2D_ReturnValue_3, ESlateVisibility Temp_byte_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, FSlateColor K2Node_MakeStruct_SlateColor, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, FSlateColor K2Node_MakeStruct_SlateColor_1, FSlateColor K2Node_MakeStruct_SlateColor_2, FSlateColor K2Node_MakeStruct_SlateColor_3, FSlateColor K2Node_MakeStruct_SlateColor_4, ESlateVisibility Temp_byte_Variable_5, int32_t CallFunc_GetChildrenCount_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_DoesSaveGameExist_ReturnValue, USaveGame* CallFunc_LoadGameFromSlot_ReturnValue, UModLoaderSave_C* K2Node_DynamicCast_AsMod_Loader_Save, bool K2Node_DynamicCast_bSuccess, UModLoaderSave_C* CallFunc_CreateSaveGameObject_ReturnValue, UFloatingModloaderMainWidget_C* CallFunc_Create_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue_2, UWidget* CallFunc_GetChildAt_ReturnValue, UModloaderChildWidget_C* K2Node_DynamicCast_AsModloader_Child_Widget, bool K2Node_DynamicCast_bSuccess_1, int32_t CallFunc_GetChildrenCount_ReturnValue_3, bool Temp_bool_Has_Been_Initd_Variable_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_SaveGameToSlot_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue) {}
