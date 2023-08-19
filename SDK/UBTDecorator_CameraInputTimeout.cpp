#include "UBTDecorator.hpp"
#include "UBTDecorator_CameraInputTimeout.hpp"
UBTDecorator_CameraInputTimeout* UBTDecorator_CameraInputTimeout::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTDecorator_CameraInputTimeout");
    return (UBTDecorator_CameraInputTimeout*)res;
}
