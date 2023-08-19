#include "UBTDecorator_CameraActiveInputTimeout.hpp"
#include "UBTDecorator_CameraInputTimeout.hpp"
UBTDecorator_CameraActiveInputTimeout* UBTDecorator_CameraActiveInputTimeout::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTDecorator_CameraActiveInputTimeout");
    return (UBTDecorator_CameraActiveInputTimeout*)res;
}
