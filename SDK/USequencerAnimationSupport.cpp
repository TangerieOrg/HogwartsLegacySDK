#include "UInterface.hpp"
#include "USequencerAnimationSupport.hpp"
USequencerAnimationSupport* USequencerAnimationSupport::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimGraphRuntime.SequencerAnimationSupport");
    return (USequencerAnimationSupport*)res;
}
