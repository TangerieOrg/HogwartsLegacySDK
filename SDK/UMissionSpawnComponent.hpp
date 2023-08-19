#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UMissionSpawnComponent : public UActorComponent {
public:
    FDbSingleColumnInfo m_missionID; // 0xc8
    static UMissionSpawnComponent* StaticClass();
}; // Size: 0x150
#pragma pack(pop)
