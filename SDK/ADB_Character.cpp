#include "ABase_Character.hpp"
#include "ADB_Character.hpp"
#include "UAnimationComponent.hpp"
#include "UBipedStateComponent.hpp"
#include "UCustomizableCharacterComponent.hpp"
#include "UFacialComponent.hpp"
ADB_Character* ADB_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DB_Character");
    return (ADB_Character*)res;
}
