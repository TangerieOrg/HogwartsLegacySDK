#include "UBP_PitchToFocalLength_Default_C.hpp"
#include "UCameraStackBehaviorPitchToFocalLength.hpp"
UBP_PitchToFocalLength_Default_C* UBP_PitchToFocalLength_Default_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Data/Camera/Behaviors/BP_PitchToFocalLength_Default.BP_PitchToFocalLength_Default_C");
    return (UBP_PitchToFocalLength_Default_C*)res;
}
