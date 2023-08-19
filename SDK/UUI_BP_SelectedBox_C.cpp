#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UUI_BP_SelectedBox_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
UUI_BP_SelectedBox_C* UUI_BP_SelectedBox_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/UI_BP_SelectedBox.UI_BP_SelectedBox_C");
    return (UUI_BP_SelectedBox_C*)res;
}
void UUI_BP_SelectedBox_C::DesolveSelect() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_SelectedBox.UI_BP_SelectedBox_C.DesolveSelect"));
    struct Params_DesolveSelect {
    }; // Size: 0x0
    Params_DesolveSelect params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SelectedBox_C::AppearSelect() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_SelectedBox.UI_BP_SelectedBox_C.AppearSelect"));
    struct Params_AppearSelect {
    }; // Size: 0x0
    Params_AppearSelect params{};
    ProcessEvent(func, &params);
}
void UUI_BP_SelectedBox_C::ExecuteUbergraph_UI_BP_SelectedBox(int32_t EntryPoint, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_SelectedBox.UI_BP_SelectedBox_C.ExecuteUbergraph_UI_BP_SelectedBox"));
    struct Params_ExecuteUbergraph_UI_BP_SelectedBox {
        int32_t EntryPoint; // 0x0
        char pad_4[0x4];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1; // 0x10
    }; // Size: 0x18
    Params_ExecuteUbergraph_UI_BP_SelectedBox params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    params.CallFunc_PlayAnimation_ReturnValue_1 = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue_1;
    ProcessEvent(func, &params);
}
