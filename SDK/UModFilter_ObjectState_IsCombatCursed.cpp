#include "UModFilter_ObjectState_Base.hpp"
#include "UModFilter_ObjectState_IsCombatCursed.hpp"
UModFilter_ObjectState_IsCombatCursed* UModFilter_ObjectState_IsCombatCursed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_ObjectState_IsCombatCursed");
    return (UModFilter_ObjectState_IsCombatCursed*)res;
}
