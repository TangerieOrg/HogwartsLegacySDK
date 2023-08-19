#include "UOptionActorNumberOfTagsOfTypeGroupCoordinationConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorNumberOfTagsOfTypeGroupCoordinationConsideration* UOptionActorNumberOfTagsOfTypeGroupCoordinationConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorNumberOfTagsOfTypeGroupCoordinationConsideration");
    return (UOptionActorNumberOfTagsOfTypeGroupCoordinationConsideration*)res;
}
