#include "UAblAbilityTask.hpp"
#include "UAblSetAllowRMMomentum.hpp"
UAblSetAllowRMMomentum* UAblSetAllowRMMomentum::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetAllowRMMomentum");
    return (UAblSetAllowRMMomentum*)res;
}
