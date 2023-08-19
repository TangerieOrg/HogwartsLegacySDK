#include "FPointerToUberGraphFrame.hpp"
#include "FSeedInfo.hpp"
#include "FTimespan.hpp"
#include "UFunction.hpp"
#include "UHerbPlotManager.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UUI_BP_HerbologySeedTooltip_C.hpp"
#include "UUserWidget.hpp"
#include "UVerticalBox.hpp"
void UUI_BP_HerbologySeedTooltip_C::PreConstruct0(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedTooltip.UI_BP_HerbologySeedTooltip_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_HerbologySeedTooltip_C::Init(FSeedInfo Seed_Info, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue, UHerbPlotManager* CallFunc_BP_Get_ReturnValue, float CallFunc_GetGrowthTimeMultiplier_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32_t CallFunc_FTrunc_ReturnValue, FTimespan CallFunc_MakeTimespan_ReturnValue) {}
UUI_BP_HerbologySeedTooltip_C* UUI_BP_HerbologySeedTooltip_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedTooltip.UI_BP_HerbologySeedTooltip_C");
    return (UUI_BP_HerbologySeedTooltip_C*)res;
}
void UUI_BP_HerbologySeedTooltip_C::ExecuteUbergraph_UI_BP_HerbologySeedTooltip(int32_t EntryPoint, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Herbology/UI_BP_HerbologySeedTooltip.UI_BP_HerbologySeedTooltip_C.ExecuteUbergraph_UI_BP_HerbologySeedTooltip"));
    struct Params_ExecuteUbergraph_UI_BP_HerbologySeedTooltip {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_UI_BP_HerbologySeedTooltip params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
