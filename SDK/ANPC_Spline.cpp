#include "AActor.hpp"
#include "ANPC_Spline.hpp"
#include "UArrowComponent.hpp"
#include "USplineComponent.hpp"
ANPC_Spline* ANPC_Spline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_Spline");
    return (ANPC_Spline*)res;
}
