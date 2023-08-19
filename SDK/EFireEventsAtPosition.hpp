#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFireEventsAtPosition : uint8_t {
    AtStartOfEvaluation = 0,
    AtEndOfEvaluation = 1,
    AfterSpawn = 2,
    EFireEventsAtPosition_MAX = 3,
};
#pragma pack(pop)
