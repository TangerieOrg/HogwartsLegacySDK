#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UImage.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UUI_BP_LookAtWidget_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_LookAtWidget_C::ExecuteUbergraph_UI_BP_LookAtWidget(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_LookAtWidget.UI_BP_LookAtWidget_C.ExecuteUbergraph_UI_BP_LookAtWidget"));
    struct Params_ExecuteUbergraph_UI_BP_LookAtWidget {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph_UI_BP_LookAtWidget params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
UUI_BP_LookAtWidget_C* UUI_BP_LookAtWidget_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Interact/UI_BP_LookAtWidget.UI_BP_LookAtWidget_C");
    return (UUI_BP_LookAtWidget_C*)res;
}
void UUI_BP_LookAtWidget_C::HideCallout() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_LookAtWidget.UI_BP_LookAtWidget_C.HideCallout"));
    struct Params_HideCallout {
    }; // Size: 0x0
    Params_HideCallout params{};
    ProcessEvent(func, &params);
}
void UUI_BP_LookAtWidget_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_LookAtWidget.UI_BP_LookAtWidget_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_LookAtWidget_C::ShowCallout(UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interact/UI_BP_LookAtWidget.UI_BP_LookAtWidget_C.ShowCallout"));
    struct Params_ShowCallout {
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ShowCallout params{};
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
