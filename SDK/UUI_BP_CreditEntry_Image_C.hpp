#pragma once
#include <cstdint>
#include "FAnchors.hpp"
#include "FCreditEntry.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UPhoenixCreditEntryWidget.hpp"
class UImage;
class UCanvasPanelSlot;
#pragma pack(push, 1)
class UUI_BP_CreditEntry_Image_C : public UPhoenixCreditEntryWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UImage* TheImage; // 0x330
    static UUI_BP_CreditEntry_Image_C* StaticClass();
    void SetCreditEntryInfo0(FCreditEntry CreditEntry);
    void SetCreditEntryAnimProgress0(float Progress);
    void ExecuteUbergraph_UI_BP_CreditEntry_Image(int32_t EntryPoint, float K2Node_Event_Progress, float CallFunc_Multiply_FloatFloat_ReturnValue, UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FMargin K2Node_MakeStruct_Margin, float CallFunc_Subtract_FloatFloat_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue_1, FCreditEntry K2Node_Event_CreditEntry, FAnchors K2Node_MakeStruct_Anchors, bool CallFunc_AsyncFindIconTexture2D_ReturnValue);
}; // Size: 0x338
#pragma pack(pop)
