#include "UFixedFrameRateCustomTimeStep.hpp"
#include "UGenlockedCustomTimeStep.hpp"
UGenlockedCustomTimeStep* UGenlockedCustomTimeStep::StaticClass() {
    static auto res = find_uobject("Class /Script/TimeManagement.GenlockedCustomTimeStep");
    return (UGenlockedCustomTimeStep*)res;
}
