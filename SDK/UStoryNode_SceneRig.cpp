#include "ETimeRigInitializingBehavior.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneRig.hpp"
#include "USceneRigProvider.hpp"
#include "UStoryNode_SceneRig.hpp"
#include "UStoryNode_Script.hpp"
UStoryNode_SceneRig* UStoryNode_SceneRig::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.StoryNode_SceneRig");
    return (UStoryNode_SceneRig*)res;
}
USceneRig* UStoryNode_SceneRig::GetSceneRigBP(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.StoryNode_SceneRig.GetSceneRigBP"));
    struct Params_GetSceneRigBP {
        UObject* Caller; // 0x0
        USceneRig* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetSceneRigBP params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
    return (USceneRig*)params.ReturnValue;
}
