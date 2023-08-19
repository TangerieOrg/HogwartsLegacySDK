#pragma once
#include <cstdint>
#include "FCreditEntry.hpp"
#include "UPhoenixUserWidget.hpp"
#pragma pack(push, 1)
class UPhoenixCreditEntryWidget : public UPhoenixUserWidget {
public:
    static UPhoenixCreditEntryWidget* StaticClass();
    void SetCreditEntryInfo(FCreditEntry CreditEntry);
    void SetCreditEntryAnimProgress(float Progress);
    void CreditEntryAnimationEnded__DelegateSignature();
}; // Size: 0x328
#pragma pack(pop)
