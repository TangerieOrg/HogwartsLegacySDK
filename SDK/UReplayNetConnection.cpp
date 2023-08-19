#include "UNetConnection.hpp"
#include "UReplayNetConnection.hpp"
UReplayNetConnection* UReplayNetConnection::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ReplayNetConnection");
    return (UReplayNetConnection*)res;
}
