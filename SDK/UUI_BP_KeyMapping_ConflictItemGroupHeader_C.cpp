#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UUI_BP_KeyMapping_ConflictItemGroupHeader_C.hpp"
UUI_BP_KeyMapping_ConflictItemGroupHeader_C* UUI_BP_KeyMapping_ConflictItemGroupHeader_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/OptionsMenu/UI_BP_KeyMapping_ConflictItemGroupHeader.UI_BP_KeyMapping_ConflictItemGroupHeader_C");
    return (UUI_BP_KeyMapping_ConflictItemGroupHeader_C*)res;
}
TArray<FString> UUI_BP_KeyMapping_ConflictItemGroupHeader_C::GatherMenuReaderStrings0(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
void UUI_BP_KeyMapping_ConflictItemGroupHeader_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping_ConflictItemGroupHeader.UI_BP_KeyMapping_ConflictItemGroupHeader_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_ConflictItemGroupHeader_C::PreConstruct(bool IsDesignTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping_ConflictItemGroupHeader.UI_BP_KeyMapping_ConflictItemGroupHeader_C.PreConstruct"));
    struct Params_PreConstruct {
        bool IsDesignTime; // 0x0
    }; // Size: 0x1
    Params_PreConstruct params{};
    params.IsDesignTime = (bool)IsDesignTime;
    ProcessEvent(func, &params);
}
void UUI_BP_KeyMapping_ConflictItemGroupHeader_C::ExecuteUbergraph_UI_BP_KeyMapping_ConflictItemGroupHeader(int32_t EntryPoint, bool K2Node_Event_IsDesignTime, FString CallFunc_Conv_NameToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/OptionsMenu/UI_BP_KeyMapping_ConflictItemGroupHeader.UI_BP_KeyMapping_ConflictItemGroupHeader_C.ExecuteUbergraph_UI_BP_KeyMapping_ConflictItemGroupHeader"));
    struct Params_ExecuteUbergraph_UI_BP_KeyMapping_ConflictItemGroupHeader {
        int32_t EntryPoint; // 0x0
        bool K2Node_Event_IsDesignTime; // 0x4
        char pad_5[0x3];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x8
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x18
    }; // Size: 0x28
    Params_ExecuteUbergraph_UI_BP_KeyMapping_ConflictItemGroupHeader params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_IsDesignTime = (bool)K2Node_Event_IsDesignTime;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ProcessEvent(func, &params);
}
