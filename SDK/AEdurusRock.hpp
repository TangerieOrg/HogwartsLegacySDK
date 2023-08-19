#pragma once
#include <cstdint>
#include "AMunitionType_SubsonicSpell.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
class AEdurusRock : public AMunitionType_SubsonicSpell {
public:
    float m_RockLaunchDelay; // 0x538
    float m_RockLaunchSpeed; // 0x53c
    float m_RockLaunchAcceleration; // 0x540
    float m_RockIdleSpeed; // 0x544
    float m_RockIdleRotationSpeed; // 0x548
    char pad_54c[0x1c];
    static AEdurusRock* StaticClass();
    void SetRockLaunchDelay(float Time);
    void SetRockIdleLocation(FVector TargetLoc);
    void LaunchRock();
}; // Size: 0x568
#pragma pack(pop)
