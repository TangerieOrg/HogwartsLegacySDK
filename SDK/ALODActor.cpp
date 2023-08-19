#include "AActor.hpp"
#include "ALODActor.hpp"
#include "UHLODProxy.hpp"
#include "UStaticMeshComponent.hpp"
ALODActor* ALODActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LODActor");
    return (ALODActor*)res;
}
