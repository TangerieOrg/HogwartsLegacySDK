#include "UHandlerComponentFactory.hpp"
#include "UObject.hpp"
UHandlerComponentFactory* UHandlerComponentFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/PacketHandler.HandlerComponentFactory");
    return (UHandlerComponentFactory*)res;
}
