#include "UActorProvider.hpp"
#include "UTransformProvider.hpp"
#include "UTransform_CharacterVerticalOffset.hpp"
UTransform_CharacterVerticalOffset* UTransform_CharacterVerticalOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Transform_CharacterVerticalOffset");
    return (UTransform_CharacterVerticalOffset*)res;
}
