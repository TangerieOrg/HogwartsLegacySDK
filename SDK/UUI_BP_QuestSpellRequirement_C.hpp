#pragma once
#include <cstdint>
#include "FDataTableRowHandle.hpp"
#include "UPhoenixUserWidget.hpp"
class UImage;
class UPhoenixTextBlock;
class UTexture2D;
class UObject;
#pragma pack(push, 1)
class UUI_BP_QuestSpellRequirement_C : public UPhoenixUserWidget {
public:
    UImage* SpellIcon; // 0x328
    UPhoenixTextBlock* SpellName; // 0x330
    static UUI_BP_QuestSpellRequirement_C* StaticClass();
    TArray<FString> GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    void SpellTypeLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam);
    void SetSpellData(FString Spell, FString TempTypeImage, bool Temp_bool_Variable, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, FDataTableRowHandle K2Node_Select_Default);
}; // Size: 0x338
#pragma pack(pop)
