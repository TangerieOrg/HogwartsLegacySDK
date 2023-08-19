#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UMapHogwarts.hpp"
#include "UUI_BP_HogwartsMapClass_C.hpp"
UUI_BP_HogwartsMapClass_C* UUI_BP_HogwartsMapClass_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Map/UI_BP_HogwartsMapClass.UI_BP_HogwartsMapClass_C");
    return (UUI_BP_HogwartsMapClass_C*)res;
}
void UUI_BP_HogwartsMapClass_C::ShowFastTavelMap() {}
void UUI_BP_HogwartsMapClass_C::MapItemSelected__DelegateSignature(FString Item_String, int32_t Item_Index, bool Was_Cancelled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapClass.UI_BP_HogwartsMapClass_C.MapItemSelected__DelegateSignature"));
    struct Params_MapItemSelected__DelegateSignature {
        FString Item_String; // 0x0
        int32_t Item_Index; // 0x10
        bool Was_Cancelled; // 0x14
    }; // Size: 0x15
    Params_MapItemSelected__DelegateSignature params{};
    params.Item_String = (FString)Item_String;
    params.Item_Index = (int32_t)Item_Index;
    params.Was_Cancelled = (bool)Was_Cancelled;
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapClass_C::TestEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapClass.UI_BP_HogwartsMapClass_C.TestEvent"));
    struct Params_TestEvent {
    }; // Size: 0x0
    Params_TestEvent params{};
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapClass_C::OnMapItemSelected_Event(FString ItemString, int32_t ItemIndex, bool WasCanceled) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Map/UI_BP_HogwartsMapClass.UI_BP_HogwartsMapClass_C.OnMapItemSelected_Event"));
    struct Params_OnMapItemSelected_Event {
        FString ItemString; // 0x0
        int32_t ItemIndex; // 0x10
        bool WasCanceled; // 0x14
    }; // Size: 0x15
    Params_OnMapItemSelected_Event params{};
    params.ItemString = (FString)ItemString;
    params.ItemIndex = (int32_t)ItemIndex;
    params.WasCanceled = (bool)WasCanceled;
    ProcessEvent(func, &params);
}
void UUI_BP_HogwartsMapClass_C::ExecuteUbergraph_UI_BP_HogwartsMapClass(int32_t EntryPoint, FString K2Node_Event_ItemString, int32_t K2Node_Event_ItemIndex, bool K2Node_Event_WasCanceled) {}
