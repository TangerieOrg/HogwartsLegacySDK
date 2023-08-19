#include "UCrowdManagerBase.hpp"
#include "UObject.hpp"
UCrowdManagerBase* UCrowdManagerBase::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.CrowdManagerBase");
    return (UCrowdManagerBase*)res;
}
