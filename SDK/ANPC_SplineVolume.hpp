#pragma once
#include <cstdint>
#include "ANPC_Volume.hpp"
class ANPC_Spline;
#pragma pack(push, 1)
class ANPC_SplineVolume : public ANPC_Volume {
public:
    TArray<ANPC_Spline*> SplineList; // 0x2a8
    bool bIdle; // 0x2b8
    char pad_2b9[0x3];
    float IdleInterval; // 0x2bc
    float IdleIntervalDeviation; // 0x2c0
    float VolumeMoveScale; // 0x2c4
    bool bApplyVolumeSpeed; // 0x2c8
    char pad_2c9[0x3];
    float MinVolumeSpeed; // 0x2cc
    float MaxVolumeSpeed; // 0x2d0
    bool bChangeSpeed; // 0x2d4
    char pad_2d5[0x3];
    float MinSpeed; // 0x2d8
    float MaxSpeed; // 0x2dc
    bool bChangeScurrySpeed; // 0x2e0
    char pad_2e1[0x3];
    float ScurryMinSpeed; // 0x2e4
    float ScurryMaxSpeed; // 0x2e8
    char pad_2ec[0x4];
    static ANPC_SplineVolume* StaticClass();
}; // Size: 0x2f0
#pragma pack(pop)
