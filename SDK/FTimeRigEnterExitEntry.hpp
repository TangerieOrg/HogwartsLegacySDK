#pragma once
#include <cstdint>
#include "ETimeRigEnterExitType.hpp"
#include "FTimeRigCoordinate.hpp"
class UTimeRigIntervalState;
#pragma pack(push, 1)
struct FTimeRigEnterExitEntry {
    ETimeRigEnterExitType EntryType; // 0x0
    char pad_1[0x3];
    FTimeRigCoordinate TimeValue; // 0x4
    UTimeRigIntervalState* IntervalState; // 0x8
}; // Size: 0x10
#pragma pack(pop)
