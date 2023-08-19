#include "UInterpTrackVectorBase.hpp"
#include "UInterpTrackVectorProp.hpp"
UInterpTrackVectorProp* UInterpTrackVectorProp::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackVectorProp");
    return (UInterpTrackVectorProp*)res;
}
