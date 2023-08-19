#include "UCogGroupTargetPoint.hpp"
#include "UCogGroupTargetPoint_CustomRelative.hpp"
UCogGroupTargetPoint_CustomRelative* UCogGroupTargetPoint_CustomRelative::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupTargetPoint_CustomRelative");
    return (UCogGroupTargetPoint_CustomRelative*)res;
}
