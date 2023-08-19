#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "USceneComponent.hpp"
class UClass;
class AARActor;
#pragma pack(push, 1)
class UARLifeCycleComponent : public USceneComponent {
public:
    char pad_220[0x30];
    static UARLifeCycleComponent* StaticClass();
    void ServerSpawnARActor(UClass* ComponentClass, FGuid NativeID);
    void ServerDestroyARActor(AARActor* Actor);
    void InstanceARActorToBeDestroyedDelegate__DelegateSignature(AARActor* Actor);
    void InstanceARActorSpawnedDelegate__DelegateSignature(UClass* ComponentClass, FGuid NativeID, AARActor* SpawnedActor);
}; // Size: 0x250
#pragma pack(pop)
