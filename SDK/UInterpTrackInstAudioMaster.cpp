#include "UInterpTrackInst.hpp"
#include "UInterpTrackInstAudioMaster.hpp"
UInterpTrackInstAudioMaster* UInterpTrackInstAudioMaster::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstAudioMaster");
    return (UInterpTrackInstAudioMaster*)res;
}
