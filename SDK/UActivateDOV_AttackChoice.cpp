#include "UActivateDOV_AttackChoice.hpp"
#include "UEnemy_AttackChoice.hpp"
UActivateDOV_AttackChoice* UActivateDOV_AttackChoice::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ActivateDOV_AttackChoice");
    return (UActivateDOV_AttackChoice*)res;
}
