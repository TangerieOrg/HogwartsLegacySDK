#include "AActor.hpp"
#include "APerceptionPointArea.hpp"
#include "UFunction.hpp"
#include "UShapeComponent.hpp"
APerceptionPointArea* APerceptionPointArea::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerceptionPointArea");
    return (APerceptionPointArea*)res;
}
void APerceptionPointArea::SetActive(bool bInActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerceptionPointArea.SetActive"));
    struct Params_SetActive {
        bool bInActive; // 0x0
    }; // Size: 0x1
    Params_SetActive params{};
    params.bInActive = (bool)bInActive;
    ProcessEvent(func, &params);
}
void APerceptionPointArea::OnBeginOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerceptionPointArea.OnBeginOverlap"));
    struct Params_OnBeginOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnBeginOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void APerceptionPointArea::OnEndOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerceptionPointArea.OnEndOverlap"));
    struct Params_OnEndOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnEndOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
bool APerceptionPointArea::GetActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerceptionPointArea.GetActive"));
    struct Params_GetActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
