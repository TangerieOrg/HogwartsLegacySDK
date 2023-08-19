#pragma once
#include <cstdint>
#include "USceneRigObjectActionState.hpp"
class AActor;
#pragma pack(push, 1)
class USceneActionState_WaitForDeath : public USceneRigObjectActionState {
public:
    static USceneActionState_WaitForDeath* StaticClass();
    void OnActorEndPlay(AActor* Actor);
}; // Size: 0x70
#pragma pack(pop)
