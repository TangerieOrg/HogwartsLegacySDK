#include "FDataTableRowHandle.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UObject.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_QuestSpellRequirement_C.hpp"
UUI_BP_QuestSpellRequirement_C* UUI_BP_QuestSpellRequirement_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Quests/UI_BP_QuestSpellRequirement.UI_BP_QuestSpellRequirement_C");
    return (UUI_BP_QuestSpellRequirement_C*)res;
}
TArray<FString> UUI_BP_QuestSpellRequirement_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_QuestSpellRequirement_C::SpellTypeLoaded(UTexture2D* LoadedTexture, UObject* CallbackParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Quests/UI_BP_QuestSpellRequirement.UI_BP_QuestSpellRequirement_C.SpellTypeLoaded"));
    struct Params_SpellTypeLoaded {
        UTexture2D* LoadedTexture; // 0x0
        UObject* CallbackParam; // 0x8
    }; // Size: 0x10
    Params_SpellTypeLoaded params{};
    params.LoadedTexture = (UTexture2D*)LoadedTexture;
    params.CallbackParam = (UObject*)CallbackParam;
    ProcessEvent(func, &params);
}
void UUI_BP_QuestSpellRequirement_C::SetSpellData(FString Spell, FString TempTypeImage, bool Temp_bool_Variable, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle, FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1, FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_AsyncFindIconTexture2D_ReturnValue, FDataTableRowHandle K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Quests/UI_BP_QuestSpellRequirement.UI_BP_QuestSpellRequirement_C.SetSpellData"));
    struct Params_SetSpellData {
        FString Spell; // 0x0
        FString TempTypeImage; // 0x10
        bool Temp_bool_Variable; // 0x20
        char pad_21[0x7];
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle; // 0x28
        FDataTableRowHandle K2Node_MakeStruct_DataTableRowHandle_1; // 0x38
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x48
        bool CallFunc_IsUnlocked_ReturnValue; // 0x50
        bool CallFunc_AsyncFindIconTexture2D_ReturnValue; // 0x51
        char pad_52[0x6];
        FDataTableRowHandle K2Node_Select_Default; // 0x58
    }; // Size: 0x68
    Params_SetSpellData params{};
    params.Spell = (FString)Spell;
    params.TempTypeImage = (FString)TempTypeImage;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.K2Node_MakeStruct_DataTableRowHandle = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle;
    params.K2Node_MakeStruct_DataTableRowHandle_1 = (FDataTableRowHandle)K2Node_MakeStruct_DataTableRowHandle_1;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    params.CallFunc_IsUnlocked_ReturnValue = (bool)CallFunc_IsUnlocked_ReturnValue;
    params.CallFunc_AsyncFindIconTexture2D_ReturnValue = (bool)CallFunc_AsyncFindIconTexture2D_ReturnValue;
    params.K2Node_Select_Default = (FDataTableRowHandle)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
