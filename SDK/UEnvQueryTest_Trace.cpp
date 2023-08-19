#include "FAIDataProviderBoolValue.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "FEnvTraceData.hpp"
#include "UClass.hpp"
#include "UEnvQueryTest.hpp"
#include "UEnvQueryTest_Trace.hpp"
UEnvQueryTest_Trace* UEnvQueryTest_Trace::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryTest_Trace");
    return (UEnvQueryTest_Trace*)res;
}
