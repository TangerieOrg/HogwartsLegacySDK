#pragma once
#include <cstdint>
namespace EPathFollowingAction {
#pragma pack(push, 1)
enum Type : uint8_t {
    Error = 0,
    NoMove = 1,
    DirectMove = 2,
    PartialPath = 3,
    PathToGoal = 4,
    EPathFollowingAction_MAX = 5,
};
#pragma pack(pop)
}
