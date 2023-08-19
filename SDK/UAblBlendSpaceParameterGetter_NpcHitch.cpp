#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_NpcHitch.hpp"
UAblBlendSpaceParameterGetter_NpcHitch* UAblBlendSpaceParameterGetter_NpcHitch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_NpcHitch");
    return (UAblBlendSpaceParameterGetter_NpcHitch*)res;
}
