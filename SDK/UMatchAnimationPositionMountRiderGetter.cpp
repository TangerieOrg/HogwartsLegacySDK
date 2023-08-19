#include "UMatchAnimationPositionCharacterGetter.hpp"
#include "UMatchAnimationPositionMountRiderGetter.hpp"
UMatchAnimationPositionMountRiderGetter* UMatchAnimationPositionMountRiderGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MatchAnimationPositionMountRiderGetter");
    return (UMatchAnimationPositionMountRiderGetter*)res;
}
