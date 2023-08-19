#include "FBlackboardKeySelector.hpp"
#include "UBTService_CameraBase.hpp"
#include "UBTService_CameraCombat.hpp"
UBTService_CameraCombat* UBTService_CameraCombat::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_CameraCombat");
    return (UBTService_CameraCombat*)res;
}
