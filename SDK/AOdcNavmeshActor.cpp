#include "AActor.hpp"
#include "AOdcNavmeshActor.hpp"
#include "FOdcNavGraphImage.hpp"
#include "FVector.hpp"
AOdcNavmeshActor* AOdcNavmeshActor::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.OdcNavmeshActor");
    return (AOdcNavmeshActor*)res;
}
