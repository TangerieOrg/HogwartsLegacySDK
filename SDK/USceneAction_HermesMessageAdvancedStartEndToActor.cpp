#include "UActorProvider.hpp"
#include "USceneAction_HermesMessageAdvancedStartEnd.hpp"
#include "USceneAction_HermesMessageAdvancedStartEndToActor.hpp"
USceneAction_HermesMessageAdvancedStartEndToActor* USceneAction_HermesMessageAdvancedStartEndToActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_HermesMessageAdvancedStartEndToActor");
    return (USceneAction_HermesMessageAdvancedStartEndToActor*)res;
}
