#include "UOptionActorIsCapturingSelfActorConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorIsCapturingSelfActorConsideration* UOptionActorIsCapturingSelfActorConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorIsCapturingSelfActorConsideration");
    return (UOptionActorIsCapturingSelfActorConsideration*)res;
}
