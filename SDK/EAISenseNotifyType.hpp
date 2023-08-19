#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAISenseNotifyType : uint8_t {
    OnEveryPerception = 0,
    OnPerceptionChange = 1,
    EAISenseNotifyType_MAX = 2,
};
#pragma pack(pop)
