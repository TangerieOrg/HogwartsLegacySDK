#include "UButton.hpp"
#include "UCreatureDefinition.hpp"
#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UUI_BP_CreatureByproduct_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_CreatureByproduct_C* UUI_BP_CreatureByproduct_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Creatures/UI_BP_CreatureByproduct.UI_BP_CreatureByproduct_C");
    return (UUI_BP_CreatureByproduct_C*)res;
}
void UUI_BP_CreatureByproduct_C::Setup(UCreatureState* InCreatureState, UCreatureDefinition* CallFunc_GetDefinition_ReturnValue, FName CallFunc_GetByproductID_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureByproduct.UI_BP_CreatureByproduct_C.Setup"));
    struct Params_Setup {
        UCreatureState* InCreatureState; // 0x0
        UCreatureDefinition* CallFunc_GetDefinition_ReturnValue; // 0x8
        FName CallFunc_GetByproductID_ReturnValue; // 0x10
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x18
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x28
    }; // Size: 0x29
    Params_Setup params{};
    params.InCreatureState = (UCreatureState*)InCreatureState;
    params.CallFunc_GetDefinition_ReturnValue = (UCreatureDefinition*)CallFunc_GetDefinition_ReturnValue;
    params.CallFunc_GetByproductID_ReturnValue = (FName)CallFunc_GetByproductID_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    ProcessEvent(func, &params);
}
