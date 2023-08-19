#include "AAnimationArchitect_Character.hpp"
#include "AUIDummyActor.hpp"
#include "UFunction.hpp"
#include "UObjectStateComponent.hpp"
AUIDummyActor* AUIDummyActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UIDummyActor");
    return (AUIDummyActor*)res;
}
void AUIDummyActor::ShowDummy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIDummyActor.ShowDummy"));
    struct Params_ShowDummy {
    }; // Size: 0x0
    Params_ShowDummy params{};
    ProcessEvent(func, &params);
}
void AUIDummyActor::HideDummy() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UIDummyActor.HideDummy"));
    struct Params_HideDummy {
    }; // Size: 0x0
    Params_HideDummy params{};
    ProcessEvent(func, &params);
}
