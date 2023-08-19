#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UParallaxWidget.hpp"
class UNamedSlot;
class UCanvasPanel;
class UCanvasPanelSlot;
#pragma pack(push, 1)
class UUI_BP_ParallaxWidget_C : public UParallaxWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x288
    UNamedSlot* Content; // 0x290
    UCanvasPanel* Root; // 0x298
    static UUI_BP_ParallaxWidget_C* StaticClass();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_UI_BP_ParallaxWidget(int32_t EntryPoint, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
}; // Size: 0x2a0
#pragma pack(pop)
