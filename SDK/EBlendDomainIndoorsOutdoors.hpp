#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EBlendDomainIndoorsOutdoors : uint8_t {
    IndoorsAndOutdoors = 0,
    OutdoorsOnly = 1,
    IndoorsOnly = 2,
    EBlendDomainIndoorsOutdoors_MAX = 3,
};
#pragma pack(pop)
