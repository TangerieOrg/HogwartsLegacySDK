#include "ADraingingDraughtOrb.hpp"
#include "AMunitionType_SubsonicSpell.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
ADraingingDraughtOrb* ADraingingDraughtOrb::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DraingingDraughtOrb");
    return (ADraingingDraughtOrb*)res;
}
void ADraingingDraughtOrb::Attack() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DraingingDraughtOrb.Attack"));
    struct Params_Attack {
    }; // Size: 0x0
    Params_Attack params{};
    ProcessEvent(func, &params);
}
