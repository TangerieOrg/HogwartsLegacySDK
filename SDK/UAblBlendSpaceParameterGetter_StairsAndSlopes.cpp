#include "EStairsDirectionState\Type.hpp"
#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_StairsAndSlopes.hpp"
UAblBlendSpaceParameterGetter_StairsAndSlopes* UAblBlendSpaceParameterGetter_StairsAndSlopes::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_StairsAndSlopes");
    return (UAblBlendSpaceParameterGetter_StairsAndSlopes*)res;
}
