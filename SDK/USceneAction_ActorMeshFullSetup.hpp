#pragma once
#include <cstdint>
#include "FActorMeshSetupDefinition.hpp"
#include "USceneAction_ActorMeshStates.hpp"
#pragma pack(push, 1)
class USceneAction_ActorMeshFullSetup : public USceneAction_ActorMeshStates {
public:
    FActorMeshSetupDefinition Setup; // 0xa8
    static USceneAction_ActorMeshFullSetup* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
