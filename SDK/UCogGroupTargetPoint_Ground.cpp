#include "UCogGroupTargetPoint.hpp"
#include "UCogGroupTargetPoint_Ground.hpp"
UCogGroupTargetPoint_Ground* UCogGroupTargetPoint_Ground::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupTargetPoint_Ground");
    return (UCogGroupTargetPoint_Ground*)res;
}
