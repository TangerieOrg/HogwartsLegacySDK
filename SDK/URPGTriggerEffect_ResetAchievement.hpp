#pragma once
#include <cstdint>
#include "URPGTriggerEffect_Base.hpp"
#pragma pack(push, 1)
class URPGTriggerEffect_ResetAchievement : public URPGTriggerEffect_Base {
public:
    FName AchievementID; // 0x40
    static URPGTriggerEffect_ResetAchievement* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
