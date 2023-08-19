#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMaterialSwapInfoTyoe : uint8_t {
    UseMaterialPermuter = 0,
    InPlaceMIDs = 1,
    MaterialOverride = 2,
    MaterialOverrides = 3,
    EMaterialSwapInfoTyoe_MAX = 4,
};
#pragma pack(pop)
