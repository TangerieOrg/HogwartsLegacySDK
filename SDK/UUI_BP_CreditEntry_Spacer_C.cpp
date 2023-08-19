#include "FCreditEntry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UPhoenixCreditEntryWidget.hpp"
#include "UUI_BP_CreditEntry_Spacer_C.hpp"
UUI_BP_CreditEntry_Spacer_C* UUI_BP_CreditEntry_Spacer_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Credits/UI_BP_CreditEntry_Spacer.UI_BP_CreditEntry_Spacer_C");
    return (UUI_BP_CreditEntry_Spacer_C*)res;
}
void UUI_BP_CreditEntry_Spacer_C::SetCreditEntryInfo(FCreditEntry CreditEntry) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_CreditEntry_Spacer.UI_BP_CreditEntry_Spacer_C.SetCreditEntryInfo"));
    struct Params_SetCreditEntryInfo {
        FCreditEntry CreditEntry; // 0x0
    }; // Size: 0x28
    Params_SetCreditEntryInfo params{};
    params.CreditEntry = (FCreditEntry)CreditEntry;
    ProcessEvent(func, &params);
}
void UUI_BP_CreditEntry_Spacer_C::SetCreditEntryAnimProgress(float Progress) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_CreditEntry_Spacer.UI_BP_CreditEntry_Spacer_C.SetCreditEntryAnimProgress"));
    struct Params_SetCreditEntryAnimProgress {
        float Progress; // 0x0
    }; // Size: 0x4
    Params_SetCreditEntryAnimProgress params{};
    params.Progress = (float)Progress;
    ProcessEvent(func, &params);
}
void UUI_BP_CreditEntry_Spacer_C::ExecuteUbergraph_UI_BP_CreditEntry_Spacer(int32_t EntryPoint, float K2Node_Event_Progress, FCreditEntry K2Node_Event_CreditEntry) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Credits/UI_BP_CreditEntry_Spacer.UI_BP_CreditEntry_Spacer_C.ExecuteUbergraph_UI_BP_CreditEntry_Spacer"));
    struct Params_ExecuteUbergraph_UI_BP_CreditEntry_Spacer {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_Progress; // 0x4
        FCreditEntry K2Node_Event_CreditEntry; // 0x8
    }; // Size: 0x30
    Params_ExecuteUbergraph_UI_BP_CreditEntry_Spacer params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Progress = (float)K2Node_Event_Progress;
    params.K2Node_Event_CreditEntry = (FCreditEntry)K2Node_Event_CreditEntry;
    ProcessEvent(func, &params);
}
