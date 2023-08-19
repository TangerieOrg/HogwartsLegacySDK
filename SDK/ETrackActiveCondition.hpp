#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETrackActiveCondition : uint8_t {
    ETAC_Always = 0,
    ETAC_GoreEnabled = 1,
    ETAC_GoreDisabled = 2,
    ETAC_MAX = 3,
};
#pragma pack(pop)
