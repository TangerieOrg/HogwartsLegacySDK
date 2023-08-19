#include "UCogGroupTargetPoint.hpp"
#include "UCogGroupTargetPoint_ClosestPointOnCollision.hpp"
UCogGroupTargetPoint_ClosestPointOnCollision* UCogGroupTargetPoint_ClosestPointOnCollision::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupTargetPoint_ClosestPointOnCollision");
    return (UCogGroupTargetPoint_ClosestPointOnCollision*)res;
}
