#include "USceneActionState_AccessibilitySubtitle.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_AccessibilitySubtitle* USceneActionState_AccessibilitySubtitle::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_AccessibilitySubtitle");
    return (USceneActionState_AccessibilitySubtitle*)res;
}
