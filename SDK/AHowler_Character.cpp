#include "ACharacter.hpp"
#include "AHowler_Character.hpp"
AHowler_Character* AHowler_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Howler_Character");
    return (AHowler_Character*)res;
}
