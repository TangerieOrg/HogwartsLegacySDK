#include "AActor.hpp"
#include "AMapPathSpline.hpp"
AMapPathSpline* AMapPathSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapPathSpline");
    return (AMapPathSpline*)res;
}
