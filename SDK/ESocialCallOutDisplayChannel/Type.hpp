#pragma once
#include <cstdint>
namespace ESocialCallOutDisplayChannel {
#pragma pack(push, 1)
enum Type {
    SocialCapitalMovement = 0,
    StationSelection = 1,
    ScheduledGoal = 2,
    Name = 3,
    TravelGoalSite = 4,
    NUM_CHANNELS = 5,
    ESocialCallOutDisplayChannel_MAX = 6,
};
#pragma pack(pop)
}
