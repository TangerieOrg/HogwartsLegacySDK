#include "AActor.hpp"
#include "AWindTunnel.hpp"
#include "EDrawDebugTrace\Type.hpp"
#include "UArrowComponent.hpp"
#include "UFunction.hpp"
#include "UStaticMeshComponent.hpp"
AWindTunnel* AWindTunnel::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WindTunnel");
    return (AWindTunnel*)res;
}
void AWindTunnel::StopDoor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WindTunnel.StopDoor"));
    struct Params_StopDoor {
    }; // Size: 0x0
    Params_StopDoor params{};
    ProcessEvent(func, &params);
}
void AWindTunnel::OpenDoor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WindTunnel.OpenDoor"));
    struct Params_OpenDoor {
    }; // Size: 0x0
    Params_OpenDoor params{};
    ProcessEvent(func, &params);
}
void AWindTunnel::CloseDoor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WindTunnel.CloseDoor"));
    struct Params_CloseDoor {
    }; // Size: 0x0
    Params_CloseDoor params{};
    ProcessEvent(func, &params);
}
void AWindTunnel::ApplyWind() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WindTunnel.ApplyWind"));
    struct Params_ApplyWind {
    }; // Size: 0x0
    Params_ApplyWind params{};
    ProcessEvent(func, &params);
}
