#include "UAIHotSpotManager.hpp"
#include "UObject.hpp"
UAIHotSpotManager* UAIHotSpotManager::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AIHotSpotManager");
    return (UAIHotSpotManager*)res;
}
