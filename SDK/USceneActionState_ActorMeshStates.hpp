#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
#pragma pack(push, 1)
class USceneActionState_ActorMeshStates : public USceneRigObjectActionState {
public:
    bool bNeedsRestore; // 0x70
    char pad_71[0x7];
    static USceneActionState_ActorMeshStates* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
