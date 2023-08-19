#include "UObject.hpp"
#include "UTestHoudiniParameterBuilder.hpp"
UTestHoudiniParameterBuilder* UTestHoudiniParameterBuilder::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.TestHoudiniParameterBuilder");
    return (UTestHoudiniParameterBuilder*)res;
}
