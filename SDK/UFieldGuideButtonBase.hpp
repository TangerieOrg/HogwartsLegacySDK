#pragma once
#include <cstdint>
#include "EPauseMenuPage.hpp"
#include "ESlateVisibility.hpp"
#include "UIconButtonWidget.hpp"
#pragma pack(push, 1)
class UFieldGuideButtonBase : public UIconButtonWidget {
public:
    EPauseMenuPage MenuTab; // 0x4a8
    char pad_4a9[0x7];
    static UFieldGuideButtonBase* StaticClass();
    void SetNewItemIndicatorVisibility();
    void SetLockedState(bool IsLocked);
    void OnSetItemIndicatorVisibility(ESlateVisibility InVisibility);
    void LockButton(bool ShouldLock);
    bool GetLockedState();
}; // Size: 0x4b0
#pragma pack(pop)
