#include "AMapLocationActor.hpp"
#include "AStaticMeshActor.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UArrowComponent.hpp"
#include "UFunction.hpp"
#include "UMapCameraParameters.hpp"
void AMapLocationActor::OnActivateHighlight_Event(bool Activate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocationActor.OnActivateHighlight_Event"));
    struct Params_OnActivateHighlight_Event {
        bool Activate; // 0x0
    }; // Size: 0x1
    Params_OnActivateHighlight_Event params{};
    params.Activate = (bool)Activate;
    ProcessEvent(func, &params);
}
void AMapLocationActor::OnPushBackward() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocationActor.OnPushBackward"));
    struct Params_OnPushBackward {
    }; // Size: 0x0
    Params_OnPushBackward params{};
    ProcessEvent(func, &params);
}
void AMapLocationActor::OnPushBackward_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocationActor.OnPushBackward_Event"));
    struct Params_OnPushBackward_Event {
    }; // Size: 0x0
    Params_OnPushBackward_Event params{};
    ProcessEvent(func, &params);
}
AMapLocationActor* AMapLocationActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapLocationActor");
    return (AMapLocationActor*)res;
}
void AMapLocationActor::OnBringForward_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocationActor.OnBringForward_Event"));
    struct Params_OnBringForward_Event {
    }; // Size: 0x0
    Params_OnBringForward_Event params{};
    ProcessEvent(func, &params);
}
void AMapLocationActor::OnBringForward() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocationActor.OnBringForward"));
    struct Params_OnBringForward {
    }; // Size: 0x0
    Params_OnBringForward params{};
    ProcessEvent(func, &params);
}
void AMapLocationActor::OnActivateHighlight(bool Activate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocationActor.OnActivateHighlight"));
    struct Params_OnActivateHighlight {
        bool Activate; // 0x0
    }; // Size: 0x1
    Params_OnActivateHighlight params{};
    params.Activate = (bool)Activate;
    ProcessEvent(func, &params);
}
