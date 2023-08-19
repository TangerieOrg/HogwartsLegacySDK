#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EHoudiniToolSelectionType {
    HTOOL_SELECTION_ALL = 0,
    HTOOL_SELECTION_WORLD_ONLY = 1,
    HTOOL_SELECTION_CB_ONLY = 2,
    HTOOL_SELECTION_MAX = 3,
};
#pragma pack(pop)
