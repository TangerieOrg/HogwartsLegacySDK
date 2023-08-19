#include "AActor.hpp"
#include "AAvaAudioLocationActor.hpp"
AAvaAudioLocationActor* AAvaAudioLocationActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvaAudioLocationActor");
    return (AAvaAudioLocationActor*)res;
}
