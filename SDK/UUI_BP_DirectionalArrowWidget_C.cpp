#include "EAudioVisualizerType.hpp"
#include "FLinearColor.hpp"
#include "FSlateColor.hpp"
#include "UCanvasPanel.hpp"
#include "UFunction.hpp"
#include "UUI_BP_ArrowWidget_C.hpp"
#include "UUI_BP_DirectionalArrowWidget_C.hpp"
#include "UUserWidget.hpp"
UUI_BP_DirectionalArrowWidget_C* UUI_BP_DirectionalArrowWidget_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/HUD/AudioVisualizer/UI_BP_DirectionalArrowWidget.UI_BP_DirectionalArrowWidget_C");
    return (UUI_BP_DirectionalArrowWidget_C*)res;
}
void UUI_BP_DirectionalArrowWidget_C::SetRotation(float Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/AudioVisualizer/UI_BP_DirectionalArrowWidget.UI_BP_DirectionalArrowWidget_C.SetRotation"));
    struct Params_SetRotation {
        float Rotation; // 0x0
    }; // Size: 0x4
    Params_SetRotation params{};
    params.Rotation = (float)Rotation;
    ProcessEvent(func, &params);
}
void UUI_BP_DirectionalArrowWidget_C::Remove() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/AudioVisualizer/UI_BP_DirectionalArrowWidget.UI_BP_DirectionalArrowWidget_C.Remove"));
    struct Params_Remove {
    }; // Size: 0x0
    Params_Remove params{};
    ProcessEvent(func, &params);
}
void UUI_BP_DirectionalArrowWidget_C::SetType(EAudioVisualizerType InType, bool K2Node_SwitchEnum_CmpSuccess, FLinearColor K2Node_MakeStruct_LinearColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor K2Node_MakeStruct_LinearColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/HUD/AudioVisualizer/UI_BP_DirectionalArrowWidget.UI_BP_DirectionalArrowWidget_C.SetType"));
    struct Params_SetType {
        EAudioVisualizerType InType; // 0x0
        bool K2Node_SwitchEnum_CmpSuccess; // 0x1
        char pad_2[0x2];
        FLinearColor K2Node_MakeStruct_LinearColor; // 0x4
        char pad_14[0x4];
        FSlateColor K2Node_MakeStruct_SlateColor; // 0x18
        FLinearColor K2Node_MakeStruct_LinearColor_1; // 0x40
        FSlateColor K2Node_MakeStruct_SlateColor_1; // 0x50
    }; // Size: 0x78
    Params_SetType params{};
    params.InType = (EAudioVisualizerType)InType;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    params.K2Node_MakeStruct_LinearColor = (FLinearColor)K2Node_MakeStruct_LinearColor;
    params.K2Node_MakeStruct_SlateColor = (FSlateColor)K2Node_MakeStruct_SlateColor;
    params.K2Node_MakeStruct_LinearColor_1 = (FLinearColor)K2Node_MakeStruct_LinearColor_1;
    params.K2Node_MakeStruct_SlateColor_1 = (FSlateColor)K2Node_MakeStruct_SlateColor_1;
    ProcessEvent(func, &params);
}
