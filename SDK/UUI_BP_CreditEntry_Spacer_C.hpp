#pragma once
#include <cstdint>
#include "FCreditEntry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixCreditEntryWidget.hpp"
#pragma pack(push, 1)
class UUI_BP_CreditEntry_Spacer_C : public UPhoenixCreditEntryWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    static UUI_BP_CreditEntry_Spacer_C* StaticClass();
    void SetCreditEntryInfo(FCreditEntry CreditEntry);
    void SetCreditEntryAnimProgress(float Progress);
    void ExecuteUbergraph_UI_BP_CreditEntry_Spacer(int32_t EntryPoint, float K2Node_Event_Progress, FCreditEntry K2Node_Event_CreditEntry);
}; // Size: 0x330
#pragma pack(pop)
