#include "AMunitionType_AttackHitbox.hpp"
#include "AMunitionType_Hitbox.hpp"
AMunitionType_AttackHitbox* AMunitionType_AttackHitbox::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MunitionType_AttackHitbox");
    return (AMunitionType_AttackHitbox*)res;
}
