#include "UDEPRECATED_FXAutoTriggerDefinitionBatchAsset.hpp"
#include "UDataAsset.hpp"
UDEPRECATED_FXAutoTriggerDefinitionBatchAsset* UDEPRECATED_FXAutoTriggerDefinitionBatchAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerDefinitionBatchAsset");
    return (UDEPRECATED_FXAutoTriggerDefinitionBatchAsset*)res;
}
