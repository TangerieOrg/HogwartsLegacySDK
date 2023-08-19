#include "UAnimInstance.hpp"
#include "UAnimSequencerInstance.hpp"
UAnimSequencerInstance* UAnimSequencerInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/AnimGraphRuntime.AnimSequencerInstance");
    return (UAnimSequencerInstance*)res;
}
