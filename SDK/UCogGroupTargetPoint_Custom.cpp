#include "UCogGroupTargetPoint.hpp"
#include "UCogGroupTargetPoint_Custom.hpp"
UCogGroupTargetPoint_Custom* UCogGroupTargetPoint_Custom::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupTargetPoint_Custom");
    return (UCogGroupTargetPoint_Custom*)res;
}
