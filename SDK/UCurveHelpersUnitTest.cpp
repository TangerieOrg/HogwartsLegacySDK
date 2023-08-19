#include "FCurveBuildingParams.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UCurveHelpersUnitTest.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
UCurveHelpersUnitTest* UCurveHelpersUnitTest::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.CurveHelpersUnitTest");
    return (UCurveHelpersUnitTest*)res;
}
void UCurveHelpersUnitTest::Update() {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.CurveHelpersUnitTest.Update"));
    struct Params_Update {
    }; // Size: 0x0
    Params_Update params{};
    ProcessEvent(func, &params);
}
