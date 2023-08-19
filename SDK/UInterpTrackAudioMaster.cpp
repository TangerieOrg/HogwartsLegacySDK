#include "UInterpTrackAudioMaster.hpp"
#include "UInterpTrackVectorBase.hpp"
UInterpTrackAudioMaster* UInterpTrackAudioMaster::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackAudioMaster");
    return (UInterpTrackAudioMaster*)res;
}
