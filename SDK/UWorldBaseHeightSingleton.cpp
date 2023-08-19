#include "FWorldBaseHeights.hpp"
#include "FWorldBaseHeightsTracker.hpp"
#include "UObject.hpp"
#include "UWorld.hpp"
#include "UWorldBaseHeightSingleton.hpp"
UWorldBaseHeightSingleton* UWorldBaseHeightSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.WorldBaseHeightSingleton");
    return (UWorldBaseHeightSingleton*)res;
}
