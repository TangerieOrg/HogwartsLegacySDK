#include "UDemoNetConnection.hpp"
#include "UNetConnection.hpp"
UDemoNetConnection* UDemoNetConnection::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DemoNetConnection");
    return (UDemoNetConnection*)res;
}
