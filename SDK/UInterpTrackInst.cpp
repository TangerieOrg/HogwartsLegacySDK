#include "UInterpTrackInst.hpp"
#include "UObject.hpp"
UInterpTrackInst* UInterpTrackInst::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInst");
    return (UInterpTrackInst*)res;
}
