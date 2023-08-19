#include "ULakeParameterGeneratorBase.hpp"
#include "UObject.hpp"
ULakeParameterGeneratorBase* ULakeParameterGeneratorBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Flow.LakeParameterGeneratorBase");
    return (ULakeParameterGeneratorBase*)res;
}
