#include "FOdcPathSpec.hpp"
#include "UEnvQueryTest.hpp"
#include "UOdcEnvQueryTest_SphereFit.hpp"
UOdcEnvQueryTest_SphereFit* UOdcEnvQueryTest_SphereFit::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.OdcEnvQueryTest_SphereFit");
    return (UOdcEnvQueryTest_SphereFit*)res;
}
