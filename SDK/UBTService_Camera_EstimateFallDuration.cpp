#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#include "UBTService_Camera_EstimateFallDuration.hpp"
UBTService_Camera_EstimateFallDuration* UBTService_Camera_EstimateFallDuration::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Camera_EstimateFallDuration");
    return (UBTService_Camera_EstimateFallDuration*)res;
}
