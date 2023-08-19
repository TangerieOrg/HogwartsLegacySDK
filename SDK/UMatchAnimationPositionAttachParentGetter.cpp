#include "UMatchAnimationPositionAttachParentGetter.hpp"
#include "UMatchAnimationPositionCharacterGetter.hpp"
UMatchAnimationPositionAttachParentGetter* UMatchAnimationPositionAttachParentGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MatchAnimationPositionAttachParentGetter");
    return (UMatchAnimationPositionAttachParentGetter*)res;
}
