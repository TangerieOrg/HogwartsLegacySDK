#include "AActor.hpp"
#include "ACreatureNurturingVolumeBase.hpp"
#include "ATriggerBox.hpp"
#include "UFunction.hpp"
ACreatureNurturingVolumeBase* ACreatureNurturingVolumeBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureNurturingVolumeBase");
    return (ACreatureNurturingVolumeBase*)res;
}
void ACreatureNurturingVolumeBase::OnEndOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureNurturingVolumeBase.OnEndOverlap"));
    struct Params_OnEndOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnEndOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ACreatureNurturingVolumeBase::OnBeginOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureNurturingVolumeBase.OnBeginOverlap"));
    struct Params_OnBeginOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnBeginOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
