#include "FVector2D.hpp"
#include "ULakeParameterGenerator.hpp"
#include "ULakeParameterGeneratorBase.hpp"
#include "UMaterialInterface.hpp"
ULakeParameterGenerator* ULakeParameterGenerator::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.LakeParameterGenerator");
    return (ULakeParameterGenerator*)res;
}
