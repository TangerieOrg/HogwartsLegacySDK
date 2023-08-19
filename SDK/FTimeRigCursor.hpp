#pragma once
#include <cstdint>
#include "FTimeRigCoordinate.hpp"
#pragma pack(push, 1)
struct FTimeRigCursor {
    FTimeRigCoordinate PreviousTime; // 0x0
    FTimeRigCoordinate CurrentTime; // 0x4
}; // Size: 0x8
#pragma pack(pop)
