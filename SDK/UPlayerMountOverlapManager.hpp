#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UPlayerMountOverlapManager : public UObject {
public:
    char pad_28[0xa8];
    float SpeedUpUnavailableMessageTimeout; // 0xd0
    float LandingUnavailableMessageTimeout; // 0xd4
    char pad_d8[0x1b0];
    static UPlayerMountOverlapManager* StaticClass();
    bool IsInsideFacingEntry(bool bDraw);
    bool GetTimeInNoMountZone(float& Time);
    bool GetInNoMountZone();
    static UPlayerMountOverlapManager* Get();
    bool CanSpeedUp();
}; // Size: 0x288
#pragma pack(pop)
