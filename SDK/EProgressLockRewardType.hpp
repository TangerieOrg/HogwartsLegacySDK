#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EProgressLockRewardType : uint8_t {
    PROGRESS_LOCK_REWARD_TYPE_UNKNOWN = 0,
    PROGRESS_LOCK_REWARD_TYPE_SPELL = 1,
    PROGRESS_LOCK_REWARD_TYPE_MAX = 2,
};
#pragma pack(pop)
