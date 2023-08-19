#pragma once
#include <cstdint>
#include "UInterface.hpp"
class AActor;
#pragma pack(push, 1)
class UTransformationInterface : public UInterface {
public:
    static UTransformationInterface* StaticClass();
    void OnTransformStart(AActor* Instigator);
    void OnTransformSpawnSpawned(AActor* Instigator, AActor* OriginalActor);
    void OnTransformSpawn(AActor* Instigator, AActor* TransformedActor);
    void OnTransformCompleteSpawned(AActor* Instigator, AActor* OriginalActor);
    void OnTransformComplete(AActor* Instigator, AActor* TransformedActor);
    void OnRestoreStartSpawned(AActor* Instigator, AActor* OriginalActor);
    void OnRestoreStart(AActor* Instigator);
    void OnRestoreComplete(AActor* Instigator);
}; // Size: 0x28
#pragma pack(pop)
