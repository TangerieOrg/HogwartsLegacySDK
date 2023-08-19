#include "UClass.hpp"
#include "UQualifierConsideration.hpp"
#include "USelfActorIsAClassConsideration.hpp"
USelfActorIsAClassConsideration* USelfActorIsAClassConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.SelfActorIsAClassConsideration");
    return (USelfActorIsAClassConsideration*)res;
}
