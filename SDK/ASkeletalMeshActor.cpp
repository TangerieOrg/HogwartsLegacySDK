#include "AActor.hpp"
#include "ASkeletalMeshActor.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UPhysicsAsset.hpp"
#include "USkeletalMesh.hpp"
#include "USkeletalMeshComponent.hpp"
ASkeletalMeshActor* ASkeletalMeshActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SkeletalMeshActor");
    return (ASkeletalMeshActor*)res;
}
void ASkeletalMeshActor::OnRep_ReplicatedPhysAsset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshActor.OnRep_ReplicatedPhysAsset"));
    struct Params_OnRep_ReplicatedPhysAsset {
    }; // Size: 0x0
    Params_OnRep_ReplicatedPhysAsset params{};
    ProcessEvent(func, &params);
}
void ASkeletalMeshActor::OnRep_ReplicatedMesh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshActor.OnRep_ReplicatedMesh"));
    struct Params_OnRep_ReplicatedMesh {
    }; // Size: 0x0
    Params_OnRep_ReplicatedMesh params{};
    ProcessEvent(func, &params);
}
void ASkeletalMeshActor::OnRep_ReplicatedMaterial1() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial1"));
    struct Params_OnRep_ReplicatedMaterial1 {
    }; // Size: 0x0
    Params_OnRep_ReplicatedMaterial1 params{};
    ProcessEvent(func, &params);
}
void ASkeletalMeshActor::OnRep_ReplicatedMaterial0() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkeletalMeshActor.OnRep_ReplicatedMaterial0"));
    struct Params_OnRep_ReplicatedMaterial0 {
    }; // Size: 0x0
    Params_OnRep_ReplicatedMaterial0 params{};
    ProcessEvent(func, &params);
}
