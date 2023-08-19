#include "AActor.hpp"
#include "ALinkActor.hpp"
#include "ELinkType.hpp"
#include "FOdcFlags.hpp"
#include "FVector.hpp"
ALinkActor* ALinkActor::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.LinkActor");
    return (ALinkActor*)res;
}
