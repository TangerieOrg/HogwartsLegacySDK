#include "AActor.hpp"
#include "ACompanionTeleportVolume.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
ACompanionTeleportVolume* ACompanionTeleportVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CompanionTeleportVolume");
    return (ACompanionTeleportVolume*)res;
}
void ACompanionTeleportVolume::SetActive(bool bActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionTeleportVolume.SetActive"));
    struct Params_SetActive {
        bool bActive; // 0x0
    }; // Size: 0x1
    Params_SetActive params{};
    params.bActive = (bool)bActive;
    ProcessEvent(func, &params);
}
void ACompanionTeleportVolume::SetTemporarilyActive(bool bActive, float Timeout) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionTeleportVolume.SetTemporarilyActive"));
    struct Params_SetTemporarilyActive {
        bool bActive; // 0x0
        char pad_1[0x3];
        float Timeout; // 0x4
    }; // Size: 0x8
    Params_SetTemporarilyActive params{};
    params.bActive = (bool)bActive;
    params.Timeout = (float)Timeout;
    ProcessEvent(func, &params);
}
void ACompanionTeleportVolume::OnEndOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionTeleportVolume.OnEndOverlap"));
    struct Params_OnEndOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnEndOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ACompanionTeleportVolume::OnBeginOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CompanionTeleportVolume.OnBeginOverlap"));
    struct Params_OnBeginOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnBeginOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
