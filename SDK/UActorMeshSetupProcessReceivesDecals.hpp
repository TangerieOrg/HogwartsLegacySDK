#pragma once
#include <cstdint>
#include "UActorMeshSetupProcessFiltered.hpp"
#pragma pack(push, 1)
class UActorMeshSetupProcessReceivesDecals : public UActorMeshSetupProcessFiltered {
public:
    bool bReceivesDecals; // 0x30
    char pad_31[0x7];
    static UActorMeshSetupProcessReceivesDecals* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
