#pragma once
#include <cstdint>
#include "FActorMeshSetupName.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UMeshComponent;
class AActor;
#pragma pack(push, 1)
class UActorMeshSetupLibrary : public UBlueprintFunctionLibrary {
public:
    static UActorMeshSetupLibrary* StaticClass();
    static void ActorMeshSetupRemoveMeshAlwaysIgnore(UMeshComponent* MeshComponent);
    static void ActorMeshSetupRemoveAlwaysIgnore(AActor* Actor, bool bIncludeChildren);
    static bool ActorMeshSetupProcessRefresh(AActor* Actor, bool bIncludeChildren);
    static bool ActorMeshSetupProcessNamed(AActor* Actor, FActorMeshSetupName MeshSetup, bool bIncludeChildren);
    static bool ActorMeshSetupProcessAuto(AActor* Actor, bool bIncludeChildren);
    static void ActorMeshSetupAlwaysIgnoreMesh(UMeshComponent* MeshComponent);
    static void ActorMeshSetupAlwaysIgnore(AActor* Actor, bool bIncludeChildren);
}; // Size: 0x28
#pragma pack(pop)
