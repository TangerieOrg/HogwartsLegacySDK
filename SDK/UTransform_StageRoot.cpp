#include "UTransformProvider.hpp"
#include "UTransform_StageRoot.hpp"
UTransform_StageRoot* UTransform_StageRoot::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Transform_StageRoot");
    return (UTransform_StageRoot*)res;
}
