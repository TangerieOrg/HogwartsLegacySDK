#include "UBTService.hpp"
#include "UBTService_Camera_DisableInput.hpp"
UBTService_Camera_DisableInput* UBTService_Camera_DisableInput::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.BTService_Camera_DisableInput");
    return (UBTService_Camera_DisableInput*)res;
}
