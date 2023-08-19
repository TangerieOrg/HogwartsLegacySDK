#pragma once
#include <cstdint>
namespace EPawnActionMoveMode {
#pragma pack(push, 1)
enum Type {
    UsePathfinding = 0,
    StraightLine = 1,
    EPawnActionMoveMode_MAX = 2,
};
#pragma pack(pop)
}
