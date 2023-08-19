#include "UEngineCustomTimeStep.hpp"
#include "UFixedFrameRateCustomTimeStep.hpp"
UFixedFrameRateCustomTimeStep* UFixedFrameRateCustomTimeStep::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeManagement.FixedFrameRateCustomTimeStep");
    return (UFixedFrameRateCustomTimeStep*)res;
}
