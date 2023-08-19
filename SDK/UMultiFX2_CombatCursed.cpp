#include "UMultiFX2_CombatCursed.hpp"
#include "UMultiFX2_Filtered.hpp"
UMultiFX2_CombatCursed* UMultiFX2_CombatCursed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_CombatCursed");
    return (UMultiFX2_CombatCursed*)res;
}
