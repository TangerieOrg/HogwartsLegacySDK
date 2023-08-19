#include "FDataTableRowHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRecipeIngredient.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_IngredientRequirement_C.hpp"
UUI_BP_IngredientRequirement_C* UUI_BP_IngredientRequirement_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/UI_BP_IngredientRequirement.UI_BP_IngredientRequirement_C");
    return (UUI_BP_IngredientRequirement_C*)res;
}
void UUI_BP_IngredientRequirement_C::SetRecipeIngredient(FRecipeIngredient Ingredient, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, int32_t CallFunc_SetInventoryCount_NewCount) {}
TArray<FString> UUI_BP_IngredientRequirement_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings) {}
void UUI_BP_IngredientRequirement_C::SetInventoryCount(int32_t Count, int32_t& NewCount, bool CallFunc_Less_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/UI_BP_IngredientRequirement.UI_BP_IngredientRequirement_C.SetInventoryCount"));
    struct Params_SetInventoryCount {
        int32_t Count; // 0x0
        int32_t NewCount; // 0x4
        bool CallFunc_Less_IntInt_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_SetInventoryCount params{};
    params.Count = (int32_t)Count;
    params.NewCount = (int32_t)NewCount;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    NewCount = params.NewCount;
}
void UUI_BP_IngredientRequirement_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/UI_BP_IngredientRequirement.UI_BP_IngredientRequirement_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_IngredientRequirement_C::ExecuteUbergraph_UI_BP_IngredientRequirement(int32_t EntryPoint, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/UI_BP_IngredientRequirement.UI_BP_IngredientRequirement_C.ExecuteUbergraph_UI_BP_IngredientRequirement"));
    struct Params_ExecuteUbergraph_UI_BP_IngredientRequirement {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_UI_BP_IngredientRequirement params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
