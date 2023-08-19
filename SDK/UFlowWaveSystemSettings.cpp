#include "FFlowWaveSystemSettingsData.hpp"
#include "UDataAsset.hpp"
#include "UFlowWaveSystemSettings.hpp"
UFlowWaveSystemSettings* UFlowWaveSystemSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.FlowWaveSystemSettings");
    return (UFlowWaveSystemSettings*)res;
}
