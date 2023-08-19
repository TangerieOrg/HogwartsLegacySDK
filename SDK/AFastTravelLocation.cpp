#include "AActor.hpp"
#include "AFastTravelLocation.hpp"
#include "FDbEditorButtonWidget.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
AFastTravelLocation* AFastTravelLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FastTravelLocation");
    return (AFastTravelLocation*)res;
}
void AFastTravelLocation::Handle_SetAvailable(bool availableIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelLocation.Handle_SetAvailable"));
    struct Params_Handle_SetAvailable {
        bool availableIn; // 0x0
    }; // Size: 0x1
    Params_Handle_SetAvailable params{};
    params.availableIn = (bool)availableIn;
    ProcessEvent(func, &params);
}
void AFastTravelLocation::Unlock() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelLocation.Unlock"));
    struct Params_Unlock {
    }; // Size: 0x0
    Params_Unlock params{};
    ProcessEvent(func, &params);
}
void AFastTravelLocation::SetAvailable(bool availableIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelLocation.SetAvailable"));
    struct Params_SetAvailable {
        bool availableIn; // 0x0
    }; // Size: 0x1
    Params_SetAvailable params{};
    params.availableIn = (bool)availableIn;
    ProcessEvent(func, &params);
}
void AFastTravelLocation::Lock() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelLocation.Lock"));
    struct Params_Lock {
    }; // Size: 0x0
    Params_Lock params{};
    ProcessEvent(func, &params);
}
void AFastTravelLocation::GetInteractLocationBP(FVector& WorldLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelLocation.GetInteractLocationBP"));
    struct Params_GetInteractLocationBP {
        FVector WorldLocation; // 0x0
    }; // Size: 0xc
    Params_GetInteractLocationBP params{};
    params.WorldLocation = (FVector)WorldLocation;
    ProcessEvent(func, &params);
    WorldLocation = params.WorldLocation;
}
bool AFastTravelLocation::GetAvailable() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelLocation.GetAvailable"));
    struct Params_GetAvailable {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAvailable params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AFastTravelLocation::AdjustCogTargetPoint(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelLocation.AdjustCogTargetPoint"));
    struct Params_AdjustCogTargetPoint {
        FVector Location; // 0x0
    }; // Size: 0xc
    Params_AdjustCogTargetPoint params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
}
void AFastTravelLocation::Activate(bool ACTIVE) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelLocation.Activate"));
    struct Params_Activate {
        bool ACTIVE; // 0x0
    }; // Size: 0x1
    Params_Activate params{};
    params.ACTIVE = (bool)ACTIVE;
    ProcessEvent(func, &params);
}
void AFastTravelLocation::AdjustBeaconWorldLocation(FString Name, FVector& WorldLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FastTravelLocation.AdjustBeaconWorldLocation"));
    struct Params_AdjustBeaconWorldLocation {
        FString Name; // 0x0
        FVector WorldLocation; // 0x10
    }; // Size: 0x1c
    Params_AdjustBeaconWorldLocation params{};
    params.Name = (FString)Name;
    params.WorldLocation = (FVector)WorldLocation;
    ProcessEvent(func, &params);
    WorldLocation = params.WorldLocation;
}
