#include "ELightAdapatationEVModOp.hpp"
#include "FLerpVolumesLevelName.hpp"
#include "UDynamicLightAdaptationModSettingsInLevelBase.hpp"
#include "UDynamicLightAdaptationModSettingsInterface.hpp"
UDynamicLightAdaptationModSettingsInLevelBase* UDynamicLightAdaptationModSettingsInLevelBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DynamicLightAdaptationModSettingsInLevelBase");
    return (UDynamicLightAdaptationModSettingsInLevelBase*)res;
}
