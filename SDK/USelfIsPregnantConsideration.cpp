#include "UQualifierConsideration.hpp"
#include "USelfIsPregnantConsideration.hpp"
USelfIsPregnantConsideration* USelfIsPregnantConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfIsPregnantConsideration");
    return (USelfIsPregnantConsideration*)res;
}
