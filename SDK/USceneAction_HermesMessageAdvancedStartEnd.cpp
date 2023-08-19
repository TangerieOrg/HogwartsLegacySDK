#include "FHermesMessageAdvancedDynamicPayload.hpp"
#include "USceneAction_HermesMessageAdvanced.hpp"
#include "USceneAction_HermesMessageAdvancedStartEnd.hpp"
USceneAction_HermesMessageAdvancedStartEnd* USceneAction_HermesMessageAdvancedStartEnd::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_HermesMessageAdvancedStartEnd");
    return (USceneAction_HermesMessageAdvancedStartEnd*)res;
}
