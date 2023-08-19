#include "UBP_PitchToFocalLength_Aiming_C.hpp"
#include "UCameraStackBehaviorPitchToFocalLength.hpp"
UBP_PitchToFocalLength_Aiming_C* UBP_PitchToFocalLength_Aiming_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_PitchToFocalLength_Aiming.BP_PitchToFocalLength_Aiming_C");
    return (UBP_PitchToFocalLength_Aiming_C*)res;
}
