#include "ABP_LeviosoSpell_C.hpp"
#include "ALeviosoSpellTool.hpp"
#include "USceneComponent.hpp"
ABP_LeviosoSpell_C* ABP_LeviosoSpell_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Levioso/BP_LeviosoSpell.BP_LeviosoSpell_C");
    return (ABP_LeviosoSpell_C*)res;
}
