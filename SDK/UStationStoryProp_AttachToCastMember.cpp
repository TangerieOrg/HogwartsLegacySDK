#include "FSceneRigStageRole.hpp"
#include "UStationStoryPropAttachment.hpp"
#include "UStationStoryProp_AttachToCastMember.hpp"
UStationStoryProp_AttachToCastMember* UStationStoryProp_AttachToCastMember::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StationStoryProp_AttachToCastMember");
    return (UStationStoryProp_AttachToCastMember*)res;
}
