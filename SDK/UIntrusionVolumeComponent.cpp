#include "AActor.hpp"
#include "ANPC_Character.hpp"
#include "FEventDateTime.hpp"
#include "FStatList.hpp"
#include "UFunction.hpp"
#include "UIntrusionVolumeComponent.hpp"
#include "USceneComponent.hpp"
#include "USceneRig_Intrusion.hpp"
void UIntrusionVolumeComponent::OnCaught() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntrusionVolumeComponent.OnCaught"));
    struct Params_OnCaught {
    }; // Size: 0x0
    Params_OnCaught params{};
    ProcessEvent(func, &params);
}
UIntrusionVolumeComponent* UIntrusionVolumeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.IntrusionVolumeComponent");
    return (UIntrusionVolumeComponent*)res;
}
FEventDateTime UIntrusionVolumeComponent::WhenWillPlayerBeDisallowed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntrusionVolumeComponent.WhenWillPlayerBeDisallowed"));
    struct Params_WhenWillPlayerBeDisallowed {
        FEventDateTime ReturnValue; // 0x0
    }; // Size: 0x40
    Params_WhenWillPlayerBeDisallowed params{};
    ProcessEvent(func, &params);
    return (FEventDateTime)params.ReturnValue;
}
void UIntrusionVolumeComponent::OnIntrusionPerceptionDone(ANPC_Character* InNPC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntrusionVolumeComponent.OnIntrusionPerceptionDone"));
    struct Params_OnIntrusionPerceptionDone {
        ANPC_Character* InNPC; // 0x0
    }; // Size: 0x8
    Params_OnIntrusionPerceptionDone params{};
    params.InNPC = (ANPC_Character*)InNPC;
    ProcessEvent(func, &params);
}
void UIntrusionVolumeComponent::PlayIntrusionSceneRig(ANPC_Character* InNPC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntrusionVolumeComponent.PlayIntrusionSceneRig"));
    struct Params_PlayIntrusionSceneRig {
        ANPC_Character* InNPC; // 0x0
    }; // Size: 0x8
    Params_PlayIntrusionSceneRig params{};
    params.InNPC = (ANPC_Character*)InNPC;
    ProcessEvent(func, &params);
}
FEventDateTime UIntrusionVolumeComponent::WhenWillPlayerBeAllowed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntrusionVolumeComponent.WhenWillPlayerBeAllowed"));
    struct Params_WhenWillPlayerBeAllowed {
        FEventDateTime ReturnValue; // 0x0
    }; // Size: 0x40
    Params_WhenWillPlayerBeAllowed params{};
    ProcessEvent(func, &params);
    return (FEventDateTime)params.ReturnValue;
}
void UIntrusionVolumeComponent::OnActorEndOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntrusionVolumeComponent.OnActorEndOverlap"));
    struct Params_OnActorEndOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnActorEndOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void UIntrusionVolumeComponent::OnActorBeginOverlap(AActor* SelfActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntrusionVolumeComponent.OnActorBeginOverlap"));
    struct Params_OnActorBeginOverlap {
        AActor* SelfActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnActorBeginOverlap params{};
    params.SelfActor = (AActor*)SelfActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
bool UIntrusionVolumeComponent::IsPlayerInIntrusionArea() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntrusionVolumeComponent.IsPlayerInIntrusionArea"));
    struct Params_IsPlayerInIntrusionArea {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayerInIntrusionArea params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UIntrusionVolumeComponent::IsPlayerAllowed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntrusionVolumeComponent.IsPlayerAllowed"));
    struct Params_IsPlayerAllowed {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlayerAllowed params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UIntrusionVolumeComponent::EnableIntrusion(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IntrusionVolumeComponent.EnableIntrusion"));
    struct Params_EnableIntrusion {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_EnableIntrusion params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
