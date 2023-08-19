#include "ADefault_Camera_C.hpp"
#include "ASceneRigCamera.hpp"
#include "UAnimationComponent.hpp"
#include "UCameraFixupComponent.hpp"
ADefault_Camera_C* ADefault_Camera_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Cinematics/Props/Default_Camera.Default_Camera_C");
    return (ADefault_Camera_C*)res;
}
