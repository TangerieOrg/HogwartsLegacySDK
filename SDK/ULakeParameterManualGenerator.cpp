#include "ULakeParameterGenerator.hpp"
#include "ULakeParameterManualGenerator.hpp"
ULakeParameterManualGenerator* ULakeParameterManualGenerator::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.LakeParameterManualGenerator");
    return (ULakeParameterManualGenerator*)res;
}
