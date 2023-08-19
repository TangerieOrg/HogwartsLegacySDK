#include "UABL_Spell_Learning_Start_C.hpp"
#include "UAblAbility.hpp"
UABL_Spell_Learning_Start_C* UABL_Spell_Learning_Start_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Student/Abilities/SpellLearning/ABL_Spell_Learning_Start.ABL_Spell_Learning_Start_C");
    return (UABL_Spell_Learning_Start_C*)res;
}
