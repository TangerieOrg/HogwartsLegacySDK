#include "APawn.hpp"
#include "APlayerController.hpp"
#include "AStation.hpp"
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FEventReply.hpp"
#include "FGeometry.hpp"
#include "FPointerEvent.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStationQueryData.hpp"
#include "UBTTask_AvaAITree.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UScreen.hpp"
#include "UStationComponent.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_BasicToolTipPopout_C.hpp"
#include "UUI_BP_StationInteractButton_C.hpp"
#include "UUI_BP_Station_Social_Interaction_C.hpp"
#include "UVerticalBox.hpp"
void UUI_BP_Station_Social_Interaction_C::CleanupandLeaveStation() {}
bool UUI_BP_Station_Social_Interaction_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        char pad_3[0x1];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x8
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0x9
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0xa
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0xb
        bool CallFunc_BooleanOR_ReturnValue; // 0xc
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0xd
        bool CallFunc_BooleanOR_ReturnValue_1; // 0xe
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0xf
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0x10
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_7; // 0x11
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x12
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_8; // 0x13
    }; // Size: 0x14
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_7;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_8;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UUI_BP_Station_Social_Interaction_C* UUI_BP_Station_Social_Interaction_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C");
    return (UUI_BP_Station_Social_Interaction_C*)res;
}
void UUI_BP_Station_Social_Interaction_C::Camera(bool Enabled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.Camera"));
    struct Params_Camera {
        bool Enabled; // 0x0
    }; // Size: 0x1
    Params_Camera params{};
    params.Enabled = (bool)Enabled;
    ProcessEvent(func, &params);
}
FEventReply UUI_BP_Station_Social_Interaction_C::OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent, FEventReply CallFunc_Handled_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.OnMouseButtonDown"));
    struct Params_OnMouseButtonDown {
        FGeometry MyGeometry; // 0x0
        FPointerEvent MouseEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
        FEventReply CallFunc_Handled_ReturnValue; // 0x160
    }; // Size: 0x218
    Params_OnMouseButtonDown params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.MouseEvent = (FPointerEvent)MouseEvent;
    params.CallFunc_Handled_ReturnValue = (FEventReply)CallFunc_Handled_ReturnValue;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
    return (FEventReply)params.ReturnValue;
}
void UUI_BP_Station_Social_Interaction_C::PreviousOption(int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t Temp_int_Variable, UUI_BP_StationInteractButton_C* CallFunc_Array_Get_Item, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.PreviousOption"));
    struct Params_PreviousOption {
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x0
        int32_t Temp_int_Variable; // 0x4
        UUI_BP_StationInteractButton_C* CallFunc_Array_Get_Item; // 0x8
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x10
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x14
    }; // Size: 0x15
    Params_PreviousOption params{};
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Array_Get_Item = (UUI_BP_StationInteractButton_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Station_Social_Interaction_C::NextOption(int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t Temp_int_Variable, UUI_BP_StationInteractButton_C* CallFunc_Array_Get_Item, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.NextOption"));
    struct Params_NextOption {
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x0
        int32_t Temp_int_Variable; // 0x4
        UUI_BP_StationInteractButton_C* CallFunc_Array_Get_Item; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10
        int32_t CallFunc_Subtract_IntInt_ReturnValue; // 0x14
        bool CallFunc_Less_IntInt_ReturnValue; // 0x18
    }; // Size: 0x19
    Params_NextOption params{};
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Array_Get_Item = (UUI_BP_StationInteractButton_C*)CallFunc_Array_Get_Item;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Subtract_IntInt_ReturnValue = (int32_t)CallFunc_Subtract_IntInt_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Station_Social_Interaction_C::OnButtonHovered(UUI_BP_StationInteractButton_C* Button, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_Array_Find_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.OnButtonHovered"));
    struct Params_OnButtonHovered {
        UUI_BP_StationInteractButton_C* Button; // 0x0
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x8
        int32_t CallFunc_Array_Find_ReturnValue; // 0xc
    }; // Size: 0x10
    Params_OnButtonHovered params{};
    params.Button = (UUI_BP_StationInteractButton_C*)Button;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Array_Find_ReturnValue = (int32_t)CallFunc_Array_Find_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_Station_Social_Interaction_C::SelectedButton(UUI_BP_StationInteractButton_C* Button, UUIManager* CallFunc_Get_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue) {}
void UUI_BP_Station_Social_Interaction_C::GetStationOptions(TArray<FStationQueryData>& Actions, FString IconName, FString ButtonText, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable) {}
void UUI_BP_Station_Social_Interaction_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Station_Social_Interaction_C::StationStoryEnded(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.StationStoryEnded"));
    struct Params_StationStoryEnded {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_StationStoryEnded params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_Station_Social_Interaction_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Station_Social_Interaction_C::ClassLoaded0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.ClassLoaded"));
    struct Params_ClassLoaded {
    }; // Size: 0x0
    Params_ClassLoaded params{};
    ProcessEvent(func, &params);
}
void UUI_BP_Station_Social_Interaction_C::CloseStationInteraction(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_Station_Social_Interaction.UI_BP_Station_Social_Interaction_C.CloseStationInteraction"));
    struct Params_CloseStationInteraction {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CloseStationInteraction params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_Station_Social_Interaction_C::ExecuteUbergraph_UI_BP_Station_Social_Interaction(int32_t EntryPoint, int32_t CallFunc_PostEventAtLocation_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UObject* K2Node_CustomEvent_Caller_1, UObject* K2Node_CustomEvent_Caller, UUIManager* CallFunc_Get_ReturnValue) {}
