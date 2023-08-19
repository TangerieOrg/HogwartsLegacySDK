#include "UDemoNetDriver.hpp"
#include "UNetDriver.hpp"
#include "UObject.hpp"
#include "UPendingNetGame.hpp"
UPendingNetGame* UPendingNetGame::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PendingNetGame");
    return (UPendingNetGame*)res;
}
