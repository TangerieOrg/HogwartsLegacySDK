#include "UAudioComponent.hpp"
#include "UInterpTrackInst.hpp"
#include "UInterpTrackInstSound.hpp"
UInterpTrackInstSound* UInterpTrackInstSound::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackInstSound");
    return (UInterpTrackInstSound*)res;
}
