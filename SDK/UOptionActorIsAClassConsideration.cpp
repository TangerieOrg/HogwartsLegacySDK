#include "UClass.hpp"
#include "UOptionActorIsAClassConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsAClassConsideration* UOptionActorIsAClassConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.OptionActorIsAClassConsideration");
    return (UOptionActorIsAClassConsideration*)res;
}
