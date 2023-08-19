#include "AMunitionType_Potion.hpp"
#include "AMunitionType_SubsonicSpell.hpp"
AMunitionType_Potion* AMunitionType_Potion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MunitionType_Potion");
    return (AMunitionType_Potion*)res;
}
