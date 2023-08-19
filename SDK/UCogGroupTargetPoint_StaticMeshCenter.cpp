#include "UCogGroupTargetPoint.hpp"
#include "UCogGroupTargetPoint_StaticMeshCenter.hpp"
UCogGroupTargetPoint_StaticMeshCenter* UCogGroupTargetPoint_StaticMeshCenter::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupTargetPoint_StaticMeshCenter");
    return (UCogGroupTargetPoint_StaticMeshCenter*)res;
}
