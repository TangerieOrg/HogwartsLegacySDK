#include "AActor.hpp"
#include "UInterpTrackInst.hpp"
#include "UInterpTrackInstDirector.hpp"
UInterpTrackInstDirector* UInterpTrackInstDirector::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstDirector");
    return (UInterpTrackInstDirector*)res;
}
