#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FDataTableRowHandle.hpp"
#include "FInputActionKeyMapping.hpp"
#include "FKey.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixTextBlock;
class UUI_BP_InputAction_C;
class UPhoenixImage;
#pragma pack(push, 1)
class UUI_BP_InputActionAlt_Row_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnInputActionSelected; // 0x330
    UWidgetAnimation* OnInputActionHovered; // 0x338
    UPhoenixTextBlock* ActionNameBox; // 0x340
    UUI_BP_InputAction_C* AlternativeInput; // 0x348
    UPhoenixImage* NoBindingIcon; // 0x350
    UUI_BP_InputAction_C* PrimaryInput; // 0x358
    FName GroupName; // 0x360
    FName ActionName; // 0x368
    FInputActionKeyMapping Primary; // 0x370
    FInputActionKeyMapping Alternative; // 0x3a8
    char pad_3e0[0x10];
    TArray<FKey> ForbiddenKeys; // 0x3f0
    FSlateColor DefaultTitleColor; // 0x400
    FSlateColor NoBindingTitleColor; // 0x428
    char pad_450[0x20];
    UUI_BP_InputAction_C* LastHoveredInputAction; // 0x470
    static UUI_BP_InputActionAlt_Row_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2);
    void UpdateConflictState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_Key_IsValid_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, ESlateVisibility K2Node_Select_Default, FDataTableRowHandle K2Node_Select_Default_1);
    void UpdateTelemetry(bool IsPrimary, FString CallFunc_KeyToString_ReturnValue, FString CallFunc_KeyToString_ReturnValue_1, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1);
    void HandleUnhovered(bool IsPrimary, UUI_BP_InputAction_C* InputAction);
    void HandleHovered(bool IsPrimary, UUI_BP_InputAction_C* InputAction);
    void HandleClicked(bool IsPrimary, UUI_BP_InputAction_C* InputAction);
    void SetActionNameDefault(FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle);
    void SetActionNameHighlight(FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle);
    void SetRebindingFlair(bool IsRebinding, FLinearColor HighlightColor, FLinearColor DefaultColor, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void Construct();
    void ExecuteUbergraph_UI_BP_InputActionAlt_Row(int32_t EntryPoint, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue);
    void InputUnhovered__DelegateSignature(UUI_BP_InputActionAlt_Row_C* Row, bool IsPrimary);
    void InputHovered__DelegateSignature(UUI_BP_InputActionAlt_Row_C* Row, bool IsPrimary);
    void InputClicked__DelegateSignature(UUI_BP_InputActionAlt_Row_C* Row, bool IsPrimary);
}; // Size: 0x478
#pragma pack(pop)
