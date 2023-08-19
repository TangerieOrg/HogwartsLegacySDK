#include "UDataAsset.hpp"
#include "ULakeParameterGenerator.hpp"
#include "ULakeParametersPreset.hpp"
ULakeParametersPreset* ULakeParametersPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.LakeParametersPreset");
    return (ULakeParametersPreset*)res;
}
