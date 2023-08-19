#include "UCurveLinearColor.hpp"
#include "UCurveLinearColorAtlas.hpp"
#include "UFunction.hpp"
#include "UTexture2D.hpp"
UCurveLinearColorAtlas* UCurveLinearColorAtlas::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CurveLinearColorAtlas");
    return (UCurveLinearColorAtlas*)res;
}
bool UCurveLinearColorAtlas::GetCurvePosition(UCurveLinearColor* InCurve, float& Position) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CurveLinearColorAtlas.GetCurvePosition"));
    struct Params_GetCurvePosition {
        UCurveLinearColor* InCurve; // 0x0
        float Position; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetCurvePosition params{};
    params.InCurve = (UCurveLinearColor*)InCurve;
    params.Position = (float)Position;
    ProcessEvent(func, &params);
    Position = params.Position;
    return (bool)params.ReturnValue;
}
