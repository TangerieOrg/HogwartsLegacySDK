#include "FBlackboardKeySelector.hpp"
#include "UGroupCoordinatedTagLocationsQualifierOptions.hpp"
#include "UQualifierOptions.hpp"
UGroupCoordinatedTagLocationsQualifierOptions* UGroupCoordinatedTagLocationsQualifierOptions::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.GroupCoordinatedTagLocationsQualifierOptions");
    return (UGroupCoordinatedTagLocationsQualifierOptions*)res;
}
