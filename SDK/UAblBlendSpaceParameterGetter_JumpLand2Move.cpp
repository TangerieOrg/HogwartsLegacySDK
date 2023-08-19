#include "UAblBlendSpaceParameterGetter.hpp"
#include "UAblBlendSpaceParameterGetter_JumpLand2Move.hpp"
UAblBlendSpaceParameterGetter_JumpLand2Move* UAblBlendSpaceParameterGetter_JumpLand2Move::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBlendSpaceParameterGetter_JumpLand2Move");
    return (UAblBlendSpaceParameterGetter_JumpLand2Move*)res;
}
