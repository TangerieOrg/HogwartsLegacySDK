#include "UInterpTrackInst.hpp"
#include "UInterpTrackInstProperty.hpp"
#include "UObject.hpp"
UInterpTrackInstProperty* UInterpTrackInstProperty::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstProperty");
    return (UInterpTrackInstProperty*)res;
}
