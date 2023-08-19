#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECompanionVO {
    JoinAvatar = 0,
    FollowAvatarAgain = 1,
    WaitforAvatar = 2,
    AvatarDismisses = 3,
    HealsPlayer = 4,
    PlayerDying = 5,
    PlayerHealsCompanion = 6,
    ScheduleConflictDismiss = 7,
    Reject = 8,
    Stealth = 9,
    Dying = 10,
    PlayerHit = 11,
    PlayerHitDismissWarning = 12,
    Num = 13,
    ECompanionVO_MAX = 14,
};
#pragma pack(pop)
