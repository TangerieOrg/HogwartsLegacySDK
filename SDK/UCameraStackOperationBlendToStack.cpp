#include "UCameraStackOperationBase.hpp"
#include "UCameraStackOperationBlendToStack.hpp"
#include "UCameraStackSettings.hpp"
UCameraStackOperationBlendToStack* UCameraStackOperationBlendToStack::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackOperationBlendToStack");
    return (UCameraStackOperationBlendToStack*)res;
}
