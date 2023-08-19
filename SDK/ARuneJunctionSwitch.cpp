#include "AActor.hpp"
#include "ARuneJunctionSwitch.hpp"
#include "ARuneSwitch.hpp"
#include "UFunction.hpp"
ARuneJunctionSwitch* ARuneJunctionSwitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RuneJunctionSwitch");
    return (ARuneJunctionSwitch*)res;
}
void ARuneJunctionSwitch::RuneHitBySpell(ARuneSwitch* RuneSwitch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RuneJunctionSwitch.RuneHitBySpell"));
    struct Params_RuneHitBySpell {
        ARuneSwitch* RuneSwitch; // 0x0
    }; // Size: 0x8
    Params_RuneHitBySpell params{};
    params.RuneSwitch = (ARuneSwitch*)RuneSwitch;
    ProcessEvent(func, &params);
}
