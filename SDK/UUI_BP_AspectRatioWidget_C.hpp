#pragma once
#include <cstdint>
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UCameraAspectRatioWidget.hpp"
class UImage;
#pragma pack(push, 1)
class UUI_BP_AspectRatioWidget_C : public UCameraAspectRatioWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x270
    UImage* BlackBar_Bottom; // 0x278
    UImage* BlackBar_Left; // 0x280
    UImage* BlackBar_Right; // 0x288
    UImage* BlackBar_Top; // 0x290
    static UUI_BP_AspectRatioWidget_C* StaticClass();
    void UI_HideBars0();
    void UI_UpdateLetterbox0(float InBarScale);
    void UI_UpdatePillarbox0(float InBarScale);
    void Construct();
    void ExecuteUbergraph_UI_BP_AspectRatioWidget(int32_t EntryPoint, float K2Node_Event_InBarScale_1, float K2Node_Event_InBarScale, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1);
}; // Size: 0x298
#pragma pack(pop)
