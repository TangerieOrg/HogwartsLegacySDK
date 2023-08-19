#include "AMunitionType_AccioSubsonicSpell.hpp"
#include "AMunitionType_SubsonicSpell.hpp"
AMunitionType_AccioSubsonicSpell* AMunitionType_AccioSubsonicSpell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MunitionType_AccioSubsonicSpell");
    return (AMunitionType_AccioSubsonicSpell*)res;
}
