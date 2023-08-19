#include "AActor.hpp"
#include "AWorldEventLocationActor.hpp"
#include "FGameplayTagContainer.hpp"
#include "FWorldEventTimeSpan.hpp"
#include "UFunction.hpp"
#include "UWorldEventCondition.hpp"
#include "UWorldEventSocketComponent.hpp"
AWorldEventLocationActor* AWorldEventLocationActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventLocationActor");
    return (AWorldEventLocationActor*)res;
}
bool AWorldEventLocationActor::UseForcedWorldEventSubset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventLocationActor.UseForcedWorldEventSubset"));
    struct Params_UseForcedWorldEventSubset {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_UseForcedWorldEventSubset params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AWorldEventLocationActor::UseForcedWorldEventName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventLocationActor.UseForcedWorldEventName"));
    struct Params_UseForcedWorldEventName {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_UseForcedWorldEventName params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UWorldEventSocketComponent* AWorldEventLocationActor::RequestSocket(FGameplayTagContainer& SocketDescriptors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventLocationActor.RequestSocket"));
    struct Params_RequestSocket {
        FGameplayTagContainer SocketDescriptors; // 0x0
        UWorldEventSocketComponent* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_RequestSocket params{};
    params.SocketDescriptors = (FGameplayTagContainer)SocketDescriptors;
    ProcessEvent(func, &params);
    SocketDescriptors = params.SocketDescriptors;
    return (UWorldEventSocketComponent*)params.ReturnValue;
}
FName AWorldEventLocationActor::GetLocatorName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventLocationActor.GetLocatorName"));
    struct Params_GetLocatorName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLocatorName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void AWorldEventLocationActor::StreamingHandle() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventLocationActor.StreamingHandle"));
    struct Params_StreamingHandle {
    }; // Size: 0x0
    Params_StreamingHandle params{};
    ProcessEvent(func, &params);
}
void AWorldEventLocationActor::ReleaseAllSockets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventLocationActor.ReleaseAllSockets"));
    struct Params_ReleaseAllSockets {
    }; // Size: 0x0
    Params_ReleaseAllSockets params{};
    ProcessEvent(func, &params);
}
FName AWorldEventLocationActor::GetForcedWorldEventName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventLocationActor.GetForcedWorldEventName"));
    struct Params_GetForcedWorldEventName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetForcedWorldEventName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
int32_t AWorldEventLocationActor::GetNumberOfSockets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventLocationActor.GetNumberOfSockets"));
    struct Params_GetNumberOfSockets {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumberOfSockets params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void AWorldEventLocationActor::SetLocatorName(FName& Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventLocationActor.SetLocatorName"));
    struct Params_SetLocatorName {
        FName Name; // 0x0
    }; // Size: 0x8
    Params_SetLocatorName params{};
    params.Name = (FName)Name;
    ProcessEvent(func, &params);
    Name = params.Name;
}
void AWorldEventLocationActor::OnEventNaturalEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventLocationActor.OnEventNaturalEnd"));
    struct Params_OnEventNaturalEnd {
    }; // Size: 0x0
    Params_OnEventNaturalEnd params{};
    ProcessEvent(func, &params);
}
void AWorldEventLocationActor::MarkEventAsCompleted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventLocationActor.MarkEventAsCompleted"));
    struct Params_MarkEventAsCompleted {
    }; // Size: 0x0
    Params_MarkEventAsCompleted params{};
    ProcessEvent(func, &params);
}
int32_t AWorldEventLocationActor::GetPercentChanceOfBeingSelected() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventLocationActor.GetPercentChanceOfBeingSelected"));
    struct Params_GetPercentChanceOfBeingSelected {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetPercentChanceOfBeingSelected params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FGameplayTagContainer AWorldEventLocationActor::GetLocationDescriptors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventLocationActor.GetLocationDescriptors"));
    struct Params_GetLocationDescriptors {
        FGameplayTagContainer ReturnValue; // 0x0
    }; // Size: 0x20
    Params_GetLocationDescriptors params{};
    ProcessEvent(func, &params);
    return (FGameplayTagContainer)params.ReturnValue;
}
FName AWorldEventLocationActor::GetForcedWorldEventSubset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventLocationActor.GetForcedWorldEventSubset"));
    struct Params_GetForcedWorldEventSubset {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetForcedWorldEventSubset params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
TArray<void*> AWorldEventLocationActor::GetConditions() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventLocationActor.GetConditions"));
    struct Params_GetConditions {
        TArray<void*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetConditions params{};
    ProcessEvent(func, &params);
    return (TArray<void*>)params.ReturnValue;
}
