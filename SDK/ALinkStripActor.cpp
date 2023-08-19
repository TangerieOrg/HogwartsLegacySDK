#include "ALinkActor.hpp"
#include "ALinkStripActor.hpp"
#include "FVector.hpp"
ALinkStripActor* ALinkStripActor::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.LinkStripActor");
    return (ALinkStripActor*)res;
}
