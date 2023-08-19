#include "AActor.hpp"
#include "FTransform.hpp"
#include "USceneActionState_StitchTester.hpp"
#include "USceneActionState_Transform.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_StitchTester* USceneActionState_StitchTester::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_StitchTester");
    return (USceneActionState_StitchTester*)res;
}
