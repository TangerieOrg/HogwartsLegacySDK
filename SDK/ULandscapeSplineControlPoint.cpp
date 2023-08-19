#include "FBox.hpp"
#include "FLandscapeSplineConnection.hpp"
#include "FLandscapeSplineInterpPoint.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UControlPointMeshComponent.hpp"
#include "ULandscapeSplineControlPoint.hpp"
#include "UObject.hpp"
ULandscapeSplineControlPoint* ULandscapeSplineControlPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeSplineControlPoint");
    return (ULandscapeSplineControlPoint*)res;
}
