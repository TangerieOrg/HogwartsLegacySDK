#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_MissionPerformTasks : public UActorProvider {
public:
    FName MissionID; // 0x38
    int32_t MissionUID; // 0x40
    char pad_44[0x4];
    static UActor_MissionPerformTasks* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
