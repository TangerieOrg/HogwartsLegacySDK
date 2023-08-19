#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECreatureNavLinkType : uint8_t {
    None = 0,
    Jump = 1,
    ECreatureNavLinkType_MAX = 2,
};
#pragma pack(pop)
