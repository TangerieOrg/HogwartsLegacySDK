#include "FBlackboardKeySelector.hpp"
#include "FGameplayTag.hpp"
#include "FInputContextWithType.hpp"
#include "UBTService_CameraBase.hpp"
#include "UBTService_CameraMain.hpp"
UBTService_CameraMain* UBTService_CameraMain::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_CameraMain");
    return (UBTService_CameraMain*)res;
}
