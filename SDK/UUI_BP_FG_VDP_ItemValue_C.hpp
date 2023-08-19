#pragma once
#include <cstdint>
#include "UPhoenixUserWidget.hpp"
class UHorizontalBox;
class UVerticalBox;
class UUI_BP_MoneyBar_C;
class UTextBlock;
#pragma pack(push, 1)
class UUI_BP_FG_VDP_ItemValue_C : public UPhoenixUserWidget {
public:
    UHorizontalBox* countBox; // 0x328
    UVerticalBox* gearHeader; // 0x330
    UUI_BP_MoneyBar_C* moneyBar; // 0x338
    UTextBlock* Quantity; // 0x340
    static UUI_BP_FG_VDP_ItemValue_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1);
    void UpdateCost(int32_t PlayerMoney, int32_t Cost, int32_t SellBuyQuantity, bool IsBuying, bool CallFunc_Not_PreBool_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
}; // Size: 0x348
#pragma pack(pop)
