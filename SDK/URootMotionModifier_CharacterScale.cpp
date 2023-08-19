#include "URootMotionModifier.hpp"
#include "URootMotionModifier_CharacterScale.hpp"
URootMotionModifier_CharacterScale* URootMotionModifier_CharacterScale::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_CharacterScale");
    return (URootMotionModifier_CharacterScale*)res;
}
