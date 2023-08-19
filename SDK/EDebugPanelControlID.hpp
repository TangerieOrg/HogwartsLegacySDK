#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDebugPanelControlID : uint8_t {
    EDPCID_TEXT_LEFT = 0,
    EDPCID_TEXT_TOP = 1,
    EDPCID_TEXT_RIGHT = 2,
    EDPCID_TEXT_BOTTOM = 3,
    EDPCID_TEXT_MAX = 4,
};
#pragma pack(pop)
