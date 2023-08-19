#include "ECameraStackAnimationSelection.hpp"
#include "FCameraStackAnimData.hpp"
#include "UAblAbilityTask.hpp"
#include "UAblCameraStackAnimationTask.hpp"
#include "UAnimSequence.hpp"
UAblCameraStackAnimationTask* UAblCameraStackAnimationTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCameraStackAnimationTask");
    return (UAblCameraStackAnimationTask*)res;
}
