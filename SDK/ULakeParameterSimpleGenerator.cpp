#include "ULakeParameterGenerator.hpp"
#include "ULakeParameterSimpleGenerator.hpp"
ULakeParameterSimpleGenerator* ULakeParameterSimpleGenerator::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.LakeParameterSimpleGenerator");
    return (ULakeParameterSimpleGenerator*)res;
}
