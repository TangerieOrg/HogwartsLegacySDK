#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENotificationCategory : uint8_t {
    NotificationCategory_Celebration = 0,
    NotificationCategory_CelebrationMed = 1,
    NotificationCategory_MissionBanner = 2,
    NotificationCategory_MissionStep = 3,
    NotificationCategory_LevelUp = 4,
    NotificationCategory_Pickups = 5,
    NotificationCategory_Knowledge = 6,
    NotificationCategory_OwlMail = 7,
    NotificationCategory_XP = 8,
    NotificationCategory_SmallText = 9,
    NotificationCategory_All = 10,
    NotificationCategory_MAX = 11,
};
#pragma pack(pop)
