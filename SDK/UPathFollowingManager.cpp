#include "UObject.hpp"
#include "UPathFollowingManager.hpp"
UPathFollowingManager* UPathFollowingManager::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.PathFollowingManager");
    return (UPathFollowingManager*)res;
}
