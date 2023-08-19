#include "USceneAction_AccessibilitySubtitle.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_AccessibilitySubtitle* USceneAction_AccessibilitySubtitle::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_AccessibilitySubtitle");
    return (USceneAction_AccessibilitySubtitle*)res;
}
