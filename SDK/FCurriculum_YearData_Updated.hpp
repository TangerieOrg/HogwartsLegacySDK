#pragma once
#include <cstdint>
#include "FCurriculumRequirements_Updated.hpp"
#include "FVCSlot.hpp"
#pragma pack(push, 1)
struct FCurriculum_YearData_Updated {
    TArray<FCurriculumRequirements_Updated> UncompletedTurnIns; // 0x0
    TArray<FCurriculumRequirements_Updated> CompletedTurnIns; // 0x10
    TArray<FVCSlot> YearRewards; // 0x20
}; // Size: 0x30
#pragma pack(pop)
