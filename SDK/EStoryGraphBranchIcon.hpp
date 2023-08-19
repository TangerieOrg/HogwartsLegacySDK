#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStoryGraphBranchIcon : int32_t {
    None = 0,
    Info = 1,
    InfoHub = 2,
    Straight = 3,
    Special = 4,
    BackTo = 5,
    Exit = 6,
    MainMission = 7,
    SideMission = 8,
    Assignment = 9,
    Conversation = 10,
    Vendor = 11,
    EStoryGraphBranchIcon_MAX = 12,
};
#pragma pack(pop)
