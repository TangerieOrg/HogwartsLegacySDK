#include "AActor.hpp"
#include "ARace.hpp"
#include "ARaceGate.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
void ARaceGate::OnRaceFinished(bool bNewBestTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RaceGate.OnRaceFinished"));
    struct Params_OnRaceFinished {
        bool bNewBestTime; // 0x0
    }; // Size: 0x1
    Params_OnRaceFinished params{};
    params.bNewBestTime = (bool)bNewBestTime;
    ProcessEvent(func, &params);
}
ARaceGate* ARaceGate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RaceGate");
    return (ARaceGate*)res;
}
void ARaceGate::OnMissGate(bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RaceGate.OnMissGate"));
    struct Params_OnMissGate {
        bool bSuccess; // 0x0
    }; // Size: 0x1
    Params_OnMissGate params{};
    params.bSuccess = (bool)bSuccess;
    ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
FVector ARaceGate::GetSplineTrackOffset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RaceGate.GetSplineTrackOffset"));
    struct Params_GetSplineTrackOffset {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetSplineTrackOffset params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void ARaceGate::OnHitGate(bool& bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RaceGate.OnHitGate"));
    struct Params_OnHitGate {
        bool bSuccess; // 0x0
    }; // Size: 0x1
    Params_OnHitGate params{};
    params.bSuccess = (bool)bSuccess;
    ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void ARaceGate::OnGateDeactivated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RaceGate.OnGateDeactivated"));
    struct Params_OnGateDeactivated {
    }; // Size: 0x0
    Params_OnGateDeactivated params{};
    ProcessEvent(func, &params);
}
void ARaceGate::OnGateActivated() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RaceGate.OnGateActivated"));
    struct Params_OnGateActivated {
    }; // Size: 0x0
    Params_OnGateActivated params{};
    ProcessEvent(func, &params);
}
bool ARaceGate::IsGateActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RaceGate.IsGateActive"));
    struct Params_IsGateActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsGateActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
