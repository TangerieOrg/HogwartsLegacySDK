#include "AMunitionType_Base.hpp"
#include "AMunitionType_SuperSonicSpell.hpp"
#include "ASpellTool.hpp"
AMunitionType_SuperSonicSpell* AMunitionType_SuperSonicSpell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MunitionType_SuperSonicSpell");
    return (AMunitionType_SuperSonicSpell*)res;
}
