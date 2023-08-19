#include "UAkAudioEvent.hpp"
#include "UMultiFX2_Sfx.hpp"
#include "UMultiFX2_SfxEndSfx.hpp"
UMultiFX2_SfxEndSfx* UMultiFX2_SfxEndSfx::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_SfxEndSfx");
    return (UMultiFX2_SfxEndSfx*)res;
}
