#include "AActor.hpp"
#include "AInterestPoint.hpp"
#include "USceneComponent.hpp"
AInterestPoint* AInterestPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InterestPoint");
    return (AInterestPoint*)res;
}
