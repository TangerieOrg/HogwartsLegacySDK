#include "AActor.hpp"
#include "ARaceGhostOrb.hpp"
#include "UFunction.hpp"
ARaceGhostOrb* ARaceGhostOrb::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RaceGhostOrb");
    return (ARaceGhostOrb*)res;
}
void ARaceGhostOrb::OnFinishedCourse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RaceGhostOrb.OnFinishedCourse"));
    struct Params_OnFinishedCourse {
    }; // Size: 0x0
    Params_OnFinishedCourse params{};
    ProcessEvent(func, &params);
}
