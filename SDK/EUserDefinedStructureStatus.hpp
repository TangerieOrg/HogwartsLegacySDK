#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EUserDefinedStructureStatus : uint8_t {
    UDSS_UpToDate = 0,
    UDSS_Dirty = 1,
    UDSS_Error = 2,
    UDSS_Duplicate = 3,
    UDSS_MAX = 4,
};
#pragma pack(pop)
