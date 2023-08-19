#pragma once
#include <cstdint>
namespace ETouchType {
#pragma pack(push, 1)
enum Type {
    Began = 0,
    Moved = 1,
    Stationary = 2,
    ForceChanged = 3,
    FirstMove = 4,
    Ended = 5,
    NumTypes = 6,
    ETouchType_MAX = 7,
};
#pragma pack(pop)
}
