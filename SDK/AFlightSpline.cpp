#include "AActor.hpp"
#include "AFlightSpline.hpp"
AFlightSpline* AFlightSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlightSpline");
    return (AFlightSpline*)res;
}
