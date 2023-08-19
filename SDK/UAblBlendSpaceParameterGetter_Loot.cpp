#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_Loot.hpp"
UAblBlendSpaceParameterGetter_Loot* UAblBlendSpaceParameterGetter_Loot::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_Loot");
    return (UAblBlendSpaceParameterGetter_Loot*)res;
}
