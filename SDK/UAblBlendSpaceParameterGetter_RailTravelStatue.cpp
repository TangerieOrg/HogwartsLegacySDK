#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_RailTravelStatue.hpp"
UAblBlendSpaceParameterGetter_RailTravelStatue* UAblBlendSpaceParameterGetter_RailTravelStatue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_RailTravelStatue");
    return (UAblBlendSpaceParameterGetter_RailTravelStatue*)res;
}
