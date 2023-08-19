#include "UActorProvider.hpp"
#include "UActor_StageRoot.hpp"
UActor_StageRoot* UActor_StageRoot::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Actor_StageRoot");
    return (UActor_StageRoot*)res;
}
