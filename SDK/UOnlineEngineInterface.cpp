#include "UObject.hpp"
#include "UOnlineEngineInterface.hpp"
UOnlineEngineInterface* UOnlineEngineInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.OnlineEngineInterface");
    return (UOnlineEngineInterface*)res;
}
