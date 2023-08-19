#include "UQualifierConsideration.hpp"
#include "USelfIsPerchedConsideration.hpp"
USelfIsPerchedConsideration* USelfIsPerchedConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.SelfIsPerchedConsideration");
    return (USelfIsPerchedConsideration*)res;
}
