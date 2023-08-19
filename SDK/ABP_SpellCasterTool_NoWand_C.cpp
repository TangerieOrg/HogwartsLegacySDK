#include "ABP_SpellCasterTool_NoWand_C.hpp"
#include "ASpellCasterTool.hpp"
ABP_SpellCasterTool_NoWand_C* ABP_SpellCasterTool_NoWand_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Items/SpellCaster/BP_SpellCasterTool_NoWand.BP_SpellCasterTool_NoWand_C");
    return (ABP_SpellCasterTool_NoWand_C*)res;
}
