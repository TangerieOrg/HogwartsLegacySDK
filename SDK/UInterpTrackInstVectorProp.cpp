#include "FVector.hpp"
#include "UInterpTrackInstProperty.hpp"
#include "UInterpTrackInstVectorProp.hpp"
UInterpTrackInstVectorProp* UInterpTrackInstVectorProp::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstVectorProp");
    return (UInterpTrackInstVectorProp*)res;
}
