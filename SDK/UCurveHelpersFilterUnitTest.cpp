#include "UCurveHelpersFilterUnitTest.hpp"
#include "UCurveHelpersUnitTest.hpp"
UCurveHelpersFilterUnitTest* UCurveHelpersFilterUnitTest::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.CurveHelpersFilterUnitTest");
    return (UCurveHelpersFilterUnitTest*)res;
}
