#include "UBTService.hpp"
#include "UBTService_CameraBase.hpp"
UBTService_CameraBase* UBTService_CameraBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_CameraBase");
    return (UBTService_CameraBase*)res;
}
