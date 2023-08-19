#include "EInputDeviceUsed.hpp"
#include "FEventReply.hpp"
#include "FFocusEvent.hpp"
#include "FGeometry.hpp"
#include "FInputActionKeyMapping.hpp"
#include "FInputAxisKeyMapping.hpp"
#include "FKey.hpp"
#include "FKeyEvent.hpp"
#include "FPointerEvent.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UInputSettings.hpp"
#include "UPhoenixGameSettings.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUIManager.hpp"
#include "UUI_BP_FG_DetailsPanelBack_C.hpp"
#include "UUI_BP_InputActionAlt_Row_C.hpp"
#include "UUI_BP_InputAxisAlt_Row_C.hpp"
#include "UUI_BP_KeyMapping_C.hpp"
#include "UUI_BP_MKBInput_C.hpp"
#include "UUI_BP_MKBInput_ConflictItem_C.hpp"
#include "UVerticalBox.hpp"
#include "UWidgetSwitcher.hpp"
void UUI_BP_MKBInput_C::Is_Key_for_Action(FKey Key, FName ActionName, bool& RetVal, TArray<FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, FString CallFunc_KeyToString_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, FInputActionKeyMapping CallFunc_Array_Get_Item, FString CallFunc_KeyToString_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C.Is Key for Action"));
    struct Params_Is_Key_for_Action {
        FKey Key; // 0x0
        FName ActionName; // 0x18
        bool RetVal; // 0x20
        char pad_21[0x7];
        TArray<FInputActionKeyMapping> CallFunc_GetActionMappingByName_OutMappings; // 0x28
        FString CallFunc_KeyToString_ReturnValue; // 0x38
        int32_t CallFunc_Array_Length_ReturnValue; // 0x48
        int32_t Temp_int_Array_Index_Variable; // 0x4c
        FInputActionKeyMapping CallFunc_Array_Get_Item; // 0x50
        FString CallFunc_KeyToString_ReturnValue_1; // 0x88
        int32_t Temp_int_Loop_Counter_Variable; // 0x98
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x9c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x9d
        char pad_9e[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xa0
    }; // Size: 0xa4
    Params_Is_Key_for_Action params{};
    params.Key = (FKey)Key;
    params.ActionName = (FName)ActionName;
    params.RetVal = (bool)RetVal;
    params.CallFunc_GetActionMappingByName_OutMappings = (TArray<FInputActionKeyMapping>)CallFunc_GetActionMappingByName_OutMappings;
    params.CallFunc_KeyToString_ReturnValue = (FString)CallFunc_KeyToString_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Get_Item = (FInputActionKeyMapping)CallFunc_Array_Get_Item;
    params.CallFunc_KeyToString_ReturnValue_1 = (FString)CallFunc_KeyToString_ReturnValue_1;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    RetVal = params.RetVal;
    CallFunc_GetActionMappingByName_OutMappings = params.CallFunc_GetActionMappingByName_OutMappings;
}
int32_t UUI_BP_MKBInput_C::GetAxisStaticVariables(FName InAxisName, FName& GroupName, TArray<FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, FInputAxisKeyMapping CallFunc_Array_Get_Item, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C.GetAxisStaticVariables"));
    struct Params_GetAxisStaticVariables {
        FName InAxisName; // 0x0
        FName GroupName; // 0x8
        int32_t ReturnValue; // 0x10
        char pad_14[0x4];
        TArray<FInputAxisKeyMapping> CallFunc_GetAxisMappingByName_OutMappings; // 0x18
        int32_t Temp_int_Array_Index_Variable; // 0x28
        int32_t CallFunc_Array_Length_ReturnValue; // 0x2c
        FInputAxisKeyMapping CallFunc_Array_Get_Item; // 0x30
        int32_t Temp_int_Loop_Counter_Variable; // 0x68
        bool CallFunc_Less_IntInt_ReturnValue; // 0x6c
        char pad_6d[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x70
    }; // Size: 0x74
    Params_GetAxisStaticVariables params{};
    params.InAxisName = (FName)InAxisName;
    params.GroupName = (FName)GroupName;
    params.CallFunc_GetAxisMappingByName_OutMappings = (TArray<FInputAxisKeyMapping>)CallFunc_GetAxisMappingByName_OutMappings;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (FInputAxisKeyMapping)CallFunc_Array_Get_Item;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    GroupName = params.GroupName;
    CallFunc_GetAxisMappingByName_OutMappings = params.CallFunc_GetAxisMappingByName_OutMappings;
    return (int32_t)params.ReturnValue;
}
UUI_BP_MKBInput_C* UUI_BP_MKBInput_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C");
    return (UUI_BP_MKBInput_C*)res;
}
FEventReply UUI_BP_MKBInput_C::OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent, bool Temp_bool_Variable, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, FKey Temp_struct_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, FKey Temp_struct_Variable_1, FKey K2Node_Select_Default, FEventReply CallFunc_Handled_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C.OnMouseWheel"));
    struct Params_OnMouseWheel {
        FGeometry MyGeometry; // 0x0
        FPointerEvent MouseEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
        bool Temp_bool_Variable; // 0x160
        char pad_161[0x3];
        float CallFunc_PointerEvent_GetWheelDelta_ReturnValue; // 0x164
        FKey Temp_struct_Variable; // 0x168
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x180
        char pad_181[0x7];
        FKey Temp_struct_Variable_1; // 0x188
        FKey K2Node_Select_Default; // 0x1a0
        FEventReply CallFunc_Handled_ReturnValue; // 0x1b8
    }; // Size: 0x270
    Params_OnMouseWheel params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.MouseEvent = (FPointerEvent)MouseEvent;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_PointerEvent_GetWheelDelta_ReturnValue = (float)CallFunc_PointerEvent_GetWheelDelta_ReturnValue;
    params.Temp_struct_Variable = (FKey)Temp_struct_Variable;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.Temp_struct_Variable_1 = (FKey)Temp_struct_Variable_1;
    params.K2Node_Select_Default = (FKey)K2Node_Select_Default;
    params.CallFunc_Handled_ReturnValue = (FEventReply)CallFunc_Handled_ReturnValue;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
    return (FEventReply)params.ReturnValue;
}
void UUI_BP_MKBInput_C::ShowConflictUI(FKey Key, TArray<FInputActionKeyMapping>& ConflictingActions, TArray<FInputAxisKeyMapping>& ConflictingAxes, FString ConflictingActionLocKey, UUI_BP_MKBInput_ConflictItem_C* CallFunc_Create_ReturnValue, UUI_BP_MKBInput_ConflictItem_C* CallFunc_Create_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FString Temp_string_Variable, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, FString Temp_string_Variable_1) {}
void UUI_BP_MKBInput_C::ExecuteUbergraph_UI_BP_MKBInput(int32_t EntryPoint) {}
TArray<FString> UUI_BP_MKBInput_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable) {}
int32_t UUI_BP_MKBInput_C::GetActionStaticVariables(FName InActionName, FName& GroupName, TArray<FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, FInputActionKeyMapping CallFunc_Array_Get_Item, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C.GetActionStaticVariables"));
    struct Params_GetActionStaticVariables {
        FName InActionName; // 0x0
        FName GroupName; // 0x8
        int32_t ReturnValue; // 0x10
        char pad_14[0x4];
        TArray<FInputActionKeyMapping> CallFunc_GetActionMappingByName_OutMappings; // 0x18
        int32_t Temp_int_Array_Index_Variable; // 0x28
        int32_t CallFunc_Array_Length_ReturnValue; // 0x2c
        FInputActionKeyMapping CallFunc_Array_Get_Item; // 0x30
        int32_t Temp_int_Loop_Counter_Variable; // 0x68
        bool CallFunc_Less_IntInt_ReturnValue; // 0x6c
        char pad_6d[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x70
    }; // Size: 0x74
    Params_GetActionStaticVariables params{};
    params.InActionName = (FName)InActionName;
    params.GroupName = (FName)GroupName;
    params.CallFunc_GetActionMappingByName_OutMappings = (TArray<FInputActionKeyMapping>)CallFunc_GetActionMappingByName_OutMappings;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (FInputActionKeyMapping)CallFunc_Array_Get_Item;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetActionMappingByName_OutMappings = params.CallFunc_GetActionMappingByName_OutMappings;
    GroupName = params.GroupName;
    return (int32_t)params.ReturnValue;
}
void UUI_BP_MKBInput_C::ConfirmCachedConflicts(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, bool CallFunc_SaveInputConfig_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_SetMKBAction_ReturnValue, FInputAxisKeyMapping CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_UnbindMKBAxis_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SetMKBAxis_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, FInputActionKeyMapping CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_UnbindMKBAction_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C.ConfirmCachedConflicts"));
    struct Params_ConfirmCachedConflicts {
        int32_t Temp_int_Loop_Counter_Variable; // 0x0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x4
        int32_t Temp_int_Array_Index_Variable; // 0x8
        int32_t Temp_int_Array_Index_Variable_1; // 0xc
        bool CallFunc_SaveInputConfig_ReturnValue; // 0x10
        char pad_11[0x3];
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x18
        bool CallFunc_SetMKBAction_ReturnValue; // 0x1c
        char pad_1d[0x3];
        FInputAxisKeyMapping CallFunc_Array_Get_Item; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x58
        bool CallFunc_UnbindMKBAxis_ReturnValue; // 0x5c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x5d
        bool CallFunc_SetMKBAxis_ReturnValue; // 0x5e
        char pad_5f[0x1];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x60
        char pad_64[0x4];
        FInputActionKeyMapping CallFunc_Array_Get_Item_1; // 0x68
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0xa0
        bool CallFunc_UnbindMKBAction_ReturnValue; // 0xa1
    }; // Size: 0xa2
    Params_ConfirmCachedConflicts params{};
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_SaveInputConfig_ReturnValue = (bool)CallFunc_SaveInputConfig_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_SetMKBAction_ReturnValue = (bool)CallFunc_SetMKBAction_ReturnValue;
    params.CallFunc_Array_Get_Item = (FInputAxisKeyMapping)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_UnbindMKBAxis_ReturnValue = (bool)CallFunc_UnbindMKBAxis_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_SetMKBAxis_ReturnValue = (bool)CallFunc_SetMKBAxis_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Array_Get_Item_1 = (FInputActionKeyMapping)CallFunc_Array_Get_Item_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_UnbindMKBAction_ReturnValue = (bool)CallFunc_UnbindMKBAction_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_MKBInput_C::HandleRebind(FKey Input, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_ValidateInput_IsValid, bool CallFunc_IsValid_ReturnValue, FName CallFunc_GetActionStaticVariables_GroupName, int32_t CallFunc_GetActionStaticVariables_ReturnValue, FInputActionKeyMapping K2Node_MakeStruct_InputActionKeyMapping, bool CallFunc_IsValid_ReturnValue_1, FName CallFunc_GetAxisStaticVariables_GroupName, int32_t CallFunc_GetAxisStaticVariables_ReturnValue, bool CallFunc_UpdateActionMapping_Success, TArray<FInputActionKeyMapping>& CallFunc_UpdateActionMapping_ConflictingActions, TArray<FInputAxisKeyMapping>& CallFunc_UpdateActionMapping_ConflictingAxes, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, float CallFunc_GetCurrentAxisRowAxis_Scale_Scale, FInputAxisKeyMapping K2Node_MakeStruct_InputAxisKeyMapping, FInputAxisKeyMapping CallFunc_CorrectInputAxisKeyIfNeeded_OutInputAxisMapping, bool CallFunc_UpdateAxisMapping_Success, TArray<FInputActionKeyMapping>& CallFunc_UpdateAxisMapping_ConflictingInputActions, TArray<FInputAxisKeyMapping>& CallFunc_UpdateAxisMapping_ConflictingInputAxes) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C.HandleRebind"));
    struct Params_HandleRebind {
        FKey Input; // 0x0
        bool CallFunc_Key_IsGamepadKey_ReturnValue; // 0x18
        bool CallFunc_ValidateInput_IsValid; // 0x19
        bool CallFunc_IsValid_ReturnValue; // 0x1a
        char pad_1b[0x1];
        FName CallFunc_GetActionStaticVariables_GroupName; // 0x1c
        int32_t CallFunc_GetActionStaticVariables_ReturnValue; // 0x24
        FInputActionKeyMapping K2Node_MakeStruct_InputActionKeyMapping; // 0x28
        bool CallFunc_IsValid_ReturnValue_1; // 0x60
        char pad_61[0x3];
        FName CallFunc_GetAxisStaticVariables_GroupName; // 0x64
        int32_t CallFunc_GetAxisStaticVariables_ReturnValue; // 0x6c
        bool CallFunc_UpdateActionMapping_Success; // 0x70
        char pad_71[0x7];
        TArray<FInputActionKeyMapping> CallFunc_UpdateActionMapping_ConflictingActions; // 0x78
        TArray<FInputAxisKeyMapping> CallFunc_UpdateActionMapping_ConflictingAxes; // 0x88
        UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue; // 0x98
        float CallFunc_GetCurrentAxisRowAxis_Scale_Scale; // 0xa0
        char pad_a4[0x4];
        FInputAxisKeyMapping K2Node_MakeStruct_InputAxisKeyMapping; // 0xa8
        FInputAxisKeyMapping CallFunc_CorrectInputAxisKeyIfNeeded_OutInputAxisMapping; // 0xe0
        bool CallFunc_UpdateAxisMapping_Success; // 0x118
        char pad_119[0x7];
        TArray<FInputActionKeyMapping> CallFunc_UpdateAxisMapping_ConflictingInputActions; // 0x120
        TArray<FInputAxisKeyMapping> CallFunc_UpdateAxisMapping_ConflictingInputAxes; // 0x130
    }; // Size: 0x140
    Params_HandleRebind params{};
    params.Input = (FKey)Input;
    params.CallFunc_Key_IsGamepadKey_ReturnValue = (bool)CallFunc_Key_IsGamepadKey_ReturnValue;
    params.CallFunc_ValidateInput_IsValid = (bool)CallFunc_ValidateInput_IsValid;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetActionStaticVariables_GroupName = (FName)CallFunc_GetActionStaticVariables_GroupName;
    params.CallFunc_GetActionStaticVariables_ReturnValue = (int32_t)CallFunc_GetActionStaticVariables_ReturnValue;
    params.K2Node_MakeStruct_InputActionKeyMapping = (FInputActionKeyMapping)K2Node_MakeStruct_InputActionKeyMapping;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetAxisStaticVariables_GroupName = (FName)CallFunc_GetAxisStaticVariables_GroupName;
    params.CallFunc_GetAxisStaticVariables_ReturnValue = (int32_t)CallFunc_GetAxisStaticVariables_ReturnValue;
    params.CallFunc_UpdateActionMapping_Success = (bool)CallFunc_UpdateActionMapping_Success;
    params.CallFunc_UpdateActionMapping_ConflictingActions = (TArray<FInputActionKeyMapping>)CallFunc_UpdateActionMapping_ConflictingActions;
    params.CallFunc_UpdateActionMapping_ConflictingAxes = (TArray<FInputAxisKeyMapping>)CallFunc_UpdateActionMapping_ConflictingAxes;
    params.CallFunc_GetPhoenixGameSettings_ReturnValue = (UPhoenixGameSettings*)CallFunc_GetPhoenixGameSettings_ReturnValue;
    params.CallFunc_GetCurrentAxisRowAxis_Scale_Scale = (float)CallFunc_GetCurrentAxisRowAxis_Scale_Scale;
    params.K2Node_MakeStruct_InputAxisKeyMapping = (FInputAxisKeyMapping)K2Node_MakeStruct_InputAxisKeyMapping;
    params.CallFunc_CorrectInputAxisKeyIfNeeded_OutInputAxisMapping = (FInputAxisKeyMapping)CallFunc_CorrectInputAxisKeyIfNeeded_OutInputAxisMapping;
    params.CallFunc_UpdateAxisMapping_Success = (bool)CallFunc_UpdateAxisMapping_Success;
    params.CallFunc_UpdateAxisMapping_ConflictingInputActions = (TArray<FInputActionKeyMapping>)CallFunc_UpdateAxisMapping_ConflictingInputActions;
    params.CallFunc_UpdateAxisMapping_ConflictingInputAxes = (TArray<FInputAxisKeyMapping>)CallFunc_UpdateAxisMapping_ConflictingInputAxes;
    ProcessEvent(func, &params);
    CallFunc_UpdateActionMapping_ConflictingActions = params.CallFunc_UpdateActionMapping_ConflictingActions;
    CallFunc_UpdateAxisMapping_ConflictingInputActions = params.CallFunc_UpdateAxisMapping_ConflictingInputActions;
    CallFunc_UpdateActionMapping_ConflictingAxes = params.CallFunc_UpdateActionMapping_ConflictingAxes;
    CallFunc_UpdateAxisMapping_ConflictingInputAxes = params.CallFunc_UpdateAxisMapping_ConflictingInputAxes;
}
void UUI_BP_MKBInput_C::GetCurrentAxisRowAxis_Scale(float& Scale, float AxisScale) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C.GetCurrentAxisRowAxis Scale"));
    struct Params_GetCurrentAxisRowAxis_Scale {
        float Scale; // 0x0
        float AxisScale; // 0x4
    }; // Size: 0x8
    Params_GetCurrentAxisRowAxis_Scale params{};
    params.Scale = (float)Scale;
    params.AxisScale = (float)AxisScale;
    ProcessEvent(func, &params);
    Scale = params.Scale;
}
void UUI_BP_MKBInput_C::UpdateAxisMapping(FInputAxisKeyMapping NewAxis, bool& Success, TArray<FInputActionKeyMapping>& ConflictingInputActions, TArray<FInputAxisKeyMapping>& ConflictingInputAxes, TArray<FInputAxisKeyMapping>& K2Node_MakeArray_Array, FString CallFunc_KeyToString_ReturnValue, TArray<FInputAxisKeyMapping>& CallFunc_TransposeAxisToQWERTY_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FInputAxisKeyMapping CallFunc_GetMKBAxisPairsByName_OutPositivePrimary, FInputAxisKeyMapping CallFunc_GetMKBAxisPairsByName_OutPositiveAlternative, FInputAxisKeyMapping CallFunc_GetMKBAxisPairsByName_OutNegativePrimary, FInputAxisKeyMapping CallFunc_GetMKBAxisPairsByName_OutNegativeAlternative, bool CallFunc_GetMKBAxisPairsByName_ReturnValue, bool CallFunc_SetMKBAxis_ReturnValue, bool Temp_bool_Variable, UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<FInputActionKeyMapping>& CallFunc_GetAxisMappingCollisions_OutCollidingActionMappings, TArray<FInputAxisKeyMapping>& CallFunc_GetAxisMappingCollisions_OutCollidingAxisMappings, TArray<FInputAxisKeyMapping>& CallFunc_TransposeAxisFromQWERTY_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, TArray<FInputActionKeyMapping>& CallFunc_TransposeActionFromQWERTY_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_SaveInputConfig_ReturnValue, bool Temp_bool_Variable_1, FInputAxisKeyMapping K2Node_Select_Default, bool Temp_bool_Variable_2, FInputAxisKeyMapping K2Node_Select_Default_1, FInputAxisKeyMapping K2Node_Select_Default_2, FString CallFunc_KeyToString_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_UnbindMKBAxis_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C.UpdateAxisMapping"));
    struct Params_UpdateAxisMapping {
        FInputAxisKeyMapping NewAxis; // 0x0
        bool Success; // 0x38
        char pad_39[0x7];
        TArray<FInputActionKeyMapping> ConflictingInputActions; // 0x40
        TArray<FInputAxisKeyMapping> ConflictingInputAxes; // 0x50
        TArray<FInputAxisKeyMapping> K2Node_MakeArray_Array; // 0x60
        FString CallFunc_KeyToString_ReturnValue; // 0x70
        TArray<FInputAxisKeyMapping> CallFunc_TransposeAxisToQWERTY_ReturnValue; // 0x80
        bool CallFunc_Greater_FloatFloat_ReturnValue; // 0x90
        char pad_91[0x7];
        FInputAxisKeyMapping CallFunc_GetMKBAxisPairsByName_OutPositivePrimary; // 0x98
        FInputAxisKeyMapping CallFunc_GetMKBAxisPairsByName_OutPositiveAlternative; // 0xd0
        FInputAxisKeyMapping CallFunc_GetMKBAxisPairsByName_OutNegativePrimary; // 0x108
        FInputAxisKeyMapping CallFunc_GetMKBAxisPairsByName_OutNegativeAlternative; // 0x140
        bool CallFunc_GetMKBAxisPairsByName_ReturnValue; // 0x178
        bool CallFunc_SetMKBAxis_ReturnValue; // 0x179
        bool Temp_bool_Variable; // 0x17a
        char pad_17b[0x5];
        UInputSettings* CallFunc_GetInputSettings_ReturnValue; // 0x180
        TArray<FInputActionKeyMapping> CallFunc_GetAxisMappingCollisions_OutCollidingActionMappings; // 0x188
        TArray<FInputAxisKeyMapping> CallFunc_GetAxisMappingCollisions_OutCollidingAxisMappings; // 0x198
        TArray<FInputAxisKeyMapping> CallFunc_TransposeAxisFromQWERTY_ReturnValue; // 0x1a8
        int32_t CallFunc_Array_Length_ReturnValue; // 0x1b8
        char pad_1bc[0x4];
        TArray<FInputActionKeyMapping> CallFunc_TransposeActionFromQWERTY_ReturnValue; // 0x1c0
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x1d0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x1d4
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x1d8
        bool CallFunc_SaveInputConfig_ReturnValue; // 0x1d9
        bool Temp_bool_Variable_1; // 0x1da
        char pad_1db[0x5];
        FInputAxisKeyMapping K2Node_Select_Default; // 0x1e0
        bool Temp_bool_Variable_2; // 0x218
        char pad_219[0x7];
        FInputAxisKeyMapping K2Node_Select_Default_1; // 0x220
        FInputAxisKeyMapping K2Node_Select_Default_2; // 0x258
        FString CallFunc_KeyToString_ReturnValue_1; // 0x290
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x2a0
        bool CallFunc_UnbindMKBAxis_ReturnValue; // 0x2a1
    }; // Size: 0x2a2
    Params_UpdateAxisMapping params{};
    params.NewAxis = (FInputAxisKeyMapping)NewAxis;
    params.Success = (bool)Success;
    params.ConflictingInputActions = (TArray<FInputActionKeyMapping>)ConflictingInputActions;
    params.ConflictingInputAxes = (TArray<FInputAxisKeyMapping>)ConflictingInputAxes;
    params.K2Node_MakeArray_Array = (TArray<FInputAxisKeyMapping>)K2Node_MakeArray_Array;
    params.CallFunc_KeyToString_ReturnValue = (FString)CallFunc_KeyToString_ReturnValue;
    params.CallFunc_TransposeAxisToQWERTY_ReturnValue = (TArray<FInputAxisKeyMapping>)CallFunc_TransposeAxisToQWERTY_ReturnValue;
    params.CallFunc_Greater_FloatFloat_ReturnValue = (bool)CallFunc_Greater_FloatFloat_ReturnValue;
    params.CallFunc_GetMKBAxisPairsByName_OutPositivePrimary = (FInputAxisKeyMapping)CallFunc_GetMKBAxisPairsByName_OutPositivePrimary;
    params.CallFunc_GetMKBAxisPairsByName_OutPositiveAlternative = (FInputAxisKeyMapping)CallFunc_GetMKBAxisPairsByName_OutPositiveAlternative;
    params.CallFunc_GetMKBAxisPairsByName_OutNegativePrimary = (FInputAxisKeyMapping)CallFunc_GetMKBAxisPairsByName_OutNegativePrimary;
    params.CallFunc_GetMKBAxisPairsByName_OutNegativeAlternative = (FInputAxisKeyMapping)CallFunc_GetMKBAxisPairsByName_OutNegativeAlternative;
    params.CallFunc_GetMKBAxisPairsByName_ReturnValue = (bool)CallFunc_GetMKBAxisPairsByName_ReturnValue;
    params.CallFunc_SetMKBAxis_ReturnValue = (bool)CallFunc_SetMKBAxis_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_GetInputSettings_ReturnValue = (UInputSettings*)CallFunc_GetInputSettings_ReturnValue;
    params.CallFunc_GetAxisMappingCollisions_OutCollidingActionMappings = (TArray<FInputActionKeyMapping>)CallFunc_GetAxisMappingCollisions_OutCollidingActionMappings;
    params.CallFunc_GetAxisMappingCollisions_OutCollidingAxisMappings = (TArray<FInputAxisKeyMapping>)CallFunc_GetAxisMappingCollisions_OutCollidingAxisMappings;
    params.CallFunc_TransposeAxisFromQWERTY_ReturnValue = (TArray<FInputAxisKeyMapping>)CallFunc_TransposeAxisFromQWERTY_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_TransposeActionFromQWERTY_ReturnValue = (TArray<FInputActionKeyMapping>)CallFunc_TransposeActionFromQWERTY_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_SaveInputConfig_ReturnValue = (bool)CallFunc_SaveInputConfig_ReturnValue;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.K2Node_Select_Default = (FInputAxisKeyMapping)K2Node_Select_Default;
    params.Temp_bool_Variable_2 = (bool)Temp_bool_Variable_2;
    params.K2Node_Select_Default_1 = (FInputAxisKeyMapping)K2Node_Select_Default_1;
    params.K2Node_Select_Default_2 = (FInputAxisKeyMapping)K2Node_Select_Default_2;
    params.CallFunc_KeyToString_ReturnValue_1 = (FString)CallFunc_KeyToString_ReturnValue_1;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_UnbindMKBAxis_ReturnValue = (bool)CallFunc_UnbindMKBAxis_ReturnValue;
    ProcessEvent(func, &params);
    Success = params.Success;
    CallFunc_GetAxisMappingCollisions_OutCollidingAxisMappings = params.CallFunc_GetAxisMappingCollisions_OutCollidingAxisMappings;
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    ConflictingInputActions = params.ConflictingInputActions;
    ConflictingInputAxes = params.ConflictingInputAxes;
    CallFunc_TransposeAxisToQWERTY_ReturnValue = params.CallFunc_TransposeAxisToQWERTY_ReturnValue;
    CallFunc_TransposeAxisFromQWERTY_ReturnValue = params.CallFunc_TransposeAxisFromQWERTY_ReturnValue;
    CallFunc_GetAxisMappingCollisions_OutCollidingActionMappings = params.CallFunc_GetAxisMappingCollisions_OutCollidingActionMappings;
    CallFunc_TransposeActionFromQWERTY_ReturnValue = params.CallFunc_TransposeActionFromQWERTY_ReturnValue;
}
void UUI_BP_MKBInput_C::UpdateActionMapping(FInputActionKeyMapping NewAction, bool& Success, TArray<FInputActionKeyMapping>& ConflictingActions, TArray<FInputAxisKeyMapping>& ConflictingAxes, FInputActionKeyMapping PreviousAlternative, FInputActionKeyMapping PreviousPrimary, FString CallFunc_KeyToString_ReturnValue, FInputActionKeyMapping CallFunc_GetMKBActionPairByName_OutPrimary, FInputActionKeyMapping CallFunc_GetMKBActionPairByName_OutAlternative, bool CallFunc_GetMKBActionPairByName_ReturnValue, TArray<FInputActionKeyMapping>& K2Node_MakeArray_Array, TArray<FInputActionKeyMapping>& CallFunc_TransposeActionToQWERTY_ReturnValue, bool CallFunc_SetMKBAction_ReturnValue, UInputSettings* CallFunc_GetInputSettings_ReturnValue, bool CallFunc_SaveInputConfig_ReturnValue, TArray<FInputActionKeyMapping>& CallFunc_GetActionMappingCollisions_OutCollidingActionMappings, TArray<FInputAxisKeyMapping>& CallFunc_GetActionMappingCollisions_OutCollidingAxisMappings, TArray<FInputAxisKeyMapping>& CallFunc_TransposeAxisFromQWERTY_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, TArray<FInputActionKeyMapping>& CallFunc_TransposeActionFromQWERTY_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, FInputActionKeyMapping K2Node_Select_Default, bool CallFunc_UnbindMKBAction_ReturnValue, FString CallFunc_KeyToString_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C.UpdateActionMapping"));
    struct Params_UpdateActionMapping {
        FInputActionKeyMapping NewAction; // 0x0
        bool Success; // 0x38
        char pad_39[0x7];
        TArray<FInputActionKeyMapping> ConflictingActions; // 0x40
        TArray<FInputAxisKeyMapping> ConflictingAxes; // 0x50
        FInputActionKeyMapping PreviousAlternative; // 0x60
        FInputActionKeyMapping PreviousPrimary; // 0x98
        FString CallFunc_KeyToString_ReturnValue; // 0xd0
        FInputActionKeyMapping CallFunc_GetMKBActionPairByName_OutPrimary; // 0xe0
        FInputActionKeyMapping CallFunc_GetMKBActionPairByName_OutAlternative; // 0x118
        bool CallFunc_GetMKBActionPairByName_ReturnValue; // 0x150
        char pad_151[0x7];
        TArray<FInputActionKeyMapping> K2Node_MakeArray_Array; // 0x158
        TArray<FInputActionKeyMapping> CallFunc_TransposeActionToQWERTY_ReturnValue; // 0x168
        bool CallFunc_SetMKBAction_ReturnValue; // 0x178
        char pad_179[0x7];
        UInputSettings* CallFunc_GetInputSettings_ReturnValue; // 0x180
        bool CallFunc_SaveInputConfig_ReturnValue; // 0x188
        char pad_189[0x7];
        TArray<FInputActionKeyMapping> CallFunc_GetActionMappingCollisions_OutCollidingActionMappings; // 0x190
        TArray<FInputAxisKeyMapping> CallFunc_GetActionMappingCollisions_OutCollidingAxisMappings; // 0x1a0
        TArray<FInputAxisKeyMapping> CallFunc_TransposeAxisFromQWERTY_ReturnValue; // 0x1b0
        int32_t CallFunc_Array_Length_ReturnValue; // 0x1c0
        char pad_1c4[0x4];
        TArray<FInputActionKeyMapping> CallFunc_TransposeActionFromQWERTY_ReturnValue; // 0x1c8
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x1d8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x1dc
        bool Temp_bool_Variable; // 0x1e0
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x1e1
        char pad_1e2[0x6];
        FInputActionKeyMapping K2Node_Select_Default; // 0x1e8
        bool CallFunc_UnbindMKBAction_ReturnValue; // 0x220
        char pad_221[0x7];
        FString CallFunc_KeyToString_ReturnValue_1; // 0x228
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x238
    }; // Size: 0x239
    Params_UpdateActionMapping params{};
    params.NewAction = (FInputActionKeyMapping)NewAction;
    params.Success = (bool)Success;
    params.ConflictingActions = (TArray<FInputActionKeyMapping>)ConflictingActions;
    params.ConflictingAxes = (TArray<FInputAxisKeyMapping>)ConflictingAxes;
    params.PreviousAlternative = (FInputActionKeyMapping)PreviousAlternative;
    params.PreviousPrimary = (FInputActionKeyMapping)PreviousPrimary;
    params.CallFunc_KeyToString_ReturnValue = (FString)CallFunc_KeyToString_ReturnValue;
    params.CallFunc_GetMKBActionPairByName_OutPrimary = (FInputActionKeyMapping)CallFunc_GetMKBActionPairByName_OutPrimary;
    params.CallFunc_GetMKBActionPairByName_OutAlternative = (FInputActionKeyMapping)CallFunc_GetMKBActionPairByName_OutAlternative;
    params.CallFunc_GetMKBActionPairByName_ReturnValue = (bool)CallFunc_GetMKBActionPairByName_ReturnValue;
    params.K2Node_MakeArray_Array = (TArray<FInputActionKeyMapping>)K2Node_MakeArray_Array;
    params.CallFunc_TransposeActionToQWERTY_ReturnValue = (TArray<FInputActionKeyMapping>)CallFunc_TransposeActionToQWERTY_ReturnValue;
    params.CallFunc_SetMKBAction_ReturnValue = (bool)CallFunc_SetMKBAction_ReturnValue;
    params.CallFunc_GetInputSettings_ReturnValue = (UInputSettings*)CallFunc_GetInputSettings_ReturnValue;
    params.CallFunc_SaveInputConfig_ReturnValue = (bool)CallFunc_SaveInputConfig_ReturnValue;
    params.CallFunc_GetActionMappingCollisions_OutCollidingActionMappings = (TArray<FInputActionKeyMapping>)CallFunc_GetActionMappingCollisions_OutCollidingActionMappings;
    params.CallFunc_GetActionMappingCollisions_OutCollidingAxisMappings = (TArray<FInputAxisKeyMapping>)CallFunc_GetActionMappingCollisions_OutCollidingAxisMappings;
    params.CallFunc_TransposeAxisFromQWERTY_ReturnValue = (TArray<FInputAxisKeyMapping>)CallFunc_TransposeAxisFromQWERTY_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_TransposeActionFromQWERTY_ReturnValue = (TArray<FInputActionKeyMapping>)CallFunc_TransposeActionFromQWERTY_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.K2Node_Select_Default = (FInputActionKeyMapping)K2Node_Select_Default;
    params.CallFunc_UnbindMKBAction_ReturnValue = (bool)CallFunc_UnbindMKBAction_ReturnValue;
    params.CallFunc_KeyToString_ReturnValue_1 = (FString)CallFunc_KeyToString_ReturnValue_1;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    ProcessEvent(func, &params);
    Success = params.Success;
    CallFunc_GetActionMappingCollisions_OutCollidingAxisMappings = params.CallFunc_GetActionMappingCollisions_OutCollidingAxisMappings;
    K2Node_MakeArray_Array = params.K2Node_MakeArray_Array;
    ConflictingActions = params.ConflictingActions;
    CallFunc_GetActionMappingCollisions_OutCollidingActionMappings = params.CallFunc_GetActionMappingCollisions_OutCollidingActionMappings;
    ConflictingAxes = params.ConflictingAxes;
    CallFunc_TransposeActionToQWERTY_ReturnValue = params.CallFunc_TransposeActionToQWERTY_ReturnValue;
    CallFunc_TransposeAxisFromQWERTY_ReturnValue = params.CallFunc_TransposeAxisFromQWERTY_ReturnValue;
    CallFunc_TransposeActionFromQWERTY_ReturnValue = params.CallFunc_TransposeActionFromQWERTY_ReturnValue;
}
void UUI_BP_MKBInput_C::ValidateInput(FKey InputKey, bool& IsValid, FString CallFunc_KeyToString_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C.ValidateInput"));
    struct Params_ValidateInput {
        FKey InputKey; // 0x0
        bool IsValid; // 0x18
        char pad_19[0x7];
        FString CallFunc_KeyToString_ReturnValue; // 0x20
        bool CallFunc_Array_Contains_ReturnValue; // 0x30
        bool CallFunc_EqualEqual_StriStri_ReturnValue; // 0x31
        bool CallFunc_Key_IsGamepadKey_ReturnValue; // 0x32
        bool CallFunc_BooleanOR_ReturnValue; // 0x33
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x34
        bool CallFunc_Not_PreBool_ReturnValue; // 0x35
    }; // Size: 0x36
    Params_ValidateInput params{};
    params.InputKey = (FKey)InputKey;
    params.IsValid = (bool)IsValid;
    params.CallFunc_KeyToString_ReturnValue = (FString)CallFunc_KeyToString_ReturnValue;
    params.CallFunc_Array_Contains_ReturnValue = (bool)CallFunc_Array_Contains_ReturnValue;
    params.CallFunc_EqualEqual_StriStri_ReturnValue = (bool)CallFunc_EqualEqual_StriStri_ReturnValue;
    params.CallFunc_Key_IsGamepadKey_ReturnValue = (bool)CallFunc_Key_IsGamepadKey_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    ProcessEvent(func, &params);
    IsValid = params.IsValid;
}
FEventReply UUI_BP_MKBInput_C::OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FKey CallFunc_PointerEvent_GetEffectingButton_ReturnValue, EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C.OnMouseButtonDown"));
    struct Params_OnMouseButtonDown {
        FGeometry MyGeometry; // 0x0
        FPointerEvent MouseEvent; // 0x38
        FEventReply ReturnValue; // 0xa8
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x160
        FKey CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x168
        EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue; // 0x180
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x181
        char pad_182[0x6];
        FEventReply CallFunc_Handled_ReturnValue; // 0x188
        bool CallFunc_BooleanAND_ReturnValue; // 0x240
    }; // Size: 0x241
    Params_OnMouseButtonDown params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.MouseEvent = (FPointerEvent)MouseEvent;
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_PointerEvent_GetEffectingButton_ReturnValue = (FKey)CallFunc_PointerEvent_GetEffectingButton_ReturnValue;
    params.CallFunc_GetLastUsedInputDevice_ReturnValue = (EInputDeviceUsed)CallFunc_GetLastUsedInputDevice_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_Handled_ReturnValue = (FEventReply)CallFunc_Handled_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    MouseEvent = params.MouseEvent;
    return (FEventReply)params.ReturnValue;
}
FEventReply UUI_BP_MKBInput_C::OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent, bool CancelButtonPressed, FKey CallFunc_GetKey_ReturnValue, bool CallFunc_Is_Key_for_Action_RetVal, bool CallFunc_Is_Key_for_Action_RetVal_1, bool CallFunc_Is_Key_for_Action_RetVal_2, bool CallFunc_Is_Key_for_Action_RetVal_3, bool CallFunc_BooleanOR_ReturnValue, int32_t CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, FEventReply CallFunc_Handled_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C.OnKeyDown"));
    struct Params_OnKeyDown {
        FGeometry MyGeometry; // 0x0
        FKeyEvent InKeyEvent; // 0x38
        FEventReply ReturnValue; // 0x70
        bool CancelButtonPressed; // 0x128
        char pad_129[0x7];
        FKey CallFunc_GetKey_ReturnValue; // 0x130
        bool CallFunc_Is_Key_for_Action_RetVal; // 0x148
        bool CallFunc_Is_Key_for_Action_RetVal_1; // 0x149
        bool CallFunc_Is_Key_for_Action_RetVal_2; // 0x14a
        bool CallFunc_Is_Key_for_Action_RetVal_3; // 0x14b
        bool CallFunc_BooleanOR_ReturnValue; // 0x14c
        char pad_14d[0x3];
        int32_t CallFunc_GetActiveWidgetIndex_ReturnValue; // 0x150
        bool CallFunc_NotEqual_IntInt_ReturnValue; // 0x154
        char pad_155[0x3];
        FEventReply CallFunc_Handled_ReturnValue; // 0x158
    }; // Size: 0x210
    Params_OnKeyDown params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InKeyEvent = (FKeyEvent)InKeyEvent;
    params.CancelButtonPressed = (bool)CancelButtonPressed;
    params.CallFunc_GetKey_ReturnValue = (FKey)CallFunc_GetKey_ReturnValue;
    params.CallFunc_Is_Key_for_Action_RetVal = (bool)CallFunc_Is_Key_for_Action_RetVal;
    params.CallFunc_Is_Key_for_Action_RetVal_1 = (bool)CallFunc_Is_Key_for_Action_RetVal_1;
    params.CallFunc_Is_Key_for_Action_RetVal_2 = (bool)CallFunc_Is_Key_for_Action_RetVal_2;
    params.CallFunc_Is_Key_for_Action_RetVal_3 = (bool)CallFunc_Is_Key_for_Action_RetVal_3;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_GetActiveWidgetIndex_ReturnValue = (int32_t)CallFunc_GetActiveWidgetIndex_ReturnValue;
    params.CallFunc_NotEqual_IntInt_ReturnValue = (bool)CallFunc_NotEqual_IntInt_ReturnValue;
    params.CallFunc_Handled_ReturnValue = (FEventReply)CallFunc_Handled_ReturnValue;
    ProcessEvent(func, &params);
    return (FEventReply)params.ReturnValue;
}
void UUI_BP_MKBInput_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_MKBInput_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_MKBInput_C::OnFocusLost(FFocusEvent InFocusEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_MKBInput.UI_BP_MKBInput_C.OnFocusLost"));
    struct Params_OnFocusLost {
        FFocusEvent InFocusEvent; // 0x0
    }; // Size: 0x8
    Params_OnFocusLost params{};
    params.InFocusEvent = (FFocusEvent)InFocusEvent;
    ProcessEvent(func, &params);
}
