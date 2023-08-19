#include "UInGameAdManager.hpp"
#include "UPlatformInterfaceBase.hpp"
UInGameAdManager* UInGameAdManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InGameAdManager");
    return (UInGameAdManager*)res;
}
