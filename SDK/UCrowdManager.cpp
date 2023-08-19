#include "ANavigationData.hpp"
#include "FCrowdAvoidanceConfig.hpp"
#include "FCrowdAvoidanceSamplingPattern.hpp"
#include "UCrowdManager.hpp"
#include "UCrowdManagerBase.hpp"
UCrowdManager* UCrowdManager::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.CrowdManager");
    return (UCrowdManager*)res;
}
