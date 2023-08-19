#pragma once
#include <cstdint>
#include "FMissionName.hpp"
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_CompleteMissionTask : public USceneRigActionBase {
public:
    FMissionName Mission; // 0x88
    FString missionStepNickname; // 0x90
    static USceneAction_CompleteMissionTask* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
