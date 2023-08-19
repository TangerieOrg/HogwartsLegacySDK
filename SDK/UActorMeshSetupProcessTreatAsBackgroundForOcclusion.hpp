#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessTreatAsBackgroundForOcclusion : public UActorMeshSetupProcessFiltered {
public:
    bool bTreatAsBackgroundForOcclusion; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessTreatAsBackgroundForOcclusion* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
