#include "ACharacter.hpp"
#include "ACine_Character.hpp"
ACine_Character* ACine_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Cine_Character");
    return (ACine_Character*)res;
}
