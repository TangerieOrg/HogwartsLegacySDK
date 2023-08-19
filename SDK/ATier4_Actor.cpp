#include "AActor.hpp"
#include "ACustomizableActor.hpp"
#include "AStation.hpp"
#include "ATier4_Actor.hpp"
#include "AVisibilityMeshActor.hpp"
#include "UCapsuleComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UStaticMeshComponent.hpp"
ATier4_Actor* ATier4_Actor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Tier4_Actor");
    return (ATier4_Actor*)res;
}
void ATier4_Actor::SetManagedStackVisibilityMesh(UStaticMeshComponent* InVisibilityMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tier4_Actor.SetManagedStackVisibilityMesh"));
    struct Params_SetManagedStackVisibilityMesh {
        UStaticMeshComponent* InVisibilityMesh; // 0x0
    }; // Size: 0x8
    Params_SetManagedStackVisibilityMesh params{};
    params.InVisibilityMesh = (UStaticMeshComponent*)InVisibilityMesh;
    ProcessEvent(func, &params);
}
bool ATier4_Actor::TeleportToStation(AStation* InStation, int32_t InConnectionIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tier4_Actor.TeleportToStation"));
    struct Params_TeleportToStation {
        AStation* InStation; // 0x0
        int32_t InConnectionIndex; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_TeleportToStation params{};
    params.InStation = (AStation*)InStation;
    params.InConnectionIndex = (int32_t)InConnectionIndex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ATier4_Actor::OnCharacterLoadComplete(AActor* inTheActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tier4_Actor.OnCharacterLoadComplete"));
    struct Params_OnCharacterLoadComplete {
        AActor* inTheActor; // 0x0
    }; // Size: 0x8
    Params_OnCharacterLoadComplete params{};
    params.inTheActor = (AActor*)inTheActor;
    ProcessEvent(func, &params);
}
void ATier4_Actor::OnBeginActorOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tier4_Actor.OnBeginActorOverlap"));
    struct Params_OnBeginActorOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnBeginActorOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
