#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_KeyMapping_ConflictItem_C.hpp"
TArray<FString> UUI_BP_KeyMapping_ConflictItem_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
UUI_BP_KeyMapping_ConflictItem_C* UUI_BP_KeyMapping_ConflictItem_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/OptionsMenu/UI_BP_KeyMapping_ConflictItem.UI_BP_KeyMapping_ConflictItem_C");
    return (UUI_BP_KeyMapping_ConflictItem_C*)res;
}
void UUI_BP_KeyMapping_ConflictItem_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping_ConflictItem.UI_BP_KeyMapping_ConflictItem_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_ConflictItem_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping_ConflictItem.UI_BP_KeyMapping_ConflictItem_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_ConflictItem_C::ExecuteUbergraph_UI_BP_KeyMapping_ConflictItem(int32_t EntryPoint, bool K2Node_Event_IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping_ConflictItem.UI_BP_KeyMapping_ConflictItem_C.ExecuteUbergraph_UI_BP_KeyMapping_ConflictItem"));
    struct Params_ExecuteUbergraph_UI_BP_KeyMapping_ConflictItem {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
    }; // Size: 0x5
    Params_ExecuteUbergraph_UI_BP_KeyMapping_ConflictItem params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    ProcessEvent(func, &params);
}
