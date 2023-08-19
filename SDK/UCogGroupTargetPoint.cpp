#include "UCogGroupTargetPoint.hpp"
#include "UObject.hpp"
UCogGroupTargetPoint* UCogGroupTargetPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupTargetPoint");
    return (UCogGroupTargetPoint*)res;
}
