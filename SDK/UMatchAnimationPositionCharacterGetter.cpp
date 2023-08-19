#include "UMatchAnimationPositionCharacterGetter.hpp"
#include "UObject.hpp"
UMatchAnimationPositionCharacterGetter* UMatchAnimationPositionCharacterGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MatchAnimationPositionCharacterGetter");
    return (UMatchAnimationPositionCharacterGetter*)res;
}
