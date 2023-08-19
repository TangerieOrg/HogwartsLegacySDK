#include "UQualifierConsideration.hpp"
#include "USelfCanHerdSleepConsideration.hpp"
USelfCanHerdSleepConsideration* USelfCanHerdSleepConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCanHerdSleepConsideration");
    return (USelfCanHerdSleepConsideration*)res;
}
