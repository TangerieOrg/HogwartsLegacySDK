#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FDataTableRowHandle.hpp"
#include "FInputAxisKeyMapping.hpp"
#include "FKey.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSlateColor.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UUMGSequencePlayer;
class UPhoenixTextBlock;
class UUI_BP_InputAxis_C;
class UPhoenixImage;
#pragma pack(push, 1)
class UUI_BP_InputAxisAlt_Row_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* OnInputAxisSelected; // 0x330
    UWidgetAnimation* OnInputAxisHovered; // 0x338
    UPhoenixTextBlock* ActionNameBox; // 0x340
    UUI_BP_InputAxis_C* AlternativeInput; // 0x348
    UPhoenixImage* NoBindingIcon; // 0x350
    UUI_BP_InputAxis_C* PrimaryInput; // 0x358
    FInputAxisKeyMapping Primary; // 0x360
    FInputAxisKeyMapping FakeLockedPrimary; // 0x398
    FInputAxisKeyMapping Alternative; // 0x3d0
    FName AxisName; // 0x408
    bool IsBiDirectionalAxis; // 0x410
    bool IsPositiveAxis; // 0x411
    char pad_412[0x16];
    FName GroupName; // 0x428
    TArray<FKey> ForbiddenKeys; // 0x430
    FString TitleTextKey; // 0x440
    FSlateColor DefaultTitleColor; // 0x450
    FSlateColor NoBindingTitleColor; // 0x478
    char pad_4a0[0x20];
    static UUI_BP_InputAxisAlt_Row_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_2);
    void UpdateConflictState(bool Temp_bool_Variable, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_Key_IsValid_ReturnValue, bool CallFunc_Key_IsValid_ReturnValue_1, bool CallFunc_Key_IsValid_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, ESlateVisibility K2Node_Select_Default, FDataTableRowHandle K2Node_Select_Default_1);
    void Rebuild_Row();
    void UpdateTelemetry(bool IsPrimary, FString CallFunc_KeyToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_KeyToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_Concat_StrStr_ReturnValue_3);
    void HandleUnhovered(bool IsPrimary, UUI_BP_InputAxis_C* InputAxis);
    void HandleHovered(bool IsPrimary, UUI_BP_InputAxis_C* InputAxis);
    void HandleClicked(bool IsPrimary, UUI_BP_InputAxis_C* InputAxis);
    void SetRebindingFlair(bool IsRebinding, FLinearColor HighlightColor, FLinearColor DefaultColor, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
    void Construct();
    void ExecuteUbergraph_UI_BP_InputAxisAlt_Row(int32_t EntryPoint);
    void InputUnhovered__DelegateSignature(UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary);
    void InputHovered__DelegateSignature(UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary);
    void InputClicked__DelegateSignature(UUI_BP_InputAxisAlt_Row_C* Row, bool IsPrimary);
}; // Size: 0x4c0
#pragma pack(pop)
