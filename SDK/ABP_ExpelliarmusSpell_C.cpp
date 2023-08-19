#include "ABP_ExpelliarmusSpell_C.hpp"
#include "AExpelliarmusSpellTool.hpp"
#include "USceneComponent.hpp"
ABP_ExpelliarmusSpell_C* ABP_ExpelliarmusSpell_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Expelliarmus/BP_ExpelliarmusSpell.BP_ExpelliarmusSpell_C");
    return (ABP_ExpelliarmusSpell_C*)res;
}
