#include "AActor.hpp"
#include "APhoenixTrackingVolume.hpp"
#include "ETrackingVolumeType.hpp"
#include "UFunction.hpp"
#include "UShapeComponent.hpp"
APhoenixTrackingVolume* APhoenixTrackingVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixTrackingVolume");
    return (APhoenixTrackingVolume*)res;
}
void APhoenixTrackingVolume::OnEndOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixTrackingVolume.OnEndOverlap"));
    struct Params_OnEndOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnEndOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void APhoenixTrackingVolume::OnBeginOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixTrackingVolume.OnBeginOverlap"));
    struct Params_OnBeginOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnBeginOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
