#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGfeSDKHighlightType : uint8_t {
    NONE = 0,
    Milestone = 1,
    Achievement = 2,
    Incident = 4,
    StateChange = 8,
    Unannounced = 16,
    MAX = 32,
};
#pragma pack(pop)
