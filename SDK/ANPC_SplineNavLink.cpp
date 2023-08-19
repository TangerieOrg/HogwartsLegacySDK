#include "ANPC_Spline.hpp"
#include "ANPC_SplineNavLink.hpp"
#include "FNPC_JumpSplineData.hpp"
#include "USplineNavLinkComponent.hpp"
ANPC_SplineNavLink* ANPC_SplineNavLink::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_SplineNavLink");
    return (ANPC_SplineNavLink*)res;
}
