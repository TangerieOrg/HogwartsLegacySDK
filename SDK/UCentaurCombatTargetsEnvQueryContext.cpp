#include "UCentaurCombatTargetsEnvQueryContext.hpp"
#include "UEnvQueryContext.hpp"
UCentaurCombatTargetsEnvQueryContext* UCentaurCombatTargetsEnvQueryContext::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CentaurCombatTargetsEnvQueryContext");
    return (UCentaurCombatTargetsEnvQueryContext*)res;
}
