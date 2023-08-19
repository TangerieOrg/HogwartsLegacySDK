#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_ActorMeshStates : public USceneRigObjectActionBase {
public:
    bool bIncludeChildActors; // 0xa0
    bool bUpdateEveryFrame; // 0xa1
    char pad_a2[0x6];
    static USceneAction_ActorMeshStates* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
