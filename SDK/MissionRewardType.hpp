#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum MissionRewardType {
    MISSION_REWARD_TYPE_CONTAINER = 0,
    MISSION_REWARD_TYPE_ITEM = 1,
    MISSION_REWARD_TYPE_KNOWLEDGE = 2,
    MISSION_REWARD_TYPE_SPELL = 3,
    MISSION_REWARD_TYPE_MAX = 4,
};
#pragma pack(pop)
