#include "UMemoryUsageManager.hpp"
#include "UObject.hpp"
UMemoryUsageManager* UMemoryUsageManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MemoryUsageManager");
    return (UMemoryUsageManager*)res;
}
