#include "FAnimationRequestLayerReference.hpp"
#include "USceneAction_StitchTester.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_StitchTester* USceneAction_StitchTester::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_StitchTester");
    return (USceneAction_StitchTester*)res;
}
