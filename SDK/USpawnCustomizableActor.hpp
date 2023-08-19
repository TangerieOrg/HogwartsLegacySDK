#pragma once
#include <cstdint>
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
class UClass;
struct FTransform;
class AActor;
class APawn;
#pragma pack(push, 1)
class USpawnCustomizableActor : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x18];
    static USpawnCustomizableActor* StaticClass();
    static USpawnCustomizableActor* SpawnCustomizableActor(UObject* WorldContextObject, UClass* Class, FName RegistryId, FTransform& Transform, AActor* Owner, APawn* Instigator, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride);
    void OnFinishLoading(AActor* InOwner);
}; // Size: 0x48
#pragma pack(pop)
