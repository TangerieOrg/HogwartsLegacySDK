#include "URPGCondition.hpp"
#include "URPGCondition_PlayerOrCompanionInCombat.hpp"
URPGCondition_PlayerOrCompanionInCombat* URPGCondition_PlayerOrCompanionInCombat::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGCondition_PlayerOrCompanionInCombat");
    return (URPGCondition_PlayerOrCompanionInCombat*)res;
}
