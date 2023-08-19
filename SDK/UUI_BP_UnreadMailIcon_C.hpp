#pragma once
#include <cstdint>
#include "UHUDElementGroup.hpp"
class UImage;
#pragma pack(push, 1)
class UUI_BP_UnreadMailIcon_C : public UHUDElementGroup {
public:
    UImage* MailImage; // 0x2e8
    static UUI_BP_UnreadMailIcon_C* StaticClass();
}; // Size: 0x2f0
#pragma pack(pop)
