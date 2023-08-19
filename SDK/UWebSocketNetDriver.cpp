#include "UNetDriver.hpp"
#include "UWebSocketNetDriver.hpp"
UWebSocketNetDriver* UWebSocketNetDriver::StaticClass() {
    static auto res = find_uobject("Class /Script/WebSocketNetworking.WebSocketNetDriver");
    return (UWebSocketNetDriver*)res;
}
