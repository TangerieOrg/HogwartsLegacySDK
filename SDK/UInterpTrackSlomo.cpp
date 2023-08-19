#include "UInterpTrackFloatBase.hpp"
#include "UInterpTrackSlomo.hpp"
UInterpTrackSlomo* UInterpTrackSlomo::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackSlomo");
    return (UInterpTrackSlomo*)res;
}
