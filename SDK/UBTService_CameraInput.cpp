#include "FBlackboardKeySelector.hpp"
#include "FInputContextWithType.hpp"
#include "UBTService_CameraBase.hpp"
#include "UBTService_CameraInput.hpp"
UBTService_CameraInput* UBTService_CameraInput::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_CameraInput");
    return (UBTService_CameraInput*)res;
}
