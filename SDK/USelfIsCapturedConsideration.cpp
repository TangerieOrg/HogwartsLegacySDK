#include "UQualifierConsideration.hpp"
#include "USelfIsCapturedConsideration.hpp"
USelfIsCapturedConsideration* USelfIsCapturedConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfIsCapturedConsideration");
    return (USelfIsCapturedConsideration*)res;
}
