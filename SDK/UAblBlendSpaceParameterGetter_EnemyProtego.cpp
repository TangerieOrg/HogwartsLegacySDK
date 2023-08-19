#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_EnemyProtego.hpp"
UAblBlendSpaceParameterGetter_EnemyProtego* UAblBlendSpaceParameterGetter_EnemyProtego::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_EnemyProtego");
    return (UAblBlendSpaceParameterGetter_EnemyProtego*)res;
}
