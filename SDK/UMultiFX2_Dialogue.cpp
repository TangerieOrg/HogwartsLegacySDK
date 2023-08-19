#include "AvaAudioDialogueFlags.hpp"
#include "UAvaAudioDialogueEvent.hpp"
#include "UMultiFX2_Dialogue.hpp"
#include "UMultiFX2_Filtered.hpp"
UMultiFX2_Dialogue* UMultiFX2_Dialogue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_Dialogue");
    return (UMultiFX2_Dialogue*)res;
}
