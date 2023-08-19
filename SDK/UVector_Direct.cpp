#include "FVector.hpp"
#include "UVectorProvider.hpp"
#include "UVector_Direct.hpp"
UVector_Direct* UVector_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Vector_Direct");
    return (UVector_Direct*)res;
}
