#include "UNetConnection.hpp"
#include "UWebSocketConnection.hpp"
UWebSocketConnection* UWebSocketConnection::StaticClass() {
    static auto res = find_uobject("Class /Script/WebSocketNetworking.WebSocketConnection");
    return (UWebSocketConnection*)res;
}
