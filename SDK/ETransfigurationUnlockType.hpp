#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETransfigurationUnlockType : uint8_t {
    Unknown = 0,
    UnknownCurrentlyUnlocked = 1,
    AlwaysUnlocked = 2,
    Vendor = 3,
    CurriculumReward = 4,
    MissionReward = 5,
    Challenge = 6,
    LootDrop = 7,
    Product = 8,
    ETransfigurationUnlockType_MAX = 9,
};
#pragma pack(pop)
