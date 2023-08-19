#include "AActor.hpp"
#include "AForbiddenAreaVolume.hpp"
#include "EForbiddenAreaSetting.hpp"
#include "FForbiddenAreaSpecificNPC.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
void AForbiddenAreaVolume::OnEndOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForbiddenAreaVolume.OnEndOverlap"));
    struct Params_OnEndOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnEndOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
AForbiddenAreaVolume* AForbiddenAreaVolume::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ForbiddenAreaVolume");
    return (AForbiddenAreaVolume*)res;
}
void AForbiddenAreaVolume::SetActive(bool bActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForbiddenAreaVolume.SetActive"));
    struct Params_SetActive {
        bool bActive; // 0x0
    }; // Size: 0x1
    Params_SetActive params{};
    params.bActive = (bool)bActive;
    ProcessEvent(func, &params);
}
void AForbiddenAreaVolume::Activate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForbiddenAreaVolume.Activate"));
    struct Params_Activate {
    }; // Size: 0x0
    Params_Activate params{};
    ProcessEvent(func, &params);
}
void AForbiddenAreaVolume::OnBeginOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForbiddenAreaVolume.OnBeginOverlap"));
    struct Params_OnBeginOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnBeginOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void AForbiddenAreaVolume::Deactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ForbiddenAreaVolume.Deactivate"));
    struct Params_Deactivate {
    }; // Size: 0x0
    Params_Deactivate params{};
    ProcessEvent(func, &params);
}
