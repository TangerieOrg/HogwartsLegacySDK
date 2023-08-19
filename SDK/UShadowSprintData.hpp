#pragma once
#include <cstdint>
#include "FShadowSprintImpulseData.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UShadowSprintData : public UDataAsset {
public:
    FShadowSprintImpulseData MinForwardImpulse; // 0x30
    FShadowSprintImpulseData MaxForwardImpulse; // 0x44
    FShadowSprintImpulseData VerticalImpulse; // 0x58
    float ConformToGroundHeight; // 0x6c
    float DangerZone; // 0x70
    float GroundBuffer; // 0x74
    float CeilingBuffer; // 0x78
    float ConformToGroundTime; // 0x7c
    FShadowSprintImpulseData DangerZoneImpulse; // 0x80
    FShadowSprintImpulseData GroundBufferImpulse; // 0x94
    FShadowSprintImpulseData CeilingBufferImpulse; // 0xa8
    bool bDangerZoneIfNoGroundFound; // 0xbc
    char pad_bd[0x3];
    float YawMinInterpSpeed; // 0xc0
    float YawMaxInterpSpeed; // 0xc4
    float PitchInterpSpeed; // 0xc8
    float PitchBackToZeroInterpSpeed; // 0xcc
    bool bDebugDraw; // 0xd0
    bool bDisablePhysics; // 0xd1
    char pad_d2[0x6];
    static UShadowSprintData* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
