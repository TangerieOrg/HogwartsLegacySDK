#include "FFormatArgumentData.hpp"
#include "FLinearColor.hpp"
#include "FSlateBrush.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "UOverlay.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTexture2D.hpp"
#include "UUI_BP_QuestObjective_C.hpp"
UUI_BP_QuestObjective_C* UUI_BP_QuestObjective_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Menus/FieldGuide/Quests/UI_BP_QuestObjective.UI_BP_QuestObjective_C");
    return (UUI_BP_QuestObjective_C*)res;
}
TArray<FString> UUI_BP_QuestObjective_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue) {}
void UUI_BP_QuestObjective_C::GlintTextureLoaded(UTexture2D* GlintTexture, UObject* ObjectParam, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Menus/FieldGuide/Quests/UI_BP_QuestObjective.UI_BP_QuestObjective_C.GlintTextureLoaded"));
    struct Params_GlintTextureLoaded {
        UTexture2D* GlintTexture; // 0x0
        UObject* ObjectParam; // 0x8
        UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GlintTextureLoaded params{};
    params.GlintTexture = (UTexture2D*)GlintTexture;
    params.ObjectParam = (UObject*)ObjectParam;
    params.CallFunc_GetDynamicMaterial_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_GetDynamicMaterial_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_QuestObjective_C::InitObjectiveData(FString objectiveText, int32_t RuntimeParam1, int32_t RuntimeParam2, bool IsComplete, bool IsTracked, FString Icon, FString Glint, FLinearColor IconColor, bool Temp_bool_Variable, int32_t CallFunc_SelectInt_ReturnValue, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData, FFormatArgumentData K2Node_MakeStruct_FormatArgumentData_1) {}
