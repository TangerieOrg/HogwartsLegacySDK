#pragma once
#include <cstdint>
#include "FSceneActionActorFunctionReference.hpp"
#include "FSceneActionActorTickFunctionReference.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_ActorIntervalFunctions : public USceneRigObjectActionBase {
public:
    FSceneActionActorFunctionReference OnEnterFunction; // 0xa0
    FSceneActionActorTickFunctionReference TickFunction; // 0xd0
    FSceneActionActorFunctionReference OnExitFunction; // 0x100
    static USceneAction_ActorIntervalFunctions* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
