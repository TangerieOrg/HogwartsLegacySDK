#pragma once
#include <cstdint>
#include "ATransfigurationObjectBase.hpp"
class USceneComponent;
class UStaticMeshComponent;
#pragma pack(push, 1)
class AFreeStandingClock : public ATransfigurationObjectBase {
public:
    USceneComponent* HandsComponent; // 0x2a8
    UStaticMeshComponent* HourHand; // 0x2b0
    UStaticMeshComponent* MinuteHand; // 0x2b8
    char pad_2c0[0x44];
    float HandRotateDuration; // 0x304
    bool bHandsLookAtPlayer; // 0x308
    char pad_309[0x7];
    static AFreeStandingClock* StaticClass();
    void OnClockChime();
    void DoClockTick();
}; // Size: 0x310
#pragma pack(pop)
