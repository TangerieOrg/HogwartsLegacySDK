#include "UQualifierConsideration.hpp"
#include "USelfIsAdultConsideration.hpp"
USelfIsAdultConsideration* USelfIsAdultConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfIsAdultConsideration");
    return (USelfIsAdultConsideration*)res;
}
