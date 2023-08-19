#include "UAkAudioEvent.hpp"
#include "UFXEnd.hpp"
#include "UMultiFX2End_Sfx.hpp"
UMultiFX2End_Sfx* UMultiFX2End_Sfx::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2End_Sfx");
    return (UMultiFX2End_Sfx*)res;
}
