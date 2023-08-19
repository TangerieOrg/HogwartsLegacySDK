#include "UAblAbilityTask.hpp"
#include "UAblZeroVelocity.hpp"
UAblZeroVelocity* UAblZeroVelocity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblZeroVelocity");
    return (UAblZeroVelocity*)res;
}
