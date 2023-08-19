#include "AActor.hpp"
#include "APawn.hpp"
#include "ESpawnActorCollisionHandlingMethod.hpp"
#include "FTransform.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USpawnCustomizableActor.hpp"
USpawnCustomizableActor* USpawnCustomizableActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpawnCustomizableActor");
    return (USpawnCustomizableActor*)res;
}
USpawnCustomizableActor* USpawnCustomizableActor::SpawnCustomizableActor(UObject* WorldContextObject, UClass* Class, FName RegistryId, FTransform& Transform, AActor* Owner, APawn* Instigator, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpawnCustomizableActor.SpawnCustomizableActor"));
    struct Params_SpawnCustomizableActor {
        UObject* WorldContextObject; // 0x0
        UClass* Class; // 0x8
        FName RegistryId; // 0x10
        char pad_18[0x8];
        FTransform Transform; // 0x20
        AActor* Owner; // 0x50
        APawn* Instigator; // 0x58
        ESpawnActorCollisionHandlingMethod CollisionHandlingOverride; // 0x60
        char pad_61[0x7];
        USpawnCustomizableActor* ReturnValue; // 0x68
    }; // Size: 0x70
    Params_SpawnCustomizableActor params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Class = (UClass*)Class;
    params.RegistryId = (FName)RegistryId;
    params.Transform = (FTransform)Transform;
    params.Owner = (AActor*)Owner;
    params.Instigator = (APawn*)Instigator;
    params.CollisionHandlingOverride = (ESpawnActorCollisionHandlingMethod)CollisionHandlingOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Transform = params.Transform;
    return (USpawnCustomizableActor*)params.ReturnValue;
}
void USpawnCustomizableActor::OnFinishLoading(AActor* InOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpawnCustomizableActor.OnFinishLoading"));
    struct Params_OnFinishLoading {
        AActor* InOwner; // 0x0
    }; // Size: 0x8
    Params_OnFinishLoading params{};
    params.InOwner = (AActor*)InOwner;
    ProcessEvent(func, &params);
}
