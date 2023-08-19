#include "UActorProvider.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_CharacterHeight.hpp"
UTransform_CharacterHeight* UTransform_CharacterHeight::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Transform_CharacterHeight");
    return (UTransform_CharacterHeight*)res;
}
