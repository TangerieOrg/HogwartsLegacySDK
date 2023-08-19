#include "AActor.hpp"
#include "ACreaturePerceptionVolume.hpp"
#include "AVolume.hpp"
#include "ECreaturePerceptionVolumeType.hpp"
#include "UFunction.hpp"
ACreaturePerceptionVolume* ACreaturePerceptionVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreaturePerceptionVolume");
    return (ACreaturePerceptionVolume*)res;
}
void ACreaturePerceptionVolume::OnBeginOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreaturePerceptionVolume.OnBeginOverlap"));
    struct Params_OnBeginOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnBeginOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ACreaturePerceptionVolume::OnEndOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreaturePerceptionVolume.OnEndOverlap"));
    struct Params_OnEndOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnEndOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
