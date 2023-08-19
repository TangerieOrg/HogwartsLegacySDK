#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EStationSnapConnectionsToGround : uint8_t {
    SCTG_UNKNOWN = 0,
    SCTG_NO = 1,
    SCTG_YES = 2,
    SCTG_MAX = 3,
};
#pragma pack(pop)
