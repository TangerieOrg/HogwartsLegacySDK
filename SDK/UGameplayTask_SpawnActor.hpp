#pragma once
#include <cstdint>
#include "UGameplayTask.hpp"
class UClass;
class UObject;
class AActor;
#pragma pack(push, 1)
class UGameplayTask_SpawnActor : public UGameplayTask {
public:
    char pad_68[0x38];
    UClass* ClassToSpawn; // 0xa0
    static UGameplayTask_SpawnActor* StaticClass();
    static void SpawnActor();
    void FinishSpawningActor(UObject* WorldContextObject, AActor* SpawnedActor);
    bool BeginSpawningActor(UObject* WorldContextObject, AActor*& SpawnedActor);
}; // Size: 0xa8
#pragma pack(pop)
