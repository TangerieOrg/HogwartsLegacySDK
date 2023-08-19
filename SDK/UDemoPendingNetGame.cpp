#include "UDemoPendingNetGame.hpp"
#include "UPendingNetGame.hpp"
UDemoPendingNetGame* UDemoPendingNetGame::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DemoPendingNetGame");
    return (UDemoPendingNetGame*)res;
}
