#pragma once
#include <cstdint>
#include "EAudioVisualizerType.hpp"
#include "FLinearColor.hpp"
#include "FSlateColor.hpp"
#include "UUserWidget.hpp"
class UCanvasPanel;
class UUI_BP_ArrowWidget_C;
#pragma pack(push, 1)
class UUI_BP_DirectionalArrowWidget_C : public UUserWidget {
public:
    UCanvasPanel* RotationPanel; // 0x268
    UUI_BP_ArrowWidget_C* UI_BP_ArrowWidget; // 0x270
    static UUI_BP_DirectionalArrowWidget_C* StaticClass();
    void Remove();
    void SetType(EAudioVisualizerType InType, bool K2Node_SwitchEnum_CmpSuccess, FLinearColor K2Node_MakeStruct_LinearColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor K2Node_MakeStruct_LinearColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1);
    void SetRotation(float Rotation);
}; // Size: 0x278
#pragma pack(pop)
