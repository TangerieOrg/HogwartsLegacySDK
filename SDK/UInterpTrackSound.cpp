#include "FSoundTrackKey.hpp"
#include "UInterpTrackSound.hpp"
#include "UInterpTrackVectorBase.hpp"
UInterpTrackSound* UInterpTrackSound::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpTrackSound");
    return (UInterpTrackSound*)res;
}
