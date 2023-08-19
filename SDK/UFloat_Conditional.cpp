#include "UBoolProvider.hpp"
#include "UFloatProvider.hpp"
#include "UFloat_Conditional.hpp"
UFloat_Conditional* UFloat_Conditional::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Float_Conditional");
    return (UFloat_Conditional*)res;
}
