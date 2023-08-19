#pragma once
#include <cstdint>
namespace ENavPathEvent {
#pragma pack(push, 1)
enum Type {
    Cleared = 0,
    NewPath = 1,
    UpdatedDueToGoalMoved = 2,
    UpdatedDueToNavigationChanged = 3,
    Invalidated = 4,
    RePathFailed = 5,
    MetaPathUpdate = 6,
    Custom = 7,
    ENavPathEvent_MAX = 8,
};
#pragma pack(pop)
}
