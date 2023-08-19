#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECognitionBackgroundSetting {
    NotInBackground = 0,
    InBackgroundNoBest = 1,
    InBackgroundShowBest = 2,
    ECognitionBackgroundSetting_MAX = 3,
};
#pragma pack(pop)
