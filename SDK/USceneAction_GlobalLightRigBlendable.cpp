#include "EGlobalLightingSimpleFogZMode.hpp"
#include "FBlendDomain.hpp"
#include "UGlobalLightingBlendable.hpp"
#include "USceneAction_GlobalLightRigBlendable.hpp"
#include "USceneRigActionBase.hpp"
#include "UTransformProvider.hpp"
USceneAction_GlobalLightRigBlendable* USceneAction_GlobalLightRigBlendable::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_GlobalLightRigBlendable");
    return (USceneAction_GlobalLightRigBlendable*)res;
}
