#include "UAblBranchCondition.hpp"
#include "UAblBranchFromLightDirectional.hpp"
UAblBranchFromLightDirectional* UAblBranchFromLightDirectional::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchFromLightDirectional");
    return (UAblBranchFromLightDirectional*)res;
}
