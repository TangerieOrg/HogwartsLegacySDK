#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightEventDirectionTrigger : uint8_t {
    Rising = 0,
    Setting = 1,
    RisingAndSetting = 2,
    EDayNightEventDirectionTrigger_MAX = 3,
};
#pragma pack(pop)
