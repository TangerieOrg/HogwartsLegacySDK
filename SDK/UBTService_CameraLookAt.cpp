#include "FBlackboardKeySelector.hpp"
#include "UBTService_CameraBase.hpp"
#include "UBTService_CameraLookAt.hpp"
UBTService_CameraLookAt* UBTService_CameraLookAt::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_CameraLookAt");
    return (UBTService_CameraLookAt*)res;
}
