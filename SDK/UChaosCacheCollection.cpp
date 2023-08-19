#include "UChaosCache.hpp"
#include "UChaosCacheCollection.hpp"
#include "UObject.hpp"
UChaosCacheCollection* UChaosCacheCollection::StaticClass() {
    static auto res = find_uobject("Class /Script/ChaosCaching.ChaosCacheCollection");
    return (UChaosCacheCollection*)res;
}
