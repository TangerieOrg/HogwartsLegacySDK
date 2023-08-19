#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_CombatLean.hpp"
UAblBlendSpaceParameterGetter_CombatLean* UAblBlendSpaceParameterGetter_CombatLean::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_CombatLean");
    return (UAblBlendSpaceParameterGetter_CombatLean*)res;
}
