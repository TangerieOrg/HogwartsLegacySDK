#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
class UImage;
#pragma pack(push, 1)
class UUI_BP_AimLock_Reticule_OffScreen_C : public UUserWidget {
public:
    UImage* TargetCircle; // 0x268
    UImage* TargetCircle_BG; // 0x270
    static UUI_BP_AimLock_Reticule_OffScreen_C* StaticClass();
}; // Size: 0x278
#pragma pack(pop)
