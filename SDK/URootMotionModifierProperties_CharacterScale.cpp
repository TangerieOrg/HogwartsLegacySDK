#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_CharacterScale.hpp"
URootMotionModifierProperties_CharacterScale* URootMotionModifierProperties_CharacterScale::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_CharacterScale");
    return (URootMotionModifierProperties_CharacterScale*)res;
}
