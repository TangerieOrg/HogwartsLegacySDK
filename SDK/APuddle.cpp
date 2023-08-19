#include "AActor.hpp"
#include "APuddle.hpp"
#include "UFunction.hpp"
#include "UPhoenixPhysicalMaterial.hpp"
#include "UStaticMeshComponent.hpp"
APuddle* APuddle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Puddle");
    return (APuddle*)res;
}
void APuddle::OnEndOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Puddle.OnEndOverlap"));
    struct Params_OnEndOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnEndOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void APuddle::OnBeginOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Puddle.OnBeginOverlap"));
    struct Params_OnBeginOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnBeginOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
