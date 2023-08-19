#include "UQualifierConsideration.hpp"
#include "USelfIsInteractionNeedMetConsideration.hpp"
USelfIsInteractionNeedMetConsideration* USelfIsInteractionNeedMetConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfIsInteractionNeedMetConsideration");
    return (USelfIsInteractionNeedMetConsideration*)res;
}
