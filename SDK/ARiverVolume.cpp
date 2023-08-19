#include "AActor.hpp"
#include "ARiverVolume.hpp"
#include "AWaterVolumeBase.hpp"
#include "EDrawDebugTrace\Type.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USphereComponent.hpp"
#include "UStaticMeshComponent.hpp"
ARiverVolume* ARiverVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RiverVolume");
    return (ARiverVolume*)res;
}
void ARiverVolume::SetupRiver(FTransform i_RiverTransform, FVector i_RiverAveDir) {}
FVector2D ARiverVolume::GetForceVector(UPrimitiveComponent* PrimComp, bool bUseDist) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RiverVolume.GetForceVector"));
    struct Params_GetForceVector {
        UPrimitiveComponent* PrimComp; // 0x0
        bool bUseDist; // 0x8
        char pad_9[0x3];
        FVector2D ReturnValue; // 0xc
    }; // Size: 0x14
    Params_GetForceVector params{};
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    params.bUseDist = (bool)bUseDist;
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void ARiverVolume::OnActorOverlapEnd(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RiverVolume.OnActorOverlapEnd"));
    struct Params_OnActorOverlapEnd {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnActorOverlapEnd params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ARiverVolume::OnLakeSphereOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RiverVolume.OnLakeSphereOverlapEnd"));
    struct Params_OnLakeSphereOverlapEnd {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnLakeSphereOverlapEnd params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
