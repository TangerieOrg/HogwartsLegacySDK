#include "URPGCondition.hpp"
#include "URPGCondition_PlayerInCombat.hpp"
URPGCondition_PlayerInCombat* URPGCondition_PlayerInCombat::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGCondition_PlayerInCombat");
    return (URPGCondition_PlayerInCombat*)res;
}
