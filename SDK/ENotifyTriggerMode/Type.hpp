#pragma once
#include <cstdint>
namespace ENotifyTriggerMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    AllAnimations = 0,
    HighestWeightedAnimation = 1,
    None = 2,
    ENotifyTriggerMode_MAX = 3,
};
#pragma pack(pop)
}
