#pragma once
#include <cstdint>
#include "USceneRigActionState.hpp"
class AActor;
#pragma pack(push, 1)
class USceneActionState_SpawnActor : public USceneRigActionState {
public:
    char pad_50[0x18];
    AActor* Actor; // 0x68
    static USceneActionState_SpawnActor* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
