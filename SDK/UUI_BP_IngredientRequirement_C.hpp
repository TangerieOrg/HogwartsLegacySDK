#pragma once
#include <cstdint>
#include "FDataTableRowHandle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRecipeIngredient.hpp"
#include "UPhoenixUserWidget.hpp"
class UPhoenixTextBlock;
class UImage;
#pragma pack(push, 1)
class UUI_BP_IngredientRequirement_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UPhoenixTextBlock* CurrentCount; // 0x330
    UImage* ingredientIcon; // 0x338
    UPhoenixTextBlock* ItemName; // 0x340
    UPhoenixTextBlock* MaxCount; // 0x348
    UImage* Outline; // 0x350
    UPhoenixTextBlock* Slash; // 0x358
    FRecipeIngredient PreviewIngredients; // 0x360
    static UUI_BP_IngredientRequirement_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings);
    void SetInventoryCount(int32_t Count, int32_t& NewCount, bool CallFunc_Less_IntInt_ReturnValue);
    void SetRecipeIngredient(FRecipeIngredient Ingredient, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, int32_t CallFunc_SetInventoryCount_NewCount);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_BP_IngredientRequirement(int32_t EntryPoint, bool K2Node_Event_IsDesignTime);
}; // Size: 0x370
#pragma pack(pop)
