#include "USceneActionState_EmissiveAdaptation.hpp"
#include "USceneActionState_EmissiveAdaptationBase.hpp"
USceneActionState_EmissiveAdaptation* USceneActionState_EmissiveAdaptation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_EmissiveAdaptation");
    return (USceneActionState_EmissiveAdaptation*)res;
}
