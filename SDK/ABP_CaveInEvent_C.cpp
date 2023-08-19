#include "AActor.hpp"
#include "ABP_CaveInEvent_C.hpp"
#include "ABP_spiderweb_C.hpp"
#include "ATriggerVolume.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_CaveInElement.hpp"
#include "FVector.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void ABP_CaveInEvent_C::UserConstructionScript0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CaveInEvent.BP_CaveInEvent_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
ABP_CaveInEvent_C* ABP_CaveInEvent_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_CaveInEvent.BP_CaveInEvent_C");
    return (ABP_CaveInEvent_C*)res;
}
void ABP_CaveInEvent_C::SwitchOff(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CaveInEvent.BP_CaveInEvent_C.SwitchOff"));
    struct Params_SwitchOff {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOff params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_CaveInEvent_C::ProcessEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CaveInEvent.BP_CaveInEvent_C.ProcessEvent"));
    struct Params_ProcessEvent {
    }; // Size: 0x0
    Params_ProcessEvent params{};
    ProcessEvent(func, &params);
}
void ABP_CaveInEvent_C::WebOnFire(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CaveInEvent.BP_CaveInEvent_C.WebOnFire"));
    struct Params_WebOnFire {
        FVector Location; // 0x0
    }; // Size: 0xc
    Params_WebOnFire params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
void ABP_CaveInEvent_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CaveInEvent.BP_CaveInEvent_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_CaveInEvent_C::SwitchOn(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CaveInEvent.BP_CaveInEvent_C.SwitchOn"));
    struct Params_SwitchOn {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOn params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_CaveInEvent_C::OnActorBeginOverlap_Event_0(AActor* OverlappedActor, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_CaveInEvent.BP_CaveInEvent_C.OnActorBeginOverlap_Event_0"));
    struct Params_OnActorBeginOverlap_Event_0 {
        AActor* OverlappedActor; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnActorBeginOverlap_Event_0 params{};
    params.OverlappedActor = (AActor*)OverlappedActor;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void ABP_CaveInEvent_C::ExecuteUbergraph_BP_CaveInEvent(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable) {}
