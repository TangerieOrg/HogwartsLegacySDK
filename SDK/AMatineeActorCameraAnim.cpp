#include "AMatineeActor.hpp"
#include "AMatineeActorCameraAnim.hpp"
#include "UCameraAnim.hpp"
AMatineeActorCameraAnim* AMatineeActorCameraAnim::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MatineeActorCameraAnim");
    return (AMatineeActorCameraAnim*)res;
}
