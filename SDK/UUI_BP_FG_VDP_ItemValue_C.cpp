#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTextBlock.hpp"
#include "UUI_BP_FG_VDP_ItemValue_C.hpp"
#include "UUI_BP_MoneyBar_C.hpp"
#include "UVerticalBox.hpp"
UUI_BP_FG_VDP_ItemValue_C* UUI_BP_FG_VDP_ItemValue_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Vendor/UI_BP_FG_VDP_ItemValue.UI_BP_FG_VDP_ItemValue_C");
    return (UUI_BP_FG_VDP_ItemValue_C*)res;
}
TArray<FString> UUI_BP_FG_VDP_ItemValue_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Vendor/UI_BP_FG_VDP_ItemValue.UI_BP_FG_VDP_ItemValue_C.GatherMenuReaderStrings"));
    struct Params_GatherMenuReaderStrings {
        int32_t DepthLevel; // 0x0
        char pad_4[0x4];
        TArray<FString> ReturnValue; // 0x8
        TArray<FString> TempGatheredStrings; // 0x18
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue; // 0x28
        TArray<FString> CallFunc_GatherMenuReaderStrings_ReturnValue_1; // 0x38
    }; // Size: 0x48
    Params_GatherMenuReaderStrings params{};
    params.DepthLevel = (int32_t)DepthLevel;
    params.TempGatheredStrings = (TArray<FString>)TempGatheredStrings;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue;
    params.CallFunc_GatherMenuReaderStrings_ReturnValue_1 = (TArray<FString>)CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_GatherMenuReaderStrings_ReturnValue = params.CallFunc_GatherMenuReaderStrings_ReturnValue;
    CallFunc_GatherMenuReaderStrings_ReturnValue_1 = params.CallFunc_GatherMenuReaderStrings_ReturnValue_1;
    return (TArray<FString>)params.ReturnValue;
}
void UUI_BP_FG_VDP_ItemValue_C::UpdateCost(int32_t PlayerMoney, int32_t Cost, int32_t SellBuyQuantity, bool IsBuying, bool CallFunc_Not_PreBool_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue) {}
