#include "AMissionEntryPoint.hpp"
#include "ATriggerBox.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UCognitionStimuliSourceComponent.hpp"
#include "UMissionEntryPointEffectComponent.hpp"
#include "USceneComponent.hpp"
AMissionEntryPoint* AMissionEntryPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MissionEntryPoint");
    return (AMissionEntryPoint*)res;
}
