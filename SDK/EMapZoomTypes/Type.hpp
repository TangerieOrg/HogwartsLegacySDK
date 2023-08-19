#pragma once
#include <cstdint>
namespace EMapZoomTypes {
#pragma pack(push, 1)
enum Type : uint8_t {
    MAP_TOOL_TIP_TYPE_INVALID = 0,
    MAP_TOOL_TIP_TYPE_TIER1 = 1,
    MAP_TOOL_TIP_TYPE_TIER2 = 2,
    MAP_TOOL_TIP_TYPE_TIER3 = 3,
    MAP_TOOL_TIP_TYPE_TIER4 = 4,
    MAP_TOOL_TIP_TYPE_TIER5 = 5,
    MAP_TOOL_TIP_TYPE_MAX = 6,
};
#pragma pack(pop)
}
