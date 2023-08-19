#include "FSceneRigRegisteredActorReference.hpp"
#include "UActorProvider.hpp"
#include "UActor_Registered.hpp"
UActor_Registered* UActor_Registered::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Actor_Registered");
    return (UActor_Registered*)res;
}
