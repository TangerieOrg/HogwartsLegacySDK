#include "FRuntimeCurveVector2D.hpp"
#include "UVector2DProvider.hpp"
#include "UVector2D_Curve.hpp"
UVector2D_Curve* UVector2D_Curve::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Vector2D_Curve");
    return (UVector2D_Curve*)res;
}
