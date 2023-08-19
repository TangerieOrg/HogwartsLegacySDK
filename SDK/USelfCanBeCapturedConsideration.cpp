#include "UQualifierConsideration.hpp"
#include "USelfCanBeCapturedConsideration.hpp"
USelfCanBeCapturedConsideration* USelfCanBeCapturedConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfCanBeCapturedConsideration");
    return (USelfCanBeCapturedConsideration*)res;
}
