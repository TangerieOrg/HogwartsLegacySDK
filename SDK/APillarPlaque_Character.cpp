#include "ADB_Character.hpp"
#include "APillarPlaque_Character.hpp"
APillarPlaque_Character* APillarPlaque_Character::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PillarPlaque_Character");
    return (APillarPlaque_Character*)res;
}
