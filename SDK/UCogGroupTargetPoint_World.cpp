#include "UCogGroupTargetPoint.hpp"
#include "UCogGroupTargetPoint_World.hpp"
UCogGroupTargetPoint_World* UCogGroupTargetPoint_World::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupTargetPoint_World");
    return (UCogGroupTargetPoint_World*)res;
}
