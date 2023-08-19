#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_MountRiderHeadTurn.hpp"
UAblBlendSpaceParameterGetter_MountRiderHeadTurn* UAblBlendSpaceParameterGetter_MountRiderHeadTurn::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_MountRiderHeadTurn");
    return (UAblBlendSpaceParameterGetter_MountRiderHeadTurn*)res;
}
