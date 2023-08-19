#include "UActorProvider.hpp"
#include "UActor_SanctuaryZoneStreaming.hpp"
UActor_SanctuaryZoneStreaming* UActor_SanctuaryZoneStreaming::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_SanctuaryZoneStreaming");
    return (UActor_SanctuaryZoneStreaming*)res;
}
