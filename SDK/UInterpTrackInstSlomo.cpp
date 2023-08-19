#include "UInterpTrackInst.hpp"
#include "UInterpTrackInstSlomo.hpp"
UInterpTrackInstSlomo* UInterpTrackInstSlomo::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstSlomo");
    return (UInterpTrackInstSlomo*)res;
}
