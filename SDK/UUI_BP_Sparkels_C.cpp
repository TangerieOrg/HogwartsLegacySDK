#include "EUMGSequencePlayMode\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UFunction.hpp"
#include "UUI_BP_Sparkels_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_Sparkels_C::SparkelAnimEvent(EUMGSequencePlayMode::Type PlayMode) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_Sparkels.UI_BP_Sparkels_C.SparkelAnimEvent"));
    struct Params_SparkelAnimEvent {
        EUMGSequencePlayMode::Type PlayMode; // 0x0
    }; // Size: 0x1
    Params_SparkelAnimEvent params{};
    params.PlayMode = (EUMGSequencePlayMode::Type)PlayMode;
    ProcessEvent(func, &params);
}
UUI_BP_Sparkels_C* UUI_BP_Sparkels_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Common/UI_BP_Sparkels.UI_BP_Sparkels_C");
    return (UUI_BP_Sparkels_C*)res;
}
void UUI_BP_Sparkels_C::ExecuteUbergraph_UI_BP_Sparkels(int32_t EntryPoint, EUMGSequencePlayMode::Type K2Node_CustomEvent_PlayMode, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Common/UI_BP_Sparkels.UI_BP_Sparkels_C.ExecuteUbergraph_UI_BP_Sparkels"));
    struct Params_ExecuteUbergraph_UI_BP_Sparkels {
        int32_t EntryPoint; // 0x0
        EUMGSequencePlayMode::Type K2Node_CustomEvent_PlayMode; // 0x4
        char pad_5[0x3];
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ExecuteUbergraph_UI_BP_Sparkels params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_CustomEvent_PlayMode = (EUMGSequencePlayMode::Type)K2Node_CustomEvent_PlayMode;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
