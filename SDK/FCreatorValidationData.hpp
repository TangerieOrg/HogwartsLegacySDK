#pragma once
#include <cstdint>
#include "FDesiredLocationValidationData.hpp"
#pragma pack(push, 1)
struct FCreatorValidationData {
    bool bCreatorReady; // 0x0
    bool bHasUniqueCreatorName; // 0x1
    bool bHasScheduleFilter; // 0x2
    bool bHasDesiredLocations; // 0x3
    bool bHasValidLocationIDs; // 0x4
    bool bHasLocationData; // 0x5
    bool bHasScheduleData; // 0x6
    bool bHasEncounterData; // 0x7
    TArray<FDesiredLocationValidationData> DesiredLocations; // 0x8
}; // Size: 0x18
#pragma pack(pop)
