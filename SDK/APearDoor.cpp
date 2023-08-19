#include "ADoor.hpp"
#include "APearDoor.hpp"
#include "UFunction.hpp"
#include "ULockableComponent.hpp"
#include "UObject.hpp"
APearDoor* APearDoor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PearDoor");
    return (APearDoor*)res;
}
void APearDoor::TickleThePear(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PearDoor.TickleThePear"));
    struct Params_TickleThePear {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_TickleThePear params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
