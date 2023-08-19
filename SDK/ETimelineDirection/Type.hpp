#pragma once
#include <cstdint>
namespace ETimelineDirection {
#pragma pack(push, 1)
enum Type : uint8_t {
    Forward = 0,
    Backward = 1,
    ETimelineDirection_MAX = 2,
};
#pragma pack(pop)
}
