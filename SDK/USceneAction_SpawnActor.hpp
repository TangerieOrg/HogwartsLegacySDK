#pragma once
#include <cstdint>
#include "USceneRigActionBase.hpp"
class UActorSpawner;
class UTimeRigElement;
#pragma pack(push, 1)
class USceneAction_SpawnActor : public USceneRigActionBase {
public:
    UActorSpawner* Spawner; // 0x88
    TArray<UTimeRigElement*> ChildElements; // 0x90
    static USceneAction_SpawnActor* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
