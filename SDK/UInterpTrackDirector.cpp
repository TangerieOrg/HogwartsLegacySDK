#include "FDirectorTrackCut.hpp"
#include "UInterpTrack.hpp"
#include "UInterpTrackDirector.hpp"
UInterpTrackDirector* UInterpTrackDirector::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackDirector");
    return (UInterpTrackDirector*)res;
}
