#include "UQualifierConsideration.hpp"
#include "USelfGrazingConsideration.hpp"
USelfGrazingConsideration* USelfGrazingConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfGrazingConsideration");
    return (USelfGrazingConsideration*)res;
}
