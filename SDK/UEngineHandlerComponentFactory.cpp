#include "UEngineHandlerComponentFactory.hpp"
#include "UHandlerComponentFactory.hpp"
UEngineHandlerComponentFactory* UEngineHandlerComponentFactory::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.EngineHandlerComponentFactory");
    return (UEngineHandlerComponentFactory*)res;
}
