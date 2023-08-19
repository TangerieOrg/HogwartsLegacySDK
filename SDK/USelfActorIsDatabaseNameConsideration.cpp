#include "UQualifierConsideration.hpp"
#include "USelfActorIsDatabaseNameConsideration.hpp"
USelfActorIsDatabaseNameConsideration* USelfActorIsDatabaseNameConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfActorIsDatabaseNameConsideration");
    return (USelfActorIsDatabaseNameConsideration*)res;
}
