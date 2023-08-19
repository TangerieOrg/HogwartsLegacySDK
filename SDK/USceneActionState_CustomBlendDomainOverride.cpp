#include "USceneActionState_CustomBlendDomainOverride.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_CustomBlendDomainOverride* USceneActionState_CustomBlendDomainOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_CustomBlendDomainOverride");
    return (USceneActionState_CustomBlendDomainOverride*)res;
}
