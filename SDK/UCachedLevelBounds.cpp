#include "UCachedLevelBounds.hpp"
#include "UObject.hpp"
UCachedLevelBounds* UCachedLevelBounds::StaticClass() {
    static auto res = find_uobject("Class /Script/CachedLevelBounds.CachedLevelBounds");
    return (UCachedLevelBounds*)res;
}
