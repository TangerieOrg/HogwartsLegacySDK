#pragma once
#include <cstdint>
#include "FActorMeshSetupName.hpp"
#include "USceneAction_ActorMeshStates.hpp"
#pragma pack(push, 1)
class USceneAction_ActorMeshSetup : public USceneAction_ActorMeshStates {
public:
    FActorMeshSetupName Setup; // 0xa8
    static USceneAction_ActorMeshSetup* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
