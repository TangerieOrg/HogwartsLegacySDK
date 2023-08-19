#include "AAble_Character.hpp"
#include "APatronus_Character.hpp"
#include "UAnimationComponent.hpp"
APatronus_Character* APatronus_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Patronus_Character");
    return (APatronus_Character*)res;
}
