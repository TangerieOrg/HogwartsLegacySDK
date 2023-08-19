#include "ULightMobilityManager.hpp"
#include "UObject.hpp"
#include "UWorld.hpp"
ULightMobilityManager* ULightMobilityManager::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.LightMobilityManager");
    return (ULightMobilityManager*)res;
}
