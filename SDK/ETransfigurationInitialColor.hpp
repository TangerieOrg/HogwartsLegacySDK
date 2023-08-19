#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETransfigurationInitialColor : uint8_t {
    Default = 0,
    AlwaysDefaultColor = 1,
    FromPlayersHouse = 2,
    ETransfigurationInitialColor_MAX = 3,
};
#pragma pack(pop)
