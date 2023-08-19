#include "UOptionActorGreetTimeIntervalConsideration.hpp"
#include "UQualifierConsideration.hpp"
UOptionActorGreetTimeIntervalConsideration* UOptionActorGreetTimeIntervalConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionActorGreetTimeIntervalConsideration");
    return (UOptionActorGreetTimeIntervalConsideration*)res;
}
