#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
class AActor;
#pragma pack(push, 1)
class USceneActionState_SpawnFromDOV : public USceneRigActionState {
public:
    char pad_50[0x8];
    static USceneActionState_SpawnFromDOV* StaticClass();
    void SpawnCallback(AActor* SpawnedActor, FName& GroupName);
}; // Size: 0x58
#pragma pack(pop)
