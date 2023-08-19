#pragma once
#include <cstdint>
#include "EInputDeviceUsed.hpp"
#include "FEventReply.hpp"
#include "FFocusEvent.hpp"
#include "FGeometry.hpp"
#include "FInputActionKeyMapping.hpp"
#include "FInputAxisKeyMapping.hpp"
#include "FKey.hpp"
#include "FKeyEvent.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UPhoenixRichTextBlock;
class UUIManager;
class UPhoenixTextBlock;
class UVerticalBox;
class UUI_BP_KeyMapping_C;
class UWidgetSwitcher;
class UUI_BP_FG_DetailsPanelBack_C;
class UCanvasPanel;
class UUI_BP_InputActionAlt_Row_C;
class UUI_BP_InputAxisAlt_Row_C;
class UUI_BP_MKBInput_ConflictItem_C;
class UPhoenixGameSettings;
class UInputSettings;
struct FPointerEvent;
#pragma pack(push, 1)
class UUI_BP_MKBInput_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UPhoenixRichTextBlock* CancelCallout; // 0x330
    UPhoenixRichTextBlock* CancelCallout_MenuLMB; // 0x338
    UPhoenixRichTextBlock* CancelRebindCallout; // 0x340
    UPhoenixTextBlock* CancelRebindText; // 0x348
    UPhoenixTextBlock* CancelText; // 0x350
    UPhoenixTextBlock* CancelText_MenuLMB; // 0x358
    UPhoenixRichTextBlock* ConfirmCallout; // 0x360
    UPhoenixTextBlock* ConfirmText; // 0x368
    UVerticalBox* ConflictList; // 0x370
    UPhoenixRichTextBlock* ConflictsText_MenuLMB; // 0x378
    UPhoenixRichTextBlock* ConflictsText_Multiple; // 0x380
    UPhoenixTextBlock* ConflictTitle; // 0x388
    UWidgetSwitcher* ContentSwitcher; // 0x390
    UCanvasPanel* InputBlockerPanel; // 0x398
    UUI_BP_FG_DetailsPanelBack_C* panelBack; // 0x3a0
    UPhoenixTextBlock* RebindTitle; // 0x3a8
    UPhoenixRichTextBlock* RetryCallout; // 0x3b0
    UPhoenixRichTextBlock* RetryCallout_MenuLMB; // 0x3b8
    UPhoenixTextBlock* RetryText; // 0x3c0
    UPhoenixTextBlock* RetryText_MenuLMB; // 0x3c8
    TArray<FKey> ForbiddenKeys; // 0x3d0
    TArray<FName> OneDirectionalAxes; // 0x3e0
    UUI_BP_KeyMapping_C* Parent; // 0x3f0
    UUI_BP_InputActionAlt_Row_C* CurrentActionRow; // 0x3f8
    UUI_BP_InputAxisAlt_Row_C* CurrentAxisRow; // 0x400
    bool RebindIsPrimary; // 0x408
    bool IsWaitingForInputForRebind; // 0x409
    char pad_40a[0x6];
    TArray<FInputActionKeyMapping> CachedConflictingActions; // 0x410
    TArray<FInputAxisKeyMapping> CachedConflictingAxes; // 0x420
    FInputActionKeyMapping CachedQueuedActionMapping; // 0x430
    FInputAxisKeyMapping CachedQueuedAxisMapping; // 0x468
    bool CachedQueuedMappingIsAxis; // 0x4a0
    char pad_4a1[0x7];
    TArray<UPhoenixUserWidget*> CachedConflictItems; // 0x4a8
    static UUI_BP_MKBInput_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable);
    int32_t GetAxisStaticVariables(FName InAxisName, FName& GroupName, TArray<FInputAxisKeyMapping>& CallFunc_GetAxisMappingByName_OutMappings, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, FInputAxisKeyMapping CallFunc_Array_Get_Item, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    int32_t GetActionStaticVariables(FName InActionName, FName& GroupName, TArray<FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, FInputActionKeyMapping CallFunc_Array_Get_Item, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void ConfirmCachedConflicts(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Array_Index_Variable_1, bool CallFunc_SaveInputConfig_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_SetMKBAction_ReturnValue, FInputAxisKeyMapping CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_UnbindMKBAxis_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SetMKBAxis_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, FInputActionKeyMapping CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_UnbindMKBAction_ReturnValue);
    void Is_Key_for_Action(FKey Key, FName ActionName, bool& RetVal, TArray<FInputActionKeyMapping>& CallFunc_GetActionMappingByName_OutMappings, FString CallFunc_KeyToString_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, FInputActionKeyMapping CallFunc_Array_Get_Item, FString CallFunc_KeyToString_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void ShowConflictUI(FKey Key, TArray<FInputActionKeyMapping>& ConflictingActions, TArray<FInputAxisKeyMapping>& ConflictingAxes, FString ConflictingActionLocKey, UUI_BP_MKBInput_ConflictItem_C* CallFunc_Create_ReturnValue, UUI_BP_MKBInput_ConflictItem_C* CallFunc_Create_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FString Temp_string_Variable, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, FString Temp_string_Variable_1);
    void HandleRebind(FKey Input, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_ValidateInput_IsValid, bool CallFunc_IsValid_ReturnValue, FName CallFunc_GetActionStaticVariables_GroupName, int32_t CallFunc_GetActionStaticVariables_ReturnValue, FInputActionKeyMapping K2Node_MakeStruct_InputActionKeyMapping, bool CallFunc_IsValid_ReturnValue_1, FName CallFunc_GetAxisStaticVariables_GroupName, int32_t CallFunc_GetAxisStaticVariables_ReturnValue, bool CallFunc_UpdateActionMapping_Success, TArray<FInputActionKeyMapping>& CallFunc_UpdateActionMapping_ConflictingActions, TArray<FInputAxisKeyMapping>& CallFunc_UpdateActionMapping_ConflictingAxes, UPhoenixGameSettings* CallFunc_GetPhoenixGameSettings_ReturnValue, float CallFunc_GetCurrentAxisRowAxis_Scale_Scale, FInputAxisKeyMapping K2Node_MakeStruct_InputAxisKeyMapping, FInputAxisKeyMapping CallFunc_CorrectInputAxisKeyIfNeeded_OutInputAxisMapping, bool CallFunc_UpdateAxisMapping_Success, TArray<FInputActionKeyMapping>& CallFunc_UpdateAxisMapping_ConflictingInputActions, TArray<FInputAxisKeyMapping>& CallFunc_UpdateAxisMapping_ConflictingInputAxes);
    void GetCurrentAxisRowAxis_Scale(float& Scale, float AxisScale);
    void UpdateAxisMapping(FInputAxisKeyMapping NewAxis, bool& Success, TArray<FInputActionKeyMapping>& ConflictingInputActions, TArray<FInputAxisKeyMapping>& ConflictingInputAxes, TArray<FInputAxisKeyMapping>& K2Node_MakeArray_Array, FString CallFunc_KeyToString_ReturnValue, TArray<FInputAxisKeyMapping>& CallFunc_TransposeAxisToQWERTY_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FInputAxisKeyMapping CallFunc_GetMKBAxisPairsByName_OutPositivePrimary, FInputAxisKeyMapping CallFunc_GetMKBAxisPairsByName_OutPositiveAlternative, FInputAxisKeyMapping CallFunc_GetMKBAxisPairsByName_OutNegativePrimary, FInputAxisKeyMapping CallFunc_GetMKBAxisPairsByName_OutNegativeAlternative, bool CallFunc_GetMKBAxisPairsByName_ReturnValue, bool CallFunc_SetMKBAxis_ReturnValue, bool Temp_bool_Variable, UInputSettings* CallFunc_GetInputSettings_ReturnValue, TArray<FInputActionKeyMapping>& CallFunc_GetAxisMappingCollisions_OutCollidingActionMappings, TArray<FInputAxisKeyMapping>& CallFunc_GetAxisMappingCollisions_OutCollidingAxisMappings, TArray<FInputAxisKeyMapping>& CallFunc_TransposeAxisFromQWERTY_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, TArray<FInputActionKeyMapping>& CallFunc_TransposeActionFromQWERTY_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_SaveInputConfig_ReturnValue, bool Temp_bool_Variable_1, FInputAxisKeyMapping K2Node_Select_Default, bool Temp_bool_Variable_2, FInputAxisKeyMapping K2Node_Select_Default_1, FInputAxisKeyMapping K2Node_Select_Default_2, FString CallFunc_KeyToString_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_UnbindMKBAxis_ReturnValue);
    void UpdateActionMapping(FInputActionKeyMapping NewAction, bool& Success, TArray<FInputActionKeyMapping>& ConflictingActions, TArray<FInputAxisKeyMapping>& ConflictingAxes, FInputActionKeyMapping PreviousAlternative, FInputActionKeyMapping PreviousPrimary, FString CallFunc_KeyToString_ReturnValue, FInputActionKeyMapping CallFunc_GetMKBActionPairByName_OutPrimary, FInputActionKeyMapping CallFunc_GetMKBActionPairByName_OutAlternative, bool CallFunc_GetMKBActionPairByName_ReturnValue, TArray<FInputActionKeyMapping>& K2Node_MakeArray_Array, TArray<FInputActionKeyMapping>& CallFunc_TransposeActionToQWERTY_ReturnValue, bool CallFunc_SetMKBAction_ReturnValue, UInputSettings* CallFunc_GetInputSettings_ReturnValue, bool CallFunc_SaveInputConfig_ReturnValue, TArray<FInputActionKeyMapping>& CallFunc_GetActionMappingCollisions_OutCollidingActionMappings, TArray<FInputAxisKeyMapping>& CallFunc_GetActionMappingCollisions_OutCollidingAxisMappings, TArray<FInputAxisKeyMapping>& CallFunc_TransposeAxisFromQWERTY_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, TArray<FInputActionKeyMapping>& CallFunc_TransposeActionFromQWERTY_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, FInputActionKeyMapping K2Node_Select_Default, bool CallFunc_UnbindMKBAction_ReturnValue, FString CallFunc_KeyToString_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue);
    void ValidateInput(FKey InputKey, bool& IsValid, FString CallFunc_KeyToString_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
    FEventReply OnMouseWheel(FGeometry MyGeometry, FPointerEvent& MouseEvent, bool Temp_bool_Variable, float CallFunc_PointerEvent_GetWheelDelta_ReturnValue, FKey Temp_struct_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, FKey Temp_struct_Variable_1, FKey K2Node_Select_Default, FEventReply CallFunc_Handled_ReturnValue);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, FPointerEvent& MouseEvent, UUIManager* CallFunc_GetUIManagerPure_ReturnValue, FKey CallFunc_PointerEvent_GetEffectingButton_ReturnValue, EInputDeviceUsed CallFunc_GetLastUsedInputDevice_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FEventReply CallFunc_Handled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent, bool CancelButtonPressed, FKey CallFunc_GetKey_ReturnValue, bool CallFunc_Is_Key_for_Action_RetVal, bool CallFunc_Is_Key_for_Action_RetVal_1, bool CallFunc_Is_Key_for_Action_RetVal_2, bool CallFunc_Is_Key_for_Action_RetVal_3, bool CallFunc_BooleanOR_ReturnValue, int32_t CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, FEventReply CallFunc_Handled_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_UI_BP_MKBInput(int32_t EntryPoint);
}; // Size: 0x4b8
#pragma pack(pop)
