#include "AAOESpellTool.hpp"
#include "ABP_Spell_Spider_BurrowAoe_C.hpp"
#include "USceneComponent.hpp"
ABP_Spell_Spider_BurrowAoe_C* ABP_Spell_Spider_BurrowAoe_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Spider/BP_Spell_Spider_BurrowAoe.BP_Spell_Spider_BurrowAoe_C");
    return (ABP_Spell_Spider_BurrowAoe_C*)res;
}
