#include "UTargetTypeBase.hpp"
#include "UTargetTypeDesiredDirection.hpp"
UTargetTypeDesiredDirection* UTargetTypeDesiredDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.TargetTypeDesiredDirection");
    return (UTargetTypeDesiredDirection*)res;
}
