#include "FEasingFunction.hpp"
#include "UCurveHelpersEaseUnitTest.hpp"
#include "UCurveHelpersSimpleUnitTest.hpp"
UCurveHelpersEaseUnitTest* UCurveHelpersEaseUnitTest::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.CurveHelpersEaseUnitTest");
    return (UCurveHelpersEaseUnitTest*)res;
}
