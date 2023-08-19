#include "UQualifierConsideration.hpp"
#include "USelfIsInConflictConsideration.hpp"
USelfIsInConflictConsideration* USelfIsInConflictConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfIsInConflictConsideration");
    return (USelfIsInConflictConsideration*)res;
}
