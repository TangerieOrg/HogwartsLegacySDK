#pragma once
#include <cstdint>
#include "UPlatformInterfaceBase.hpp"
#pragma pack(push, 1)
class UInGameAdManager : public UPlatformInterfaceBase {
public:
    uint8_t bShouldPauseWhileAdOpen : 1; // 0x38
    uint8_t pad_bitfield_38_1 : 7;
    char pad_39[0x7];
    TArray<void*> ClickedBannerDelegates; // 0x40
    TArray<void*> ClosedAdDelegates; // 0x50
    static UInGameAdManager* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
