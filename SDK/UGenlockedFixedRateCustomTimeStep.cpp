#include "FFrameRate.hpp"
#include "UGenlockedCustomTimeStep.hpp"
#include "UGenlockedFixedRateCustomTimeStep.hpp"
UGenlockedFixedRateCustomTimeStep* UGenlockedFixedRateCustomTimeStep::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeManagement.GenlockedFixedRateCustomTimeStep");
    return (UGenlockedFixedRateCustomTimeStep*)res;
}
