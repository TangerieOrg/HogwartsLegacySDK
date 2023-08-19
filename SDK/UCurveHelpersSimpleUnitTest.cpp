#include "UCurveHelpersSimpleUnitTest.hpp"
#include "UCurveHelpersUnitTest.hpp"
UCurveHelpersSimpleUnitTest* UCurveHelpersSimpleUnitTest::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.CurveHelpersSimpleUnitTest");
    return (UCurveHelpersSimpleUnitTest*)res;
}
