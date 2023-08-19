#include "UAnimNotify.hpp"
#include "UAnimNotify_CreatureAttackImpact.hpp"
UAnimNotify_CreatureAttackImpact* UAnimNotify_CreatureAttackImpact::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_CreatureAttackImpact");
    return (UAnimNotify_CreatureAttackImpact*)res;
}
