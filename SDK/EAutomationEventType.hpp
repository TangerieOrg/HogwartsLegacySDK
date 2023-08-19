#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAutomationEventType : uint8_t {
    Info = 0,
    Warning = 1,
    Error = 2,
    EAutomationEventType_MAX = 3,
};
#pragma pack(pop)
