#include "UAnimLayerInterface.hpp"
#include "UInterface.hpp"
UAnimLayerInterface* UAnimLayerInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimLayerInterface");
    return (UAnimLayerInterface*)res;
}
