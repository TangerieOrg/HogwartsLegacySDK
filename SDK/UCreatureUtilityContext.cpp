#include "AActor.hpp"
#include "ACreature_Character.hpp"
#include "UCreatureDefinition.hpp"
#include "UCreatureState.hpp"
#include "UCreatureUtilityContext.hpp"
#include "UObjectStateInfo.hpp"
#include "UUtilityContext.hpp"
UCreatureUtilityContext* UCreatureUtilityContext::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureUtilityContext");
    return (UCreatureUtilityContext*)res;
}
