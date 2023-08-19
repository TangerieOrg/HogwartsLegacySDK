#include "UActivateDOV_AttackExtraData.hpp"
#include "UEnemy_AttackExtraData.hpp"
UActivateDOV_AttackExtraData* UActivateDOV_AttackExtraData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ActivateDOV_AttackExtraData");
    return (UActivateDOV_AttackExtraData*)res;
}
