#include "UAblAnimTransitionInOverriderer.hpp"
#include "UAblAnimTransitionInOverriderer_Enemy.hpp"
UAblAnimTransitionInOverriderer_Enemy* UAblAnimTransitionInOverriderer_Enemy::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimTransitionInOverriderer_Enemy");
    return (UAblAnimTransitionInOverriderer_Enemy*)res;
}
