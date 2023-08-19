#include "FSceneRigStageRole.hpp"
#include "UObject.hpp"
#include "UStationStoryProp.hpp"
#include "UStationStoryPropAttachment.hpp"
UStationStoryProp* UStationStoryProp::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StationStoryProp");
    return (UStationStoryProp*)res;
}
