#include "UAblRagdollReactionAbility.hpp"
#include "UAblReactionAbility.hpp"
UAblRagdollReactionAbility* UAblRagdollReactionAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblRagdollReactionAbility");
    return (UAblRagdollReactionAbility*)res;
}
