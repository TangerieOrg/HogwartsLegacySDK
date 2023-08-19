#include "UUberExposureComponent.hpp"
#include "UUberExposureComponentExposureExpression.hpp"
UUberExposureComponentExposureExpression* UUberExposureComponentExposureExpression::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.UberExposureComponentExposureExpression");
    return (UUberExposureComponentExposureExpression*)res;
}
