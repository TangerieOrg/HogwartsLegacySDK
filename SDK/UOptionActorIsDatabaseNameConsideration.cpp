#include "UOptionActorIsDatabaseNameConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsDatabaseNameConsideration* UOptionActorIsDatabaseNameConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsDatabaseNameConsideration");
    return (UOptionActorIsDatabaseNameConsideration*)res;
}
