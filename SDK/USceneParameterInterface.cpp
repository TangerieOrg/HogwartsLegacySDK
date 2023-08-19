#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UObject.hpp"
#include "USceneParameterInterface.hpp"
#include "USceneRigStageParameterBlock.hpp"
USceneParameterInterface* USceneParameterInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneParameterInterface");
    return (USceneParameterInterface*)res;
}
USceneRigStageParameterBlock* USceneParameterInterface::CreateParameterBlock(UObject* OuterObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.SceneParameterInterface.CreateParameterBlock"));
    struct Params_CreateParameterBlock {
        UObject* OuterObject; // 0x0
        USceneRigStageParameterBlock* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CreateParameterBlock params{};
    params.OuterObject = (UObject*)OuterObject;
    ProcessEvent(func, &params);
    return (USceneRigStageParameterBlock*)params.ReturnValue;
}
