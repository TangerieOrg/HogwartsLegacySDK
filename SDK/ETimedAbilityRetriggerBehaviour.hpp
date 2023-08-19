#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETimedAbilityRetriggerBehaviour : uint8_t {
    Restart = 0,
    Delay_IgnoreActive = 1,
    Delay_ExtendActive = 2,
    Ignore = 3,
    ETimedAbilityRetriggerBehaviour_MAX = 4,
};
#pragma pack(pop)
