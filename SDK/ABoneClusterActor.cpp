#include "AActor.hpp"
#include "ABoneClusterActor.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "UStaticMeshComponent.hpp"
ABoneClusterActor* ABoneClusterActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BoneClusterActor");
    return (ABoneClusterActor*)res;
}
void ABoneClusterActor::RemoveStencilFromBones(TArray<UStaticMeshComponent*> Bones) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BoneClusterActor.RemoveStencilFromBones"));
    struct Params_RemoveStencilFromBones {
        TArray<UStaticMeshComponent*> Bones; // 0x0
    }; // Size: 0x10
    Params_RemoveStencilFromBones params{};
    params.Bones = (TArray<UStaticMeshComponent*>)Bones;
    ProcessEvent(func, &params);
}
UPrimitiveComponent* ABoneClusterActor::GetClosestBoneComponent(FVector& SourceLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BoneClusterActor.GetClosestBoneComponent"));
    struct Params_GetClosestBoneComponent {
        FVector SourceLocation; // 0x0
        char pad_c[0x4];
        UPrimitiveComponent* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetClosestBoneComponent params{};
    params.SourceLocation = (FVector)SourceLocation;
    ProcessEvent(func, &params);
    SourceLocation = params.SourceLocation;
    return (UPrimitiveComponent*)params.ReturnValue;
}
void ABoneClusterActor::ComputeBoneCloudCenterAndRadius() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BoneClusterActor.ComputeBoneCloudCenterAndRadius"));
    struct Params_ComputeBoneCloudCenterAndRadius {
    }; // Size: 0x0
    Params_ComputeBoneCloudCenterAndRadius params{};
    ProcessEvent(func, &params);
}
