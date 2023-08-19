#pragma once
#include <cstdint>
#include "ENPC_Mobility.hpp"
#include "UNPC_MobilityChoice.hpp"
#pragma pack(push, 1)
class UDynamic_MobilityChoice : public UNPC_MobilityChoice {
public:
    float StrafeMinDistToDest; // 0x28
    float StrafeMinDistToTarget; // 0x2c
    float StrafeMaxAngleToDest; // 0x30
    float StrafeIgnoreAngleDist; // 0x34
    float SprintMinDist; // 0x38
    float SprintDistStart; // 0x3c
    float SprintDistStop; // 0x40
    float StartChangeInterval; // 0x44
    float ChangeInterval; // 0x48
    ENPC_Mobility DebugMobility; // 0x4c
    char pad_4d[0x53];
    static UDynamic_MobilityChoice* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
