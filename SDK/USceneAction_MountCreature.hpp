#pragma once
#include <cstdint>
#include "USceneRigObjectActionBase.hpp"
class UActorProvider;
class UClass;
#pragma pack(push, 1)
class USceneAction_MountCreature : public USceneRigObjectActionBase {
public:
    UActorProvider* Creature; // 0xa0
    UClass* MountHandlerClass; // 0xa8
    bool bForceMountOnEnter; // 0xb0
    bool bForceDismountOnExit; // 0xb1
    bool bUseDismountTransition; // 0xb2
    bool bStartFlying; // 0xb3
    bool bStopFlying; // 0xb4
    char pad_b5[0x3];
    UActorProvider* PathNode; // 0xb8
    static USceneAction_MountCreature* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
