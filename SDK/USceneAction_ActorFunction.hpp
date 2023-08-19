#pragma once
#include <cstdint>
#include "FSceneActionActorFunctionReference.hpp"
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_ActorFunction : public USceneRigObjectActionBase {
public:
    FSceneActionActorFunctionReference FunctionReference; // 0xa0
    static USceneAction_ActorFunction* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
