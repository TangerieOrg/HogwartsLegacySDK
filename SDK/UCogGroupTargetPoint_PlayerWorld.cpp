#include "UCogGroupTargetPoint.hpp"
#include "UCogGroupTargetPoint_PlayerWorld.hpp"
UCogGroupTargetPoint_PlayerWorld* UCogGroupTargetPoint_PlayerWorld::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupTargetPoint_PlayerWorld");
    return (UCogGroupTargetPoint_PlayerWorld*)res;
}
