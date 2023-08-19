#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EScheduleEnableDisable : uint8_t {
    Ignore = 0,
    Enable = 1,
    DisableAndAbandonStations = 2,
    DisableButStayInStation = 3,
    EScheduleEnableDisable_MAX = 4,
};
#pragma pack(pop)
