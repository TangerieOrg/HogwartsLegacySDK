#pragma once
#include <cstdint>
namespace EHarvestState {
#pragma pack(push, 1)
enum Type : uint8_t {
    PullFail = 0,
    PullSucceed = 1,
    PickFail = 2,
    PickSucceed = 3,
    EHarvestState_MAX = 4,
};
#pragma pack(pop)
}
