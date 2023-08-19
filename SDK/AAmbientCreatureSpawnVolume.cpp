#include "AActor.hpp"
#include "AAmbientCreatureSpawnVolume.hpp"
#include "ATriggerBox.hpp"
#include "EAmbientCreatureSpawnVolumePriority.hpp"
#include "EAmbientCreatureSpawnVolumeType.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UFunction.hpp"
AAmbientCreatureSpawnVolume* AAmbientCreatureSpawnVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AmbientCreatureSpawnVolume");
    return (AAmbientCreatureSpawnVolume*)res;
}
void AAmbientCreatureSpawnVolume::OnEndOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AmbientCreatureSpawnVolume.OnEndOverlap"));
    struct Params_OnEndOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnEndOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AAmbientCreatureSpawnVolume::OnBeginOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AmbientCreatureSpawnVolume.OnBeginOverlap"));
    struct Params_OnBeginOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnBeginOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
