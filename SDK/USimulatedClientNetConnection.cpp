#include "UNetConnection.hpp"
#include "USimulatedClientNetConnection.hpp"
USimulatedClientNetConnection* USimulatedClientNetConnection::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SimulatedClientNetConnection");
    return (USimulatedClientNetConnection*)res;
}
