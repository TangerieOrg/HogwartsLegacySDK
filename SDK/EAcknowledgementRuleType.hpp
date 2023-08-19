#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAcknowledgementRuleType : uint8_t {
    Time = 0,
    Event = 1,
    Ambient = 2,
    COUNT = 3,
    EAcknowledgementRuleType_MAX = 4,
};
#pragma pack(pop)
