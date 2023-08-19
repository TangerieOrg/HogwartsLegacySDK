#include "UBTDecorator.hpp"
#include "UBTDecorator_CameraContext.hpp"
UBTDecorator_CameraContext* UBTDecorator_CameraContext::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTDecorator_CameraContext");
    return (UBTDecorator_CameraContext*)res;
}
