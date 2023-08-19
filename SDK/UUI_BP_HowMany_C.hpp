#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UScreen.hpp"
class UPhoenixTextBlock;
class UUserWidget;
class UUI_BP_LegendBox_C;
#pragma pack(push, 1)
class UUI_BP_HowMany_C : public UScreen {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x370
    UPhoenixTextBlock* Action; // 0x378
    UPhoenixTextBlock* CurrentAmount; // 0x380
    UUI_BP_LegendBox_C* LegendBox; // 0x388
    UPhoenixTextBlock* MaximumAmount; // 0x390
    UPhoenixTextBlock* MinimumAmount; // 0x398
    UUserWidget* Parent; // 0x3a0
    int32_t CurrentIntAmount; // 0x3a8
    int32_t MaxAmount; // 0x3ac
    bool SendEvent; // 0x3b0
    char pad_3b1[0x7];
    TArray<FString> Legend; // 0x3b8
    static UUI_BP_HowMany_C* StaticClass();
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_Less_IntInt_ReturnValue, int32_t K2Node_MathExpression_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32_t K2Node_MathExpression_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, int32_t CallFunc_PostEventAtLocation_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9);
    void SetColors(FLinearColor Color);
    void SetCurrentAmount(int32_t CurrentIntAmount);
    void SetName(FName ItemName, bool Transfer_Drop);
    void InitAmounts(int32_t Min, int32_t Max);
    void Destruct();
    void Construct();
    void ExecuteUbergraph_UI_BP_HowMany(int32_t EntryPoint);
}; // Size: 0x3c8
#pragma pack(pop)
