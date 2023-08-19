#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "UHUDElementGroup.hpp"
#pragma pack(push, 1)
class UUserWidget_LockOnReticle : public UHUDElementGroup {
public:
    float CurrentScale; // 0x2e8
    float ScaleMax; // 0x2ec
    static UUserWidget_LockOnReticle* StaticClass();
    void SetLockOnVisibility(ESlateVisibility InVisibility);
    void SetAimModeVisibility(ESlateVisibility InVisibility);
    void SetAimModeCircleScale(float InScale);
}; // Size: 0x2f0
#pragma pack(pop)
