#pragma once
#include <cstdint>
namespace EHeadTrackingState {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Disallow = 1,
    Allow = 2,
    AllowHeadOnly = 3,
    Allow360 = 4,
    AllowHeadOnly360 = 5,
    EHeadTrackingState_MAX = 6,
};
#pragma pack(pop)
}
