#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblCameraStackAnimationTaskScratchPad.hpp"
#include "UAnimSequence.hpp"
UAblCameraStackAnimationTaskScratchPad* UAblCameraStackAnimationTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCameraStackAnimationTaskScratchPad");
    return (UAblCameraStackAnimationTaskScratchPad*)res;
}
