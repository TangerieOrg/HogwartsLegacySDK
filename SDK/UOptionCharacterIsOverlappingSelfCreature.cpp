#include "UOptionCharacterIsOverlappingSelfCreature.hpp"
#include "UQualifierConsideration.hpp"
UOptionCharacterIsOverlappingSelfCreature* UOptionCharacterIsOverlappingSelfCreature::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.OptionCharacterIsOverlappingSelfCreature");
    return (UOptionCharacterIsOverlappingSelfCreature*)res;
}
