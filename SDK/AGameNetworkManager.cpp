#include "AGameNetworkManager.hpp"
#include "AInfo.hpp"
AGameNetworkManager* AGameNetworkManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.GameNetworkManager");
    return (AGameNetworkManager*)res;
}
