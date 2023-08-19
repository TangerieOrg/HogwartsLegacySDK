#pragma once
#include <cstdint>
namespace EMoveDirectionRule {
#pragma pack(push, 1)
enum Type : uint8_t {
    ForwardVector = 0,
    DesiredDirection = 1,
    FacingTracker = 2,
    ForwardVector_NEGATED = 3,
    DesiredDirection_NEGATED = 4,
    FacingTracker_NEGATED = 5,
    EMoveDirectionRule_MAX = 6,
};
#pragma pack(pop)
}
