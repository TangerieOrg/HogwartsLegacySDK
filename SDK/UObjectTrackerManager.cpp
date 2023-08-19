#include "UObject.hpp"
#include "UObjectTrackerManager.hpp"
UObjectTrackerManager* UObjectTrackerManager::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.ObjectTrackerManager");
    return (UObjectTrackerManager*)res;
}
