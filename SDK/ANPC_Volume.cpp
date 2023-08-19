#include "AActor.hpp"
#include "ANPC_Volume.hpp"
#include "UFunction.hpp"
#include "UShapeComponent.hpp"
void ANPC_Volume::SetActive(bool bInActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Volume.SetActive"));
    struct Params_SetActive {
        bool bInActive; // 0x0
    }; // Size: 0x1
    Params_SetActive params{};
    params.bInActive = (bool)bInActive;
    ProcessEvent(func, &params);
}
ANPC_Volume* ANPC_Volume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_Volume");
    return (ANPC_Volume*)res;
}
void ANPC_Volume::OnEndOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Volume.OnEndOverlap"));
    struct Params_OnEndOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnEndOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ANPC_Volume::OnBeginOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Volume.OnBeginOverlap"));
    struct Params_OnBeginOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnBeginOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
bool ANPC_Volume::GetActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.NPC_Volume.GetActive"));
    struct Params_GetActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
