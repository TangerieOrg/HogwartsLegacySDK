#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UActorProvider;
#pragma pack(push, 1)
class USceneAction_TeleportToStation : public USceneRigObjectActionBase {
public:
    UActorProvider* StationActor; // 0xa0
    static USceneAction_TeleportToStation* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
