#include "FBlackboardKeySelector.hpp"
#include "UBTService_CameraBase.hpp"
#include "UBTService_CameraMount.hpp"
UBTService_CameraMount* UBTService_CameraMount::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_CameraMount");
    return (UBTService_CameraMount*)res;
}
