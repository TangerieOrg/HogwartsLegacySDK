#include "ULakeParameterGeneratorBase.hpp"
#include "ULakeParameterPresetGenerator.hpp"
#include "ULakeParametersPreset.hpp"
ULakeParameterPresetGenerator* ULakeParameterPresetGenerator::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.LakeParameterPresetGenerator");
    return (ULakeParameterPresetGenerator*)res;
}
