#include "ABP_StupefyHeavySpell_C.hpp"
#include "AStupefySpellTool.hpp"
#include "USceneComponent.hpp"
ABP_StupefyHeavySpell_C* ABP_StupefyHeavySpell_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Stupefy/BP_StupefyHeavySpell.BP_StupefyHeavySpell_C");
    return (ABP_StupefyHeavySpell_C*)res;
}
