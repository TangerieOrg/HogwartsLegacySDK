#pragma once
#include <cstdint>
#include "FAnchors.hpp"
#include "FCreditEntry.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UPhoenixCreditEntryWidget.hpp"
class UHorizontalBox;
class UPhoenixTextBlock;
class UCanvasPanelSlot;
#pragma pack(push, 1)
class UUI_BP_CreditEntry_Line_C : public UPhoenixCreditEntryWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UHorizontalBox* EntryBox; // 0x330
    UPhoenixTextBlock* LineText; // 0x338
    static UUI_BP_CreditEntry_Line_C* StaticClass();
    void SetCreditEntryInfo0(FCreditEntry CreditEntry);
    void SetCreditEntryAnimProgress0(float Progress);
    void ExecuteUbergraph_UI_BP_CreditEntry_Line(int32_t EntryPoint, float K2Node_Event_Progress, float CallFunc_Multiply_FloatFloat_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FMargin K2Node_MakeStruct_Margin, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FCreditEntry K2Node_Event_CreditEntry, FAnchors K2Node_MakeStruct_Anchors);
}; // Size: 0x340
#pragma pack(pop)
