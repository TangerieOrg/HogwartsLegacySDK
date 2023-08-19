#include "FBox.hpp"
#include "FInterpCurveVector.hpp"
#include "FLandscapeSplineInterpPoint.hpp"
#include "FLandscapeSplineSegmentConnection.hpp"
#include "ULandscapeSplineSegment.hpp"
#include "UObject.hpp"
#include "USplineMeshComponent.hpp"
ULandscapeSplineSegment* ULandscapeSplineSegment::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeSplineSegment");
    return (ULandscapeSplineSegment*)res;
}
