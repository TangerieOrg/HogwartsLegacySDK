#include "AActor.hpp"
#include "APhoenixPathActor.hpp"
#include "FVector.hpp"
#include "UMapPathComponent.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
APhoenixPathActor* APhoenixPathActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixPathActor");
    return (APhoenixPathActor*)res;
}
